#region Local Var
	char* sLocal_0 = 0;
	int iLocal_1 = 0;
	BOOL bLocal_2 = 0;
	int iLocal_3 = 0;
	BOOL bLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	BOOL bLocal_7 = 0;
	Object obLocal_8 = 0;
	BOOL bLocal_9 = 0;
	BOOL bLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = -1;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	BOOL bLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	Object obLocal_37 = 0;
	Vehicle veLocal_38 = 0;
	Vehicle veLocal_39 = 0;
	Vehicle veLocal_40 = 0;
	Vehicle veLocal_41 = 0;
	Vehicle veLocal_42 = 0;
	BOOL bLocal_43 = 0;
	BOOL bLocal_44 = 0;
	BOOL bLocal_45 = 0;
	BOOL bLocal_46 = 0;
	Entity eLocal_47 = 0;
	BOOL bLocal_48 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() // Position - 0x0 (0)
{
	int num;
	BOOL flag;

	sLocal_0 = "1.73.01";
	iLocal_1 = 1;
	iLocal_23 = -1;
	iLocal_24 = -1;
	iLocal_30 = 1;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	uScriptParam_0 == uScriptParam_0;
	num = MISC::GET_GAME_TIMER() + 10000;

	while (MISC::GET_GAME_TIMER() < num)
	{
		BUILTIN::WAIT(0);
	}

	Global_1576482 = MISC::GET_HASH_KEY(sLocal_0);
	Global_1576483 = iLocal_1;

	while (true)
	{
		if (IS_ROCKSTAR_DEV())
			func_105();
	
		flag = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	
		if (Global_2694337.f_3)
		{
			if (flag)
			{
				func_104();
				func_100();
				func_99();
				func_91();
				func_87();
				func_76();
				func_73();
				func_70();
				func_66();
				func_51();
				func_47();
				func_43();
				func_42();
				func_40();
				func_37();
				func_36();
				func_35();
				func_33();
				func_29();
				func_10();
			}
		
			func_9();
			func_1(flag);
		}
	
		NETWORK::NETWORK_IS_ACTIVITY_SESSION();
		BUILTIN::WAIT(0);
	}

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_1(BOOL bParam0) // Position - 0xE2 (226)
{
	if (bParam0)
	{
		if (!bLocal_7)
		{
			if (func_4())
			{
				func_2(&Global_1048576);
				NETWORK::NETWORK_BAIL(51, 0, 0);
				bLocal_7 = true;
			}
		}
	}
	else if (bLocal_7)
	{
		bLocal_7 = false;
	}

	return;
}

void func_2(var uParam0) // Position - 0x11A (282)
{
	int i;

	*uParam0 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 32;
	uParam0->f_10 = 0;
	uParam0->f_11 = 1;
	uParam0->f_12 = 1;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_14), "", 64);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_44), "", 24);
	uParam0->f_67 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = -1;
	uParam0->f_72 = -1;
	uParam0->f_4 = 1000;

	for (i = 0; i <= 63; i = i + 1)
	{
		if (i < 35)
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_1195[i /*6*/], "", 24);
	}

	func_3(&(uParam0->f_74));
	return;
}

void func_3(var uParam0) // Position - 0x1A2 (418)
{
	int i;
	var unk;

	for (i = 0; i <= *uParam0 - 1; i = i + 1)
	{
		uParam0->[i /*70*/] = { unk };
	}

	return;
}

BOOL func_4() // Position - 0x1CE (462)
{
	int i;
	Hash hashKey;

	if (func_7(&uLocal_5, 3000, false))
	{
		func_6(&uLocal_5, false, false);
	
		if (Global_1048576.f_67 > 0)
		{
			for (i = 0; i <= Global_1048576.f_67 - 1; i = i + 1)
			{
				hashKey = MISC::GET_HASH_KEY(&Global_1048576.f_74[i /*70*/]);
			
				if (func_5(hashKey))
					return true;
			}
		}
	}

	return false;
}

BOOL func_5(Hash hParam0) // Position - 0x22C (556)
{
	switch (hParam0)
	{
		case 1353980833:
		case -264444718:
		case -619405321:
		case 272315203:
		case 973972777:
		case -1349054386:
		case -992586115:
		case -873950947:
		case 1794933847:
		case 1144914597:
		case -1644394473:
		case -971075350:
		case 1557166877:
		case 1844966436:
		case -1869164192:
		case -1274847993:
		case -447866612:
		case -374232416:
		case 1786877744:
		case 1878942357:
		case 2010828775:
		case -1979655010:
		case 877706734:
		case -484555860:
		case 467119084:
		case -603513051:
		case -1691134529:
		case 1375870003:
		case 1256838329:
		case 1143347112:
		case -2079922581:
		case -584380916:
		case 1700357051:
		case -668162985:
		case -1669450127:
		case 1323854230:
		case -1702249703:
		case -2000439578:
		case 1919165931:
		case 1248191494:
		case 487553267:
		case 60360405:
		case 124384896:
		case 2029985126:
		case -1546822797:
		case -451530146:
		case 2113787171:
		case 1642612080:
		case 1427532094:
		case joaat("ILftw0VGzEmaDjbavoRLDA"):
		case -1738039549:
		case -191200378:
		case -297941166:
		case -1819543452:
		case -422291285:
		case -1728459505:
		case -1143692234:
		case -1249864039:
		case -888332205:
		case 1273670719:
		case 1704054677:
		case 35443586:
		case -844541994:
		case 465361:
		case 1577743630:
		case -137112501:
		case -827758392:
		case 1637918252:
		case 1303864770:
		case 112089010:
		case 511100447:
		case -1593906097:
		case 2067181637:
		case 490549700:
		case -1254107161:
		case 1417500888:
		case -1320695507:
		case 319564771:
		case -1842227191:
		case -1038651575:
		case 8963787:
		case 1514436675:
		case 1926811590:
		case -1165309910:
		case 1454264907:
		case 554108128:
		case 1120762277:
		case -833749804:
		case 1885714027:
		case -1447160645:
		case 1099444592:
		case 1088622293:
		case 115692680:
		case -1949362093:
		case 760332755:
		case -1361135836:
		case -370319006:
		case -1633460737:
		case -1862345025:
		case -1381896991:
		case 50444107:
		case 827236257:
		case -666476108:
		case 240635129:
		case -260768998:
		case 254409656:
		case 532129759:
		case -1349547490:
		case -1537226998:
		case -777132973:
		case 1562359:
		case -565556149:
		case -1598309531:
		case 120122340:
			return true;
	
		default:
		
	}

	return false;
}

void func_6(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4EC (1260)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		if (!bParam2)
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		else
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	else
		*uParam0 = MISC::GET_GAME_TIMER();

	uParam0->f_1 = 1;
	return;
}

BOOL func_7(var uParam0, int iParam1, BOOL bParam2) // Position - 0x529 (1321)
{
	if (iParam1 == -1)
		return true;

	func_8(uParam0, bParam2, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
		return true;

	return false;
}

void func_8(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x587 (1415)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
			if (!bParam2)
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			else
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		else
			*uParam0 = MISC::GET_GAME_TIMER();
	
		uParam0->f_1 = 1;
	}

	return;
}

void func_9() // Position - 0x5CC (1484)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("creator")) > 0 && IS_BIT_SET(Global_1575014, 20))
		MISC::CLEAR_BIT(&Global_1575014, 20);

	return;
}

void func_10() // Position - 0x5F8 (1528)
{
	Hash model;
	int num;
	int data;
	float num2;
	float num3;
	Vector3 vector;

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_17))
	{
		MISC::SET_BIT(&Global_9503, 2);
	
		if (func_7(&uLocal_17, 60000, false))
		{
			func_6(&uLocal_17, false, false);
			_STOPWATCH_DESTROY(&uLocal_17);
		}
	}

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_15) && func_7(&uLocal_15, 1000, false))
	{
		if (iLocal_24 == -1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_24 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_24, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", false, 0);
			}
		}
		else if (func_7(&uLocal_15, 4000, false))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_24))
				AUDIO::STOP_SOUND(iLocal_24);
		
			AUDIO::RELEASE_SOUND_ID(iLocal_24);
			iLocal_24 = -1;
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
			func_6(&uLocal_15, false, false);
			_STOPWATCH_DESTROY(&uLocal_15);
		}
	}

	if (!bLocal_9 && !func_22())
		return;

	bLocal_9 = true;
	MISC::SET_BIT(&Global_9503, 2);

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_8))
	{
		model = joaat("imp_prop_ship_01a");
		STREAMING::REQUEST_MODEL(model);
	
		if (STREAMING::HAS_MODEL_LOADED(model))
		{
			obLocal_8 = OBJECT::CREATE_OBJECT_NO_OFFSET(model, 360.8759f, 5623.4272f, 780.1747f, false, false, true, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			ENTITY::FREEZE_ENTITY_POSITION(obLocal_8, true);
			ENTITY::SET_ENTITY_LOD_DIST(obLocal_8, 8000);
			num = func_21(7869, -1);
			func_17(7869, num + 1, -1, true);
			data.f_1 = 1;
			data = 24;
			STATS::PLAYSTATS_GUNRUNNING_MISSION_ENDED(&data);
			uLocal_19 = { ENTITY::GET_ENTITY_COORDS(obLocal_8, false) };
			iLocal_22 = 0;
		}
	}
	else
	{
		func_16();
	
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			if (iLocal_23 == -1)
			{
				AUDIO::START_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
				iLocal_23 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_23, "07", obLocal_8, "DLC_GR_CS2_Sounds", false, 0);
			}
		
			if (!bLocal_10)
			{
				if (func_7(&uLocal_11, 4500, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(obLocal_8, false);
					func_6(&uLocal_11, false, false);
					_STOPWATCH_DESTROY(&uLocal_11);
					func_8(&uLocal_13, false, false);
					bLocal_10 = true;
				}
			}
			else
			{
				num2 = BUILTIN::TO_FLOAT(func_15(&uLocal_13, false, false)) / BUILTIN::TO_FLOAT(func_14());
				num3 = BUILTIN::TO_FLOAT(func_15(&uLocal_11, false, false)) / BUILTIN::TO_FLOAT(func_13());
				num3 = num3 * num2;
				vector = { func_11(uLocal_19, func_12(), num3) };
				ENTITY::SET_ENTITY_COORDS(obLocal_8, vector, true, false, false, true);
			
				if (num3 >= 1f)
				{
					iLocal_22 = iLocal_22 + 1;
					uLocal_19 = { ENTITY::GET_ENTITY_COORDS(obLocal_8, false) };
					func_6(&uLocal_11, false, false);
					_STOPWATCH_DESTROY(&uLocal_11);
				
					if (func_13() == -1)
					{
						OBJECT::DELETE_OBJECT(&obLocal_8);
						MISC::FORCE_LIGHTNING_FLASH();
					
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_23))
							AUDIO::STOP_SOUND(iLocal_23);
					
						AUDIO::RELEASE_SOUND_ID(iLocal_23);
						iLocal_23 = -1;
						func_8(&uLocal_15, false, false);
						func_8(&uLocal_17, false, false);
						func_6(&uLocal_13, false, false);
						_STOPWATCH_DESTROY(&uLocal_13);
						uLocal_19 = { 0f, 0f, 0f };
						iLocal_22 = 0;
						bLocal_9 = false;
						bLocal_10 = false;
					}
				}
			}
		}
	}

	return;
}

Vector3 func_11(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Position - 0x89D (2205)
{
	return ({ 1f - fParam6, 1f - fParam6, 1f - fParam6 } * uParam0) + ({ fParam6, fParam6, fParam6 } * uParam3);
}

Vector3 func_12() // Position - 0x8B8 (2232)
{
	switch (iLocal_22)
	{
		case 0:
			return 306.567f, 5652.283f, 785.594f;
	
		case 1:
			return -1082.8652f, 6390.5195f, 924.2493f;
	
		case 2:
			return -2542.874f, 7217.5137f, 1051.3335f;
	
		case 3:
			return -4139.1064f, 8143.3022f, 1412.694f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

int func_13() // Position - 0x92A (2346)
{
	switch (iLocal_22)
	{
		case 0:
			return 2000;
	
		case 1:
			return 1000;
	
		case 2:
			return 100;
	
		case 3:
			return 50;
	
		default:
		
	}

	return -1;
}

int func_14() // Position - 0x968 (2408)
{
	return 3150;
}

int func_15(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x973 (2419)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		if (!bParam2)
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		else
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);

	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

void func_16() // Position - 0x9BA (2490)
{
	float entityRotation;

	entityRotation = { ENTITY::GET_ENTITY_ROTATION(obLocal_8, 2) };
	entityRotation = 0f;
	entityRotation.f_1 = 0f;
	entityRotation.f_2 = entityRotation.f_2 + 1f;
	ENTITY::SET_ENTITY_ROTATION(obLocal_8, entityRotation, 2, true);
	return;
}

void func_17(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x9EB (2539)
{
	Hash statName;

	statName = func_18(iParam0, iParam2);

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, bParam3);

	return;
}

Hash func_18(int iParam0, int iParam1) // Position - 0xA0E (2574)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_19(iParam1));
}

int func_19(int iParam0) // Position - 0xA23 (2595)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_20();
	
		if (num2 > -1)
		{
			Global_2741491 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2741491 = 1;
		}
	}

	return num;
}

int func_20() // Position - 0xA57 (2647)
{
	return Global_1574928;
}

int func_21(int iParam0, int iParam1) // Position - 0xA63 (2659)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 16764)
	{
		statHash = func_18(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL func_22() // Position - 0xA92 (2706)
{
	if (_STAT_GET_PACKED_BOOL(22107, -1) && Global_2640100 == 7 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && func_25(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f) && Global_2686119.f_3083.f_178 >= 1 && Global_2686119.f_3083.f_178 < 4 && func_24() && func_23())
		return true;

	return false;
}

BOOL func_23() // Position - 0xB13 (2835)
{
	if (_STAT_GET_PACKED_BOOL(15476, -1) && func_21(5453, func_20()) > 577)
		return true;

	return false;
}

BOOL func_24() // Position - 0xB3F (2879)
{
	int weatherType1;
	int weatherType2;
	float percentWeather2;

	MISC::GET_CURR_WEATHER_STATE(&weatherType1, &weatherType2, &percentWeather2);

	if (percentWeather2 < 0.5f)
		if (weatherType1 == joaat("rain") || weatherType1 == joaat("THUNDER") || weatherType2 == joaat("xmas"))
			return true;
	else if (weatherType2 == joaat("rain") || weatherType2 == joaat("THUNDER") || weatherType2 == joaat("xmas"))
		return true;

	return false;
}

BOOL func_25(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0xBB6 (2998)
{
	return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, true), fParam1) <= fParam4 * fParam4;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0xBD3 (3027)
{
	if (iParam1 == -1)
		iParam1 = func_20();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0xBEF (3055)
{
	uParam0->f_1 = 0;
	return;
}

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0xBFC (3068)
{
	return uParam0->f_1;
}

void func_29() // Position - 0xC08 (3080)
{
	int i;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-635282018) <= 0)
	{
		bLocal_48 = false;
		return;
	}

	if (!func_30())
	{
		bLocal_48 = false;
		return;
	}

	if (bLocal_48)
		return;

	for (i = 0; i <= 34; i = i + 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&Global_114963.f_14150[i /*104*/], "KSC_TXT_BRB3"))
		{
		}
		else
		{
			TEXT_LABEL_ASSIGN_STRING(&(Global_114963.f_14150[i /*104*/].f_83), "~a~", 64);
			Global_114963.f_14150[i /*104*/].f_66 = 2;
			bLocal_48 = true;
			break;
		}
	}

	return;
}

BOOL func_30() // Position - 0xC8B (3211)
{
	return func_31(*Global_4718592.f_132931);
}

BOOL func_31(int iParam0) // Position - 0xCA1 (3233)
{
	if (iParam0 == 0)
		return 0;

	if (iParam0 == 97645458 || iParam0 == -1784228215 || iParam0 == 1207616054 || iParam0 == -1792579181 || iParam0 == -425660339 || iParam0 == -1938166757 || iParam0 == 2029245399)
		return 1;

	if (iParam0 == func_32(16) || iParam0 == func_32(17) || iParam0 == func_32(18) || iParam0 == func_32(19) || iParam0 == func_32(20) || iParam0 == func_32(21) || iParam0 == func_32(22))
		return 1;

	return 0;
}

int func_32(int iParam0) // Position - 0xD81 (3457)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_37389[0];
	
		case 9:
			return Global_262145.f_37389[1];
	
		case 10:
			return Global_262145.f_37389[2];
	
		case 16:
			return Global_262145.f_37389[3];
	
		case 17:
			return Global_262145.f_37389[4];
	
		case 18:
			return Global_262145.f_37389[5];
	
		case 19:
			return Global_262145.f_37389[6];
	
		case 20:
			return Global_262145.f_37389[7];
	
		case 21:
			return Global_262145.f_37389[8];
	
		case 22:
			return Global_262145.f_37389[9];
	
		default:
		
	}

	return -1;
}

void func_33() // Position - 0xE65 (3685)
{
	int num;
	int i;
	float entityCoords;
	BOOL flag;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-635282018) <= 0)
	{
		eLocal_47 = 0;
		return;
	}

	num = -1;

	if (*Global_4718592.f_132931 == Global_262145.f_37389[4])
		num = 5;

	if (*Global_4718592.f_132931 == Global_262145.f_37389[5])
		num = 5;

	if (*Global_4718592.f_132931 == Global_262145.f_37389[6])
		num = 10;

	if (*Global_4718592.f_132931 == Global_262145.f_37389[7])
		num = 10;

	if (num == -1)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(eLocal_47))
	{
		for (i = 0; i <= 31; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1058150.f_124[i]))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_1058150.f_124[i]) == -630156392)
				{
					eLocal_47 = Global_1058150.f_124[i];
					break;
				}
			}
		}
	
		if (!ENTITY::DOES_ENTITY_EXIST(eLocal_47))
			return;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(eLocal_47))
		return;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(eLocal_47))
		return;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(eLocal_47, true) };
	flag = false;

	if (!func_34(entityCoords.f_2, Global_4980736.f_7128[num /*668*/].f_2, 0.001f))
	{
		entityCoords.f_2 = Global_4980736.f_7128[num /*668*/].f_2;
		flag = true;
	}

	if (!func_34(entityCoords, Global_4980736.f_7128[num /*668*/], 0.001f))
	{
		entityCoords = Global_4980736.f_7128[num /*668*/];
		flag = true;
	}

	if (flag)
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(eLocal_47, entityCoords, false, false, true);

	return;
}

BOOL func_34(float fParam0, var uParam1, float fParam2) // Position - 0xFF8 (4088)
{
	return MISC::ABSF(fParam0 - uParam1) <= fParam2;
}

void func_35() // Position - 0x100C (4108)
{
	if (*Global_4718592.f_132931 == Global_262145.f_37389[8] || *Global_4718592.f_132931 == Global_262145.f_37389[9])
		if (IS_BIT_SET(Global_4718592.f_208680[1 /*346*/].f_9[0 /*28*/][0], 22))
			MISC::CLEAR_BIT(&Global_4718592.f_208680[1 /*346*/].f_9[0 /*28*/][0], 22);

	return;
}

void func_36() // Position - 0x1083 (4227)
{
	int i;
	var src;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (!IS_BIT_SET(Global_1575014, 20))
		{
			if (!bLocal_46)
			{
				bLocal_46 = true;
				src.f_71 = -1;
				src.f_72 = -1;
				src.f_73 = 2;
			
				for (i = 0; i < 16; i = i + 1)
				{
					MISC::COPY_SCRIPT_STRUCT(&Global_1013430.f_4[i /*95*/], &src, 95);
				}
			}
		}
	}
	else if (bLocal_46)
	{
		bLocal_46 = false;
	}

	return;
}

void func_37() // Position - 0x10EB (4331)
{
	if (!IS_BIT_SET(Global_1057199.f_106, 28))
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_39(*Global_4718592.f_132931) || func_38(*Global_4718592.f_132931))
			MISC::SET_BIT(&(Global_1057199.f_106), 28);

	return;
}

int func_38(int iParam0) // Position - 0x113A (4410)
{
	int i;
	int j;

	if (iParam0 != 0)
	{
		for (j = 0; j < 25; j = j + 1)
		{
			if (Global_262145.f_7031[j] == 370)
			{
				for (i = 0; i < Global_262145.f_6183[j]; i = i + 1)
				{
					if (iParam0 == Global_262145.f_4732[j /*51*/][i])
						return 1;
				}
			}
		}
	}

	return 0;
}

int func_39(int iParam0) // Position - 0x11A1 (4513)
{
	int i;
	int j;

	if (iParam0 != 0)
	{
		for (j = 0; j < 25; j = j + 1)
		{
			if (Global_262145.f_7031[j] == 302)
			{
				for (i = 0; i < Global_262145.f_6183[j]; i = i + 1)
				{
					if (iParam0 == Global_262145.f_4732[j /*51*/][i])
						return 1;
				}
			}
		}
	}

	return 0;
}

void func_40() // Position - 0x1208 (4616)
{
	int i;

	if (IS_BIT_SET(Global_1057199.f_106, 28) && NETWORK::NETWORK_IS_ACTIVITY_SESSION() && Global_1057199.f_10 == 0 || Global_1057199.f_10 == 2)
	{
		if (!bLocal_45 && !func_41())
		{
			bLocal_45 = true;
		
			for (i = 0; i < 18; i = i + 1)
			{
				Global_1057199.f_12[i] = -1;
			}
		}
	}
	else
	{
		IS_BIT_SET(Global_1057199.f_106, 28);
	
		if (bLocal_45)
			bLocal_45 = false;
	}

	return;
}

BOOL func_41() // Position - 0x1288 (4744)
{
	if (*Global_4718592.f_133517 == 5 || *Global_4718592.f_133517 == 6)
		return true;

	return false;
}

void func_42() // Position - 0x12B6 (4790)
{
	int i;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) <= 0)
	{
		bLocal_44 = false;
		return;
	}

	if (bLocal_44)
		return;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (Global_4718592.f_190203[i] == 113)
			Global_4718592.f_190203[i] = 107;
	}

	bLocal_44 = true;
	return;
}

void func_43() // Position - 0x130F (4879)
{
	Vector3 entityCoords;
	Vector3 vector;
	Vector3 vector2;
	Vector3 vector3;

	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (bLocal_43)
		{
			PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), true);
			bLocal_43 = false;
		}
	
		return;
	}

	if (!func_45() && !func_44(*Global_4718592.f_197291))
		return;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };

	if (IS_BIT_SET(*Global_4718592.f_189722, 4))
	{
		vector = { -1666.3678f, 478.9271f, 128.22156f };
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, -1647.504f, 490f, 128.221f, -1645.773f, 492.209f, 130.09f, 1f, false, true))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_JUMP, true);
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 47, true);
		}
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, -1670.2731f, 463.26147f, 127.92162f, -1673.2775f, 462.3141f, 129.22162f, 1.6f, false, true))
			INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), INTERIOR::GET_INTERIOR_AT_COORDS(vector), 1774198988);
	}

	if (IS_BIT_SET(*Global_4718592.f_189722, 8))
	{
		vector2 = { 539.7012f, 749.08936f, 201.36165f };
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, 556.71313f, 735.3046f, 201.36159f, 559.4353f, 734.5082f, 203.23059f, 1f, false, true))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_JUMP, true);
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 47, true);
		}
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, 523.8675f, 747.2859f, 201.4861f, 521.7375f, 749.7493f, 201.86261f, 1.5f, false, true))
			INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), INTERIOR::GET_INTERIOR_AT_COORDS(vector2), 1774198988);
	}

	if (IS_BIT_SET(*Global_4718592.f_189722, 10))
	{
		vector3 = { -2586.065f, 1909.995f, 166.37543f };
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, -2579.114f, 1889.248f, 166.37537f, -2577.2593f, 1887.112f, 168.0445f, 1f, false, true))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_JUMP, true);
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 47, true);
		}
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, -1670.3148f, 463.31012f, 127.92162f, -1673.2775f, 462.3141f, 129.22162f, 1.5f, false, true))
			INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), INTERIOR::GET_INTERIOR_AT_COORDS(vector3), 1774198988);
	}

	if (PED::CAN_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), false);
		bLocal_43 = true;
	}

	return;
}

BOOL func_44(int iParam0) // Position - 0x156A (5482)
{
	return iParam0 == 95;
}

BOOL func_45() // Position - 0x1577 (5495)
{
	if (*Global_4718592.f_132931 == func_46(5) || *Global_4718592.f_132931 == func_46(6) || *Global_4718592.f_132931 == func_46(7))
		return true;

	return false;
}

int func_46(int iParam0) // Position - 0x15C3 (5571)
{
	if (iParam0 != -1)
		return Global_262145.f_37061[iParam0];

	return -1;
}

void func_47() // Position - 0x15E2 (5602)
{
	Vector3 vector;
	Vector3 vector2;
	int allVehicles;
	int i;
	var minimum;
	float maximum;
	Vector3 offsetFromCoordAndHeadingInWorldCoords;
	var offsetFromCoordAndHeadingInWorldCoords2;
	var offsetFromCoordAndHeadingInWorldCoords3;
	Vector3 offsetFromCoordAndHeadingInWorldCoords4;
	BOOL flag;
	BOOL flag2;

	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return;

	if (*Global_4718592.f_132931 != Global_262145.f_37061[2])
		return;

	vector = { -941.45f, -2601.8f, -8.925f };
	vector2 = { -920.331f, -2584.174f, -8.925f };

	if (IS_BIT_SET(Global_1574952, 4) && func_50() >= 2)
	{
		Global_2686119.f_7207[func_49(18, 0) /*5*/] = { vector };
		Global_2686119.f_7207[func_49(18, 0) /*5*/].f_3 = -49.93f;
		Global_2686119.f_7207[func_49(18, 1) /*5*/] = { vector2 };
		Global_2686119.f_7207[func_49(18, 1) /*5*/].f_3 = 130.61f;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(veLocal_39) || !ENTITY::DOES_ENTITY_EXIST(veLocal_41) || !ENTITY::DOES_ENTITY_EXIST(veLocal_40) || !ENTITY::DOES_ENTITY_EXIST(veLocal_42))
	{
		allVehicles = VEHICLE::GET_ALL_VEHICLES(&Global_1576521);
		i = 0;
	
		for (i = 0; i < allVehicles; i = i + 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_1576521[i]))
			{
			}
			else if (ENTITY::GET_ENTITY_MODEL(Global_1576521[i]) != joaat("metrotrain"))
			{
			}
			else
			{
				if (func_48(Global_1576521[i]) == 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(veLocal_39))
						if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_39) != Global_1576521[i] && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_40) != Global_1576521[i])
							veLocal_39 = Global_1576521[i];
				
					if (!ENTITY::DOES_ENTITY_EXIST(veLocal_40))
						if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_39) != Global_1576521[i] && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_40) != Global_1576521[i])
							veLocal_40 = Global_1576521[i];
				}
			
				if (func_48(Global_1576521[i]) == 1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(veLocal_41))
						if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_41) != Global_1576521[i] && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_42) != Global_1576521[i])
							veLocal_41 = Global_1576521[i];
				
					if (!ENTITY::DOES_ENTITY_EXIST(veLocal_42))
						if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_41) != Global_1576521[i] && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_42) != Global_1576521[i])
							veLocal_42 = Global_1576521[i];
				}
			}
		}
	
		return;
	}

	MISC::GET_MODEL_DIMENSIONS(joaat("metrotrain"), &minimum, &maximum);
	maximum = 0f;
	maximum.f_2 = 0f;
	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(veLocal_39, false), ENTITY::GET_ENTITY_HEADING(veLocal_39), maximum) };
	offsetFromCoordAndHeadingInWorldCoords2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(veLocal_40, false), ENTITY::GET_ENTITY_HEADING(veLocal_40), maximum) };
	MISC::GET_MODEL_DIMENSIONS(joaat("metrotrain"), &minimum, &maximum);
	maximum = 0f;
	maximum.f_2 = 0f;
	offsetFromCoordAndHeadingInWorldCoords3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(veLocal_41, false), ENTITY::GET_ENTITY_HEADING(veLocal_41), maximum) };
	offsetFromCoordAndHeadingInWorldCoords4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(veLocal_42, false), ENTITY::GET_ENTITY_HEADING(veLocal_42), maximum) };
	flag2 = ENTITY::IS_ENTITY_TOUCHING_ENTITY(veLocal_42, veLocal_39) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(veLocal_42, veLocal_40);

	if (BUILTIN::VDIST2(offsetFromCoordAndHeadingInWorldCoords, offsetFromCoordAndHeadingInWorldCoords4) < BUILTIN::POW(5f, 2f) || flag2)
		flag = true;

	if (flag)
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veLocal_41))
			VEHICLE::SET_TRAIN_SPEED(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_41), 0f);
	
		Global_4980736.f_92195[1 /*240*/].f_8 = 0;
		MISC::SET_BIT(&(Global_4980736.f_92195[1 /*240*/].f_9), 8);
		MISC::SET_BIT(&(Global_4980736.f_92195[1 /*240*/].f_9), 9);
		MISC::SET_BIT(&(Global_4980736.f_92195[1 /*240*/].f_9), 10);
		MISC::SET_BIT(&(Global_4980736.f_92195[1 /*240*/].f_9), 11);
	}

	if (flag2)
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veLocal_39))
			ENTITY::SET_ENTITY_COORDS(veLocal_39, vector, true, false, false, true);

	if (flag2)
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veLocal_41))
			ENTITY::SET_ENTITY_COORDS(veLocal_41, vector2, true, false, false, true);

	return;
}

int func_48(Vehicle veParam0) // Position - 0x19A2 (6562)
{
	int _int;

	if (veParam0 == 0)
		return -1;

	_int = -1;

	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MC_TrainID", INT))
		if (DECORATOR::DECOR_EXIST_ON(veParam0, "MC_TrainID"))
			_int = DECORATOR::DECOR_GET_INT(veParam0, "MC_TrainID");

	return _int;
}

int func_49(int iParam0, int iParam1) // Position - 0x19DB (6619)
{
	int i;

	for (i = 0; i <= *Global_4980736.f_224044 - 1; i = i + 1)
	{
		if (Global_4980736.f_224028[i /*3*/] != iParam0 || Global_4980736.f_224028[i /*3*/].f_1 != iParam1)
		{
		}
		else
		{
			return i;
		}
	}

	return -1;
}

int func_50() // Position - 0x1A34 (6708)
{
	int i;

	for (i = 6; i >= 0; i = i + -1)
	{
		if (IS_BIT_SET(Global_2686119.f_3930, i))
			return i;
	}

	return 0;
}

void func_51() // Position - 0x1A61 (6753)
{
	int num;
	Vector3 vector;
	float heading;

	if (MISC::GET_FRAME_COUNT() % 60 == 0)
	{
		if (func_64(PLAYER::PLAYER_ID(), false) && Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_11 == PLAYER::PLAYER_ID() && !func_63(PLAYER::PLAYER_ID()))
		{
			if (func_62(veLocal_38, true) || func_61(&veLocal_38))
			{
				if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(veLocal_38) < 0.75f)
				{
					num = func_58(PLAYER::PLAYER_ID());
					vector = { func_55(num, func_57(), 0) };
					heading = func_52(num, func_54(), 0);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(veLocal_38, vector, false, false, true);
					ENTITY::SET_ENTITY_HEADING(veLocal_38, heading);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_38, 1084227584);
					VEHICLE::SET_VEHICLE_FIXED(veLocal_38);
					ENTITY::SET_ENTITY_HEALTH(veLocal_38, 1000, 0, 0);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veLocal_38, 1000f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(veLocal_38, 1000f);
					VEHICLE::SET_VEHICLE_DIRT_LEVEL(veLocal_38, 0f);
					VEHICLE::SET_HELI_MAIN_ROTOR_HEALTH(veLocal_38, 1000f);
					VEHICLE::SET_HELI_TAIL_ROTOR_HEALTH(veLocal_38, 1000f);
				}
			}
		}
	}

	return;
}

float func_52(int iParam0, float fParam1, int iParam2) // Position - 0x1B58 (7000)
{
	float i;

	for (i = fParam1 + func_53(iParam0, iParam2); i < 0f; i = i + 360f)
	{
	}

	while (i >= 360f)
	{
		i = i - 360f;
	}

	return i;
}

float func_53(int iParam0, int iParam1) // Position - 0x1B9B (7067)
{
	switch (iParam0)
	{
		case 177:
			return -84.083f;
	
		case 178:
			return 17.77f;
	
		case 179:
			return -51.69f;
	}

	return 0f;
}

float func_54() // Position - 0x1BDE (7134)
{
	return 89.3175f;
}

Vector3 func_55(int iParam0, float fParam1, float fParam2, float fParam3, int iParam4) // Position - 0x1BEB (7147)
{
	Vector3 vector;
	float heading;

	vector = { func_56(iParam0, iParam4) };
	heading = func_53(iParam0, iParam4);
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vector, heading, fParam1);
}

Vector3 func_56(int iParam0, int iParam1) // Position - 0x1C17 (7191)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 177:
					return -2586.065f, 1909.995f, 166.37543f;
			
				case 178:
					return -1666.3678f, 478.9271f, 128.22156f;
			
				case 179:
					return 539.7012f, 749.08936f, 201.36165f;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 177:
					return -2568.9338f, 1920.2028f, 155.51825f;
			
				case 178:
					return -1679.8766f, 493.596f, 117.36438f;
			
				case 179:
					return 548.6964f, 766.88684f, 190.50447f;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 177:
					return -2587.4958f, 1893.193f, 155.51833f;
			
				case 178:
					return -1649.6301f, 480.9779f, 117.364456f;
			
				case 179:
					return 547.4955f, 734.136f, 190.50447f;
			}
			break;
	
		default:
			switch (iParam0)
			{
				case 177:
					return -2586.065f, 1909.995f, 166.37543f;
			
				case 178:
					return -1666.3678f, 478.9271f, 128.22156f;
			
				case 179:
					return 539.7012f, 749.08936f, 201.36165f;
			}
			break;
	}

	return 0f, 0f, 0f;
}

Vector3 func_57() // Position - 0x1DA7 (7591)
{
	return 24.4139f, -0.7575f, 5.7428f;
}

int func_58(Player plParam0) // Position - 0x1DBE (7614)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			return Global_2658293[plParam0 /*468*/].f_325.f_8;
		else if (Global_1575095 || Global_2635562.f_2983 && plParam0 == PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(plParam0, true, false))
			return Global_2658293[plParam0 /*468*/].f_325.f_8;

	return -1;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x1E2D (7725)
{
	Player player;

	player = player;

	if (player != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
			if (bIsPlaying)
				if (!PLAYER::IS_PLAYER_PLAYING(player))
					return false;
		
			if (bUnk)
				if (player == Global_2673273.f_3)
					return Global_2673273.f_2;
				else if (Global_2658293[player /*468*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x1E8D (7821)
{
	return -1;
}

BOOL func_61(var uParam0) // Position - 0x1E96 (7830)
{
	int allVehicles;
	int i;

	allVehicles = VEHICLE::GET_ALL_VEHICLES(&Global_1576521);

	for (i = 0; i < allVehicles; i = i + 1)
	{
		if (func_62(Global_1576521[i], true))
		{
			*uParam0 = Global_1576521[i];
			return 1;
		}
	}

	return 0;
}

BOOL func_62(Vehicle veParam0, BOOL bParam1) // Position - 0x1EDB (7899)
{
	if (Global_80337)
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && !bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "Mansion_Spawned_Heli"))
				return true;

	return false;
}

BOOL func_63(Player plParam0) // Position - 0x1F19 (7961)
{
	if (plParam0 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true))
		return IS_BIT_SET(Global_2658293[plParam0 /*468*/].f_325, 3);

	return false;
}

BOOL func_64(Player plParam0, BOOL bParam1) // Position - 0x1F4A (8010)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (bParam1 || _NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2658293[plParam0 /*468*/].f_325.f_8 != -1)
				return func_65(Global_2658293[plParam0 /*468*/].f_325.f_8) == 33;

	return false;
}

int func_65(int iParam0) // Position - 0x1F99 (8089)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
	
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
	
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
	
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
	
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
	
		case 81:
			return 5;
	
		case 82:
			return 6;
	
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
	
		case 88:
			return 8;
	
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
	
		case 101:
			return 10;
	
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
	
		case 117:
			return 12;
	
		case 122:
			return 13;
	
		case 123:
			return 14;
	
		case 124:
			return 15;
	
		case 125:
			return 16;
	
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
	
		case 145:
			return 18;
	
		case 146:
			return 19;
	
		case 147:
			return 20;
	
		case 148:
			return 21;
	
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
	
		case 154:
			return 23;
	
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	
		case 159:
			return 25;
	
		case 160:
			return 26;
	
		case 161:
			return 27;
	
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
	
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 29;
	
		case 172:
			return 30;
	
		case 173:
			return 31;
	
		case 174:
		case 175:
		case 176:
			return 32;
	
		case 177:
		case 178:
		case 179:
			return 33;
	}

	return -1;
}

void func_66() // Position - 0x24E9 (9449)
{
	BOOL flag;
	int num;
	Vector3 vector;
	Vector3 vector2;
	Vector3 vector3;
	Vector3 vector4;
	Vector3 vector5;
	Vector3 vector6;
	Vector3 vector7;
	Vector3 vector8;
	int num2;
	int num3;

	if (IS_BIT_SET(Global_1950702.f_6, 11) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
	{
		flag = false;
		num = func_58(PLAYER::PLAYER_ID());
	
		if (num == 178 || num == 177)
		{
			vector = { func_55(num, 39.806f, -60.056f, -7.18f, 0) };
			vector2 = { func_55(num, 30.886f, -66.37f, -5.169f, 0) };
			vector3 = { func_55(num, 34.273f, -54.396f, -7.18f, 0) };
			vector4 = { func_55(num, 37.014f, -58.107f, -5.169f, 0) };
		
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vector, vector2, 2.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vector3, vector4, 2.5f, false, true, 0))
				flag = true;
		}
		else if (num == 179)
		{
			vector5 = { func_55(num, 27.85f, -38.986f, -7.149f, 0) };
			vector6 = { func_55(num, 28.146f, -48.013f, -5.138f, 0) };
			vector7 = { func_55(num, 22.746f, -50.462f, -7.149f, 0) };
			vector8 = { func_55(num, 18.001f, -50.472f, -5.138f, 0) };
		
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vector5, vector6, 2.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vector7, vector8, 2.5f, false, true, 0))
				flag = true;
		}
	
		if (flag)
		{
			num2 = func_68(PLAYER::PLAYER_PED_ID());
			num3 = func_67(num2);
		
			if (num3 == -1)
			{
			}
			else if (Global_45933[num3 /*5*/].f_3 >= 8)
			{
				Global_45933[num3 /*5*/].f_3 = 7;
			}
		}
	}

	return;
}

int func_67(int iParam0) // Position - 0x26B4 (9908)
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_45933[i /*5*/] == iParam0)
			return i;
	}

	return -1;
}

int func_68(Ped pedParam0) // Position - 0x26E4 (9956)
{
	int i;

	if (pedParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (pedParam0 == Global_45933[i /*5*/].f_1)
			return Global_45933[i /*5*/];
	}

	return -1;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Vehicle veParam0) // Position - 0x2725 (10021)
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
			return true;

	return false;
}

void func_70() // Position - 0x2746 (10054)
{
	if (func_72() == 178 && func_71() == 482563055)
	{
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_37))
			return;
	
		STREAMING::REQUEST_MODEL(joaat("prop_dummy_car"));
	
		if (STREAMING::HAS_MODEL_LOADED(joaat("prop_dummy_car")))
		{
			obLocal_37 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_dummy_car"), -1628.8046f, 486.4122f, 118.4275f, false, false, false, 0);
			ENTITY::SET_ENTITY_ROTATION(obLocal_37, 0f, 0f, -35.6617f, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(obLocal_37, true);
			ENTITY::SET_ENTITY_INVINCIBLE(obLocal_37, true, false);
			ENTITY::SET_ENTITY_VISIBLE(obLocal_37, false, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_dummy_car"));
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(obLocal_37))
	{
		OBJECT::DELETE_OBJECT(&obLocal_37);
	}

	return;
}

int func_71() // Position - 0x27E7 (10215)
{
	return Global_1882652[PLAYER::PLAYER_ID() /*321*/].f_158.f_43.f_6;
}

int func_72() // Position - 0x2800 (10240)
{
	return Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_8;
}

void func_73() // Position - 0x2818 (10264)
{
	Vehicle vehiclePedIsIn;

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
		return;

	if (func_75() && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(vehiclePedIsIn) && VEHICLE::IS_VEHICLE_MODEL(vehiclePedIsIn, -1321131184) && Global_102538.f_530 == 40 && Global_24569.f_6342 == 0)
		{
			func_6(&uLocal_32, false, false);
			uLocal_34 = { ENTITY::GET_ENTITY_COORDS(vehiclePedIsIn, true) };
		}
		else if (!func_74(&uLocal_32, 5000, false))
		{
			if (MISC::GET_FRAME_COUNT() % 15 == 0)
				MISC::CLEAR_AREA(uLocal_34, 6f, false, false, false, true);
		}
	}
	else if (!func_74(&uLocal_32, 5000, false))
	{
		if (MISC::GET_FRAME_COUNT() % 15 == 0)
			MISC::CLEAR_AREA(uLocal_34, 6f, false, false, false, true);
	}

	return;
}

BOOL func_74(var uParam0, int iParam1, BOOL bParam2) // Position - 0x28E9 (10473)
{
	if (!uParam0->f_1)
		return true;

	if (iParam1 == -1)
		return true;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			_STOPWATCH_DESTROY(uParam0);
			return true;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		_STOPWATCH_DESTROY(uParam0);
		return true;
	}

	return false;
}

BOOL func_75() // Position - 0x2956 (10582)
{
	return IS_BIT_SET(Global_80586, 8);
}

void func_76() // Position - 0x2965 (10597)
{
	int num;
	Vector3 vector;
	Vector3 vector2;
	int num2;
	BOOL flag;
	int num3;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_63(Global_2673273.f_4.f_16) || !func_85())
		return;

	num = func_72();
	func_82(num);

	if (num != -1)
		return;

	if (!func_81())
		return;

	num2 = iLocal_30;

	if (func_80(Global_2673273.f_4.f_16, num2))
	{
		flag = false;
		num3 = func_79(num2);
		vector = { func_55(num3, -24.971f, -14.7995f, 0.0333f, 0) };
		vector2 = { func_55(num3, -23.5152f, -13.2081f, 2.4182f, 0) };
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2673273.f_4.f_11, vector, vector2, 4.8f, false, true))
		{
			if (!IS_BIT_SET(Global_1950702.f_5173.f_11, 0))
			{
				MISC::SET_BIT(&(Global_1950702.f_5173.f_11), 0);
				bLocal_31 = true;
			}
		
			flag = true;
		}
	
		vector = { func_55(num3, -22.4718f, -18.1247f, -0.0715f, 0) };
		vector2 = { func_55(num3, -24.2669f, -18.0151f, 2.2536f, 0) };
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2673273.f_4.f_11, vector, vector2, 2.2f, false, true) && func_77(Global_2673273.f_4.f_16, num2))
		{
			if (!IS_BIT_SET(Global_1950702.f_5173.f_11, 0))
			{
				MISC::SET_BIT(&(Global_1950702.f_5173.f_11), 0);
				bLocal_31 = true;
			}
		
			flag = true;
		}
	
		if (flag)
		{
			return;
		}
		else if (bLocal_31)
		{
			MISC::CLEAR_BIT(&(Global_1950702.f_5173.f_11), 0);
			bLocal_31 = false;
		}
	}

	iLocal_30 = (iLocal_30 + 1) % 4;
	return;
}

BOOL func_77(Player plParam0, int iParam1) // Position - 0x2AFE (11006)
{
	int num;

	if (plParam0 != _INVALID_PLAYER_INDEX())
	{
		if (!func_78(iParam1))
			return false;
	
		num = iParam1 - 1;
		return !IS_BIT_SET(Global_1882652[plParam0 /*321*/].f_158.f_43.f_2[num], 23);
	}

	return false;
}

BOOL func_78(int iParam0) // Position - 0x2B3E (11070)
{
	int num;

	num = iParam0;

	if (num <= 0 || num >= 4)
		return false;

	return true;
}

int func_79(int iParam0) // Position - 0x2B60 (11104)
{
	switch (iParam0)
	{
		case 1:
			return 177;
	
		case 2:
			return 178;
	
		case 3:
			return 179;
	
		default:
		
	}

	return -1;
}

BOOL func_80(Player plParam0, int iParam1) // Position - 0x2B91 (11153)
{
	if (iParam1 > 0 && iParam1 < 4)
		if (plParam0 != _INVALID_PLAYER_INDEX())
			return IS_BIT_SET(Global_1882652[plParam0 /*321*/].f_158.f_43, iParam1);

	return false;
}

BOOL func_81() // Position - 0x2BC6 (11206)
{
	return _STAT_GET_PACKED_BOOL(54768, -1);
}

void func_82(int iParam0) // Position - 0x2BD7 (11223)
{
	Vector3 vector;
	Vector3 vector2;

	switch (iParam0)
	{
		case 179:
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2673273.f_4.f_11, 519.18304f, 714.13135f, 191.72446f, 528.8624f, 722.0759f, 194.05295f, 29.0625f, false, true))
			{
				func_83(0);
				return;
			}
		
			vector = { func_55(iParam0, -24.971f, -14.7995f, 0.0333f, 0) };
			vector2 = { func_55(iParam0, -23.5152f, -13.2081f, 1.1932f, 0) };
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2673273.f_4.f_11, vector, vector2, 4.8f, false, true))
			{
				func_83(0);
				return;
			}
			break;
	
		case 178:
		case 177:
			vector = { func_55(iParam0, -24.971f, -14.7995f, 0.0333f, 0) };
			vector2 = { func_55(iParam0, -23.5152f, -13.2081f, 1.1932f, 0) };
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2673273.f_4.f_11, vector, vector2, 4.8f, false, true))
			{
				func_83(0);
				return;
			}
			break;
	}

	return;
}

void func_83(int iParam0) // Position - 0x2CF4 (11508)
{
	if (!func_84())
	{
		Global_1950702.f_3978 = 1;
		Global_1950702.f_3979 = iParam0;
	}

	return;
}

BOOL func_84() // Position - 0x2D15 (11541)
{
	return Global_1950702.f_765;
}

BOOL func_85() // Position - 0x2D24 (11556)
{
	if (func_86() == 0)
		return true;

	return false;
}

int func_86() // Position - 0x2D39 (11577)
{
	return Global_1574635.f_18;
}

void func_87() // Position - 0x2D47 (11591)
{
	switch (iLocal_29)
	{
		case 0:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appjipmp")) > 0)
				iLocal_29 = 2;
			break;
	
		case 1:
			if (func_90(PLAYER::PLAYER_ID()) && func_89())
			{
				iLocal_29 = 2;
				return;
			}
		
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appjipmp")) <= 0)
				iLocal_29 = 0;
			break;
	
		case 2:
			if (!func_90(PLAYER::PLAYER_ID()))
			{
				iLocal_29 = 0;
				return;
			}
		
			if (func_88())
				iLocal_29 = 3;
			break;
	
		case 3:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appjipmp")) <= 0 && !func_90(PLAYER::PLAYER_ID()))
			{
				iLocal_29 = 0;
				return;
			}
		
			if (IS_BIT_SET(Global_4718592.f_35, 21))
				iLocal_29 = 4;
			break;
	
		case 4:
			if (!func_90(PLAYER::PLAYER_ID()))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appjipmp")) <= 0)
				{
					iLocal_29 = 0;
					return;
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_4718592.f_35), 21);
					iLocal_29 = 0;
				}
			}
		
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1926875)
			{
				iLocal_29 = 0;
				return;
			}
			break;
	}

	return;
}

BOOL func_88() // Position - 0x2E52 (11858)
{
	return Global_2694337.f_7;
}

BOOL func_89() // Position - 0x2E60 (11872)
{
	return IS_BIT_SET(Global_2685152.f_2, 11);
}

BOOL func_90(Player plParam0) // Position - 0x2E71 (11889)
{
	return IS_BIT_SET(Global_1845298[plParam0 /*881*/].f_36.f_18, 5);
}

void func_91() // Position - 0x2E88 (11912)
{
	if (iLocal_25.f_2 >= *Global_262145.f_35613)
		return;

	switch (iLocal_25.f_1)
	{
		case 0:
			if (Global_2709385.f_567 && Global_2710014 != -1)
			{
				iLocal_25 = Global_2710014;
				STREAMING::REQUEST_MODEL(func_98(iLocal_25));
				iLocal_25.f_1 = iLocal_25.f_1 + 1;
			}
			break;
	
		case 1:
			STREAMING::REQUEST_MODEL(func_98(iLocal_25));
		
			if (STREAMING::HAS_MODEL_LOADED(func_98(iLocal_25)))
			{
				if (!Global_2709385.f_567)
				{
					func_93(iLocal_25);
					func_92();
					iLocal_25.f_2 = iLocal_25.f_2 + 1;
				}
			}
			break;
	}

	return;
}

void func_92() // Position - 0x2F2D (12077)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_25.f_3))
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_25.f_3));

	iLocal_25.f_1 = 0;
	iLocal_25 = -1;
	return;
}

void func_93(int iParam0) // Position - 0x2F50 (12112)
{
	Vector3 vector;

	vector = { func_97(iParam0) };
	vector.f_2 = vector.f_2 - 2.5f;
	iLocal_25.f_3 = OBJECT::CREATE_OBJECT(func_98(iParam0), vector, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(iLocal_25.f_3, func_94(iParam0), 2, true);
	OBJECT::SET_OBJECT_TARGETTABLE(iLocal_25.f_3, false, 0);
	ENTITY::SET_ENTITY_PROOFS(iLocal_25.f_3, true, true, true, true, true, false, false, false);

	if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iLocal_25.f_3))
		if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iLocal_25.f_3))
			NETWORK::SET_NETWORK_ID_CAN_MIGRATE(NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iLocal_25.f_3), false);

	ENTITY::FREEZE_ENTITY_POSITION(iLocal_25.f_3, true);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_25.f_3, 200);
	return;
}

Vector3 func_94(int iParam0) // Position - 0x2FE5 (12261)
{
	int num;

	num = func_95(iParam0);

	switch (num)
	{
		case 0:
			return 0f, 0f, 60.0749f;
	
		case 1:
			return 0f, 0f, -5.0001f;
	
		case 2:
			return 0f, 0f, -40.6002f;
	
		case 3:
			return 0f, 0f, 49.9999f;
	
		case 4:
			return 0f, 0f, -89.8017f;
	
		case 5:
			return 0f, 0f, 2.2f;
	
		case 6:
			return 0f, 0f, 49.9995f;
	
		case 7:
			return 0f, 0f, 55.1999f;
	
		case 8:
			return 0f, 0f, -90.2008f;
	
		case 9:
			return 0f, 0f, 49.9999f;
	
		case 10:
			return 0f, 0f, -79.8005f;
	
		case 11:
			return 0f, 0f, -19.8001f;
	
		case 12:
			return 0f, 0f, -63.2008f;
	
		case 13:
			return 0f, 0f, -5.8001f;
	
		case 14:
			return 0f, 0f, 0f;
	
		case 15:
			return 0f, 0f, 0f;
	
		case 16:
			return 0f, 0f, -20.0002f;
	
		case 17:
			return 0f, 0f, -105.401f;
	
		case 18:
			return 0f, 0f, -47.4002f;
	
		case 19:
			return 0f, 0f, -22.8026f;
	
		case 20:
			return 0f, 0f, 4f;
	
		case 21:
			return 0f, 0f, 127.3973f;
	
		case 22:
			return 0f, 0f, -22.2009f;
	
		case 23:
			return 0f, 0f, 8.2f;
	
		case 24:
			return 0f, 0f, 67.1996f;
	
		case 25:
			return 0f, 0f, 29.9992f;
	
		case 26:
			return 0f, 0f, 0f;
	
		case 27:
			return 0f, 0f, 89.9998f;
	
		case 28:
			return 0f, 0f, 44.7999f;
	
		case 29:
			return 0f, 0f, 109.9993f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

int func_95(int iParam0) // Position - 0x31CF (12751)
{
	int num;

	num = -1;

	switch (iParam0)
	{
		case 0:
			num = _STAT_GET_PACKED_INT(51546, -1);
			break;
	
		case 1:
			num = _STAT_GET_PACKED_INT(51547, -1);
			break;
	
		case 2:
			num = _STAT_GET_PACKED_INT(51548, -1);
			break;
	
		case 3:
			num = _STAT_GET_PACKED_INT(51549, -1);
			break;
	
		case 4:
			num = _STAT_GET_PACKED_INT(51550, -1);
			break;
	}

	return num;
}

int _STAT_GET_PACKED_INT(int iParam0, int iParam1) // Position - 0x3247 (12871)
{
	if (iParam1 == -1)
		iParam1 = func_20();

	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

Vector3 func_97(int iParam0) // Position - 0x3263 (12899)
{
	int num;

	num = func_95(iParam0);

	switch (num)
	{
		case 0:
			return -977.6928f, -2639.573f, 16.474f;
	
		case 1:
			return 819.4288f, -2227.2385f, 32.6184f;
	
		case 2:
			return 37.9683f, -1469.2217f, 32.235f;
	
		case 3:
			return -768.9666f, -1321.6681f, 7.1244f;
	
		case 4:
			return 1209.1267f, -1505.5887f, 36.4654f;
	
		case 5:
			return 845.3231f, -1203.0039f, 27.46f;
	
		case 6:
			return 188.2855f, -1843.3844f, 29.2995f;
	
		case 7:
			return 182.0389f, -941.2879f, 32.2661f;
	
		case 8:
			return -501.2574f, -684.436f, 35.186f;
	
		case 9:
			return -1636.3019f, -1063.8951f, 15.1266f;
	
		case 10:
			return 1165.2151f, -314.1255f, 71.217f;
	
		case 11:
			return 369.5584f, -326.8165f, 49.145f;
	
		case 12:
			return -942.4161f, -343.455f, 40.765f;
	
		case 13:
			return -2066f, -345.2393f, 15.761f;
	
		case 14:
			return -359.6902f, 141.5108f, 68.5588f;
	
		case 15:
			return 2581.005f, 487.5057f, 110.868f;
	
		case 16:
			return 760.227f, 583.9885f, 128.3567f;
	
		case 17:
			return -481.0848f, 1112.5974f, 322.24f;
	
		case 18:
			return -1834.4456f, 788.6052f, 140.539f;
	
		case 19:
			return -3195.2385f, 1318.3502f, 11.5263f;
	
		case 20:
			return -2557.941f, 2302.0186f, 34.956f;
	
		case 21:
			return -2219.9644f, 4222.4917f, 49.078f;
	
		case 22:
			return 2469.77f, 4082.911f, 39.8446f;
	
		case 23:
			return 575.3076f, 2676.81f, 43.712f;
	
		case 24:
			return 2741.5925f, 3453.4548f, 58.443f;
	
		case 25:
			return 1928.9758f, 3736.5696f, 34.514f;
	
		case 26:
			return 1723.0552f, 4790.159f, 43.9136f;
	
		case 27:
			return -756.7117f, 5600.3823f, 38.6646f;
	
		case 28:
			return 1.7607f, 6410.2383f, 33.779f;
	
		case 29:
			return 1411.0867f, 3608.7688f, 37.0159f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

Hash func_98(int iParam0) // Position - 0x354D (13645)
{
	switch (iParam0)
	{
		case 0:
			return -886191856;
	
		case 1:
			return -1557497351;
	
		case 2:
			return 1181772342;
	
		case 3:
			return -568552366;
	
		case 4:
			return -2055832045;
	
		default:
		
	}

	return 0;
}

void func_99() // Position - 0x35A3 (13731)
{
	if (Global_113904 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) <= 0 && func_85())
		NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();

	return;
}

void func_100() // Position - 0x35CF (13775)
{
	if (!bLocal_4)
	{
		if (Global_1836537)
		{
			if (func_103() || func_101())
				Global_262145.f_20001 = 1;
			else
				Global_262145.f_20001 = 0;
		
			bLocal_4 = true;
		}
	}
	else if (!Global_1836537)
	{
		bLocal_4 = false;
	}

	return;
}

int func_101() // Position - 0x3619 (13849)
{
	int num;
	var unk;
	int i;

	num = _MPPLY_STAT_GET_INT(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));

	if (num < Global_262145.f_10805)
		return 0;

	unk = 4;
	unk[0] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	unk[1] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	unk[2] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	unk[3] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));

	for (i = 0; i < Global_262145.f_10801 - 1; i = i + 1)
	{
		if (unk[i] < Global_262145.f_10805)
			return 0;
	}

	return 1;
}

int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0x36A8 (13992)
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

int func_103() // Position - 0x36C6 (14022)
{
	int num;
	var unk;
	int i;

	num = _MPPLY_STAT_GET_INT(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));

	if (num < Global_262145.f_10804)
		return 0;

	unk = 4;
	unk[0] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	unk[1] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	unk[2] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	unk[3] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));

	for (i = 0; i < Global_262145.f_10800 - 1; i = i + 1)
	{
		if (unk[i] < Global_262145.f_10804)
			return 0;
	}

	return 1;
}

void func_104() // Position - 0x3755 (14165)
{
	int i;

	if (MISC::IS_PC_VERSION())
	{
		for (i = 0; i < 32; i = i + 1)
		{
			MISC::SET_BIT(&(Global_1845298[i /*881*/].f_828), 1);
		}
	}

	return;
}

void func_105() // Position - 0x3788 (14216)
{
	if (bLocal_2)
	{
		HUD::SET_TEXT_SCALE(0f, 0.23f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		func_106(0.69f, 0.06f, "STRING", sLocal_0);
	}

	if (!bLocal_2)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			switch (iLocal_3)
			{
				case 0:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
					{
						iLocal_3 = iLocal_3 + 1;
						BUILTIN::SETTIMERA(0);
					}
					break;
			
				case 1:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
					{
						iLocal_3 = iLocal_3 + 1;
						BUILTIN::SETTIMERA(0);
					}
					else if (BUILTIN::TIMERA() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
			
				case 2:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
					{
						iLocal_3 = iLocal_3 + 1;
						BUILTIN::SETTIMERA(0);
					}
					else if (BUILTIN::TIMERA() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
			
				case 3:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
					{
						iLocal_3 = iLocal_3 + 1;
						BUILTIN::SETTIMERA(0);
					}
					else if (BUILTIN::TIMERA() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
			
				case 4:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
					{
						bLocal_2 = true;
						BUILTIN::SETTIMERA(0);
					}
					else if (BUILTIN::TIMERA() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
			}
		}
	}
	else if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		switch (iLocal_3)
		{
			case 0:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
				{
					iLocal_3 = iLocal_3 + 1;
					BUILTIN::SETTIMERA(0);
				}
				break;
		
			case 1:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
				{
					iLocal_3 = iLocal_3 + 1;
					BUILTIN::SETTIMERA(0);
				}
				else if (BUILTIN::TIMERA() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
		
			case 2:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
				{
					iLocal_3 = iLocal_3 + 1;
					BUILTIN::SETTIMERA(0);
				}
				else if (BUILTIN::TIMERA() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
		
			case 3:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
				{
					iLocal_3 = iLocal_3 + 1;
					BUILTIN::SETTIMERA(0);
				}
				else if (BUILTIN::TIMERA() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
		
			case 4:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
				{
					bLocal_2 = false;
					BUILTIN::SETTIMERA(0);
				}
				else if (BUILTIN::TIMERA() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
		}
	}

	return;
}

void func_106(float fParam0, float fParam1, char* sParam2, char* sParam3) // Position - 0x3987 (14727)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
	return;
}

BOOL IS_ROCKSTAR_DEV() // Position - 0x39A4 (14756)
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

