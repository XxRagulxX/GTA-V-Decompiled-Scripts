#include <iostream>
#include <filesystem>
#include <fstream>
#include <vector>
#include <thread>
#include <atomic>
#include <mutex>
#include <chrono>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <windows.h>

namespace fs = std::filesystem;

// CONFIGURATION
constexpr int PROC_LIMIT = 20;
const std::string SCRIPTS_DIR = "scripts";
const std::string OUT_DIR = "decompiled_scripts";
const std::string NATIVE_TABLES_DIR = "native_tables";
const std::string DECOMPILER_EXE = "decompiler.exe";
const std::string ALL_SCRIPT_NAMES = "all_script_names.txt";

std::atomic<int> processed_count(0);
std::atomic<int> success_count(0);
std::mutex error_mutex;
std::vector<std::pair<std::string, std::string>> failed_scripts;

void create_directory(const std::string& path) {
    try {
        if (!fs::exists(path)) {
            fs::create_directory(path);
        }
    }
    catch (const std::exception& e) {
        std::cerr << "ERROR creating directory " << path << ": " << e.what() << std::endl;
    }
}

std::vector<std::string> get_script_names_and_write_file(const std::string& filename) {
    std::vector<std::string> scripts;
    std::ofstream out(filename, std::ios::trunc);
    try {
        if (!fs::exists(SCRIPTS_DIR)) {
            std::cerr << "ERROR: Scripts directory not found: " << SCRIPTS_DIR << std::endl;
            return scripts;
        }
        for (const auto& entry : fs::directory_iterator(SCRIPTS_DIR)) {
            if (entry.is_directory()) {
                std::string dir_name = entry.path().filename().string();
                if (dir_name.size() > 4 && dir_name.substr(dir_name.size() - 4) == "_ysc") {
                    std::string script_name = dir_name.substr(0, dir_name.size() - 4);
                    scripts.push_back(script_name);
                    out << script_name << std::endl;
                }
            }
        }
        out.close();
        std::cout << "Wrote " << scripts.size() << " script names to " << filename << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "ERROR scanning scripts directory: " << e.what() << std::endl;
    }
    return scripts;
}

std::string win_normalize(const std::string& path) {
    std::string norm = path;
    std::replace(norm.begin(), norm.end(), '/', '\\');
    return norm;
}

void decompile_script(const std::string& script) {
    try {
        fs::path script_folder = fs::absolute(SCRIPTS_DIR) / (script + "_ysc");
        fs::path ysc_full_path = script_folder / (script + ".ysc.full");

        if (!fs::exists(script_folder)) throw std::runtime_error("Script folder not found: " + script_folder.string());
        if (!fs::exists(ysc_full_path)) throw std::runtime_error("Script file not found: " + ysc_full_path.string());

        fs::path decompiler_path = fs::absolute(DECOMPILER_EXE);
        if (!fs::exists(decompiler_path)) throw std::runtime_error("Decompiler not found: " + decompiler_path.string());

        std::string decompiler = win_normalize(decompiler_path.string());
        std::string scriptfile = win_normalize(ysc_full_path.string());

        if (decompiler.empty() || scriptfile.empty()) throw std::runtime_error("Empty decompiler or script path.");

        std::wstring wdecompiler(decompiler.begin(), decompiler.end());
        std::wstring wscriptfile(scriptfile.begin(), scriptfile.end());
        std::vector<const wchar_t*> args = { wdecompiler.c_str(), wscriptfile.c_str(), nullptr };

        std::cout << "[DEBUG] Running: " << decompiler << " " << scriptfile << std::endl;

        int result = _wspawnv(_P_WAIT, wdecompiler.c_str(), args.data());
        if (result != 0) throw std::runtime_error("Decompiler returned error code: " + std::to_string(result));

        fs::path src_c = script_folder / (script + ".ysc.full.c");
        fs::path dest_c = fs::absolute(OUT_DIR) / (script + ".c");
        if (!fs::exists(src_c)) throw std::runtime_error("Output .c file missing: " + src_c.string());
        if (fs::exists(dest_c)) fs::remove(dest_c);
        fs::rename(src_c, dest_c);

        fs::path src_native = script_folder / (script + ".ysc.full native table.txt");
        fs::path dest_native = fs::absolute(NATIVE_TABLES_DIR) / (script + ".txt");
        if (!fs::exists(src_native)) throw std::runtime_error("Native table missing: " + src_native.string());
        if (fs::exists(dest_native)) fs::remove(dest_native);
        fs::rename(src_native, dest_native);

        success_count++;
    }
    catch (const std::exception& e) {
        std::lock_guard<std::mutex> lock(error_mutex);
        failed_scripts.emplace_back(script, e.what());
    }
    processed_count++;
}

void print_progress(int total) {
    int last_percent = -1;
    while (processed_count < total) {
        int current = processed_count.load();
        int percent = static_cast<int>(static_cast<float>(current) / total * 100);
        if (percent != last_percent) {
            std::cout << "\rDecompiling: [" << std::setw(3) << percent << "%] "
                << current << "/" << total << " scripts" << std::flush;
            last_percent = percent;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    std::cout << "\rDecompiling: [100%] " << total << "/" << total << " scripts" << std::endl;
}

int main() {
    fs::path cwd = fs::current_path();
    std::cout << "Current working directory: " << cwd.string() << std::endl;

    if (!fs::exists(DECOMPILER_EXE)) {
        std::cerr << "CRITICAL ERROR: Decompiler not found at "
            << fs::absolute(DECOMPILER_EXE) << std::endl;
        std::cout << "Press Enter to exit..." << std::endl;
        std::cin.get();
        return 1;
    }

    if (!fs::exists(SCRIPTS_DIR)) {
        std::cerr << "CRITICAL ERROR: Scripts directory not found at "
            << fs::absolute(SCRIPTS_DIR) << std::endl;
        std::cout << "Press Enter to exit..." << std::endl;
        std::cin.get();
        return 1;
    }

    create_directory(OUT_DIR);
    create_directory(NATIVE_TABLES_DIR);

    // Write all script names to all_script_names.txt and get the list
    auto scripts = get_script_names_and_write_file(ALL_SCRIPT_NAMES);
    int total_scripts = static_cast<int>(scripts.size());

    if (total_scripts == 0) {
        std::cerr << "ERROR: No valid scripts found in " << SCRIPTS_DIR << std::endl;
        std::cout << "Press Enter to exit..." << std::endl;
        std::cin.get();
        return 1;
    }

    std::cout << "Starting decompilation of " << total_scripts
        << " scripts with up to " << PROC_LIMIT
        << " parallel processes...\n" << std::endl;

    std::thread progress_thread(print_progress, total_scripts);

    std::vector<std::thread> threads;
    for (const auto& script : scripts) {
        while (threads.size() >= PROC_LIMIT) {
            for (auto it = threads.begin(); it != threads.end();) {
                if (it->joinable()) {
                    it->join();
                    it = threads.erase(it);
                }
                else {
                    ++it;
                }
            }
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        }
        threads.emplace_back(decompile_script, script);
    }
    for (auto& t : threads) {
        if (t.joinable()) t.join();
    }
    if (progress_thread.joinable()) progress_thread.join();

    std::cout << "\nDecompilation completed!" << std::endl;
    std::cout << "Successfully processed: " << success_count << "/"
        << total_scripts << " scripts" << std::endl;

    if (!failed_scripts.empty()) {
        std::cout << "\nFailed scripts (" << failed_scripts.size() << "):" << std::endl;
        for (const auto& [script, error] : failed_scripts) {
            std::cout << " - " << script << ": " << error << std::endl;
        }
    }
    else {
        std::cout << "All scripts decompiled successfully." << std::endl;
    }

    std::cout << "Output directory: " << fs::absolute(OUT_DIR) << std::endl;
    std::cout << "Native tables directory: " << fs::absolute(NATIVE_TABLES_DIR) << std::endl;
    std::cout << "\nPress Enter to exit..." << std::endl;
    std::cin.get();
    return 0;
}