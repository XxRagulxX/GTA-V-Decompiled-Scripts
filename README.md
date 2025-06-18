# GTA V Decompiled Scripts 

Decompiled Scripts For Legacy and E&E

All decompiled .ysc game scripts, including native tables.

Note that this is a git repository, so there is a history, if you want to look at older scripts.


A Special Thanks to **Sainan**.


Clone this repo.
Install sfk, we will use this tool to change one byte in all scripts so that OpenIV can decrypt the scripts
Use OpenIV to navigate to update/update2.rpf/x64/levels/gta5/script/script_rel.rpf.
Press Ctrl+A then right-click and select "extract" to extract all scripts into the "raw_scripts" folder.
Download the background script from http://prod.cloud.rockstargames.com/titles/gta5/pcros/bgscripts/bg_ng_xxxx_y.rpf where xxxx_y equals your the game build, e.g. bg_ng_2628_0.rpf for build 2628, and extract "valentinerpreward2" via OpenIV and copy it to raw scripts.
Open a terminal in the folder where you just copied the raw scripts. And execute the following command:
sfk rep -binary /525343370B/525343370A/ -dir . -file .ysc
--> replace byte: 0xB with 0xA
--> only shows the diff

sfk rep -binary /525343370B/525343370A/ -dir . -file .ysc -yes
--> confirm editing
Upload the edied raw scripts somewhere with OpenIV in your GTA 5 directory.
Press Ctrl+A then right-click and select "Save Content/Export" to export all scripts to scripts
Run following command on your terminal: php bulk_decompile.php.
