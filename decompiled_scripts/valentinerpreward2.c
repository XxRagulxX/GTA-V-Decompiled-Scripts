#region Local Var
	char* sLocal_0 = 0;
	BOOL bLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	BOOL bLocal_5 = 0;
	Player plLocal_6 = 0;
	int iLocal_7 = -1;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	BOOL bLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	BOOL bLocal_15 = 0;
	BOOL bLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	BOOL bLocal_24 = 0;
	Object obLocal_25 = 0;
	Object obLocal_26 = 0;
	BOOL bLocal_27 = 0;
	BOOL bLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	BOOL bLocal_43 = 0;
	BOOL bLocal_44 = 0;
	BOOL bLocal_45 = 0;
	BOOL bLocal_46 = 0;
	BOOL bLocal_47 = 0;
	BOOL bLocal_48 = 0;
	int iLocal_49 = 0;
	BOOL bLocal_50 = 0;
	BOOL bLocal_51 = 0;
	BOOL bLocal_52 = 0;
	Vehicle veLocal_53 = 0;
	Vehicle veLocal_54 = 0;
	Vehicle veLocal_55 = 0;
	Vehicle veLocal_56 = 0;
	BOOL bLocal_57 = 0;
	BOOL bLocal_58 = 0;
	BOOL bLocal_59 = 0;
	int iLocal_60 = 0;
	BOOL bLocal_61 = 0;
	Vehicle veLocal_62 = 0;
	int iLocal_63 = 0;
	BOOL bLocal_64 = 0;
	BOOL bLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	BOOL bLocal_68 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() // Position - 0x0 (0)
{
	int num;
	BOOL flag;

	sLocal_0 = "1.72.06";
	plLocal_6 = _INVALID_PLAYER_INDEX();
	iLocal_41 = -1;
	iLocal_42 = -1;
	bLocal_48 = true;
	iLocal_49 = -1;
	iLocal_67 = 1;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	uScriptParam_0 == uScriptParam_0;
	num = MISC::GET_GAME_TIMER() + 10000;

	while (MISC::GET_GAME_TIMER() < num)
	{
		BUILTIN::WAIT(0);
	}

	Global_1576477 = MISC::GET_HASH_KEY(sLocal_0);

	while (true)
	{
		if (IS_ROCKSTAR_DEV())
			func_196();
	
		flag = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	
		if (Global_2694229.f_3)
		{
			if (flag)
			{
				func_195();
				func_192();
				func_191();
				func_190();
				func_188();
				func_183();
				func_177();
				func_169();
				func_166();
				func_165();
				func_164();
				func_162();
				func_159();
				func_157();
				func_156();
				func_154();
				func_150();
				func_144();
				func_141();
				func_137();
				func_135();
				func_125();
				func_118();
				func_94();
				func_87();
				func_85();
				func_84();
				func_82();
				func_78();
				func_70();
				func_66();
				func_58();
				func_42();
				func_23();
			}
		
			func_21();
			func_20();
			func_15();
			func_14();
			func_12();
			func_10();
			func_2(flag);
			func_1();
		}
	
		BUILTIN::WAIT(0);
	}

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x12E (302)
{
	int i;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1694114956) <= 0)
	{
		bLocal_46 = false;
		return;
	}

	if (*Global_4980736.f_90314 <= 0)
		return;

	if (bLocal_46)
		return;

	for (i = 0; i <= *Global_4980736.f_90314 - 1; i = i + 1)
	{
		Global_4980736.f_90320[i /*1269*/].f_744 = 0;
	}

	bLocal_46 = true;
	return;
}

void func_2(BOOL bParam0) // Position - 0x194 (404)
{
	if (bParam0)
	{
		if (!bLocal_15)
		{
			if (func_5())
			{
				func_3(&Global_1048576);
				NETWORK::NETWORK_BAIL(51, 0, 0);
				bLocal_15 = true;
			}
		}
	}
	else if (bLocal_15)
	{
		bLocal_15 = false;
	}

	return;
}

void func_3(var uParam0) // Position - 0x1CC (460)
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

	func_4(&(uParam0->f_74));
	return;
}

void func_4(var uParam0) // Position - 0x254 (596)
{
	int i;
	var unk;

	for (i = 0; i <= *uParam0 - 1; i = i + 1)
	{
		uParam0->[i /*70*/] = { unk };
	}

	return;
}

BOOL func_5() // Position - 0x280 (640)
{
	int i;
	Hash hashKey;

	if (func_8(&uLocal_13, 3000, false))
	{
		func_7(&uLocal_13, false, false);
	
		if (Global_1048576.f_67 > 0)
		{
			for (i = 0; i <= Global_1048576.f_67 - 1; i = i + 1)
			{
				hashKey = MISC::GET_HASH_KEY(&Global_1048576.f_74[i /*70*/]);
			
				if (func_6(hashKey))
					return true;
			}
		}
	}

	return false;
}

BOOL func_6(Hash hParam0) // Position - 0x2DE (734)
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
		case 1981504962:
		case -1381896991:
		case 50444107:
		case 827236257:
		case -666476108:
		case 240635129:
			return true;
	
		default:
		
	}

	return false;
}

void func_7(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x562 (1378)
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

BOOL func_8(var uParam0, int iParam1, BOOL bParam2) // Position - 0x59F (1439)
{
	if (iParam1 == -1)
		return true;

	func_9(uParam0, bParam2, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
		return true;

	return false;
}

void func_9(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5FD (1533)
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

void func_10() // Position - 0x642 (1602)
{
	Ped ped;
	BOOL toggle;

	if (!func_11())
		return;

	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped) || PED::IS_PED_INJURED(ped))
		return;

	toggle = true;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1694114956) > 0)
		toggle = !Global_1575065;

	if (PLAYER::GET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID()) != toggle)
		ENTITY::SET_ENTITY_INVINCIBLE(ped, toggle, false);

	return;
}

BOOL func_11() // Position - 0x6A1 (1697)
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-2136380241) > 0;
}

void func_12() // Position - 0x6B8 (1720)
{
	if (!func_11())
		return;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1694114956) == 0)
	{
		bLocal_57 = false;
		return;
	}

	if (bLocal_57)
		return;

	if (Global_4718592.f_3553 == -1 || Global_4718592.f_3553 > 4)
		return;

	if (Global_4718592.f_203587[Global_4718592.f_3553 /*20*/] > -1)
		return;

	func_13(joaat("WEAPON_RPG"), 10, false);
	func_13(joaat("WEAPON_STICKYBOMB"), 10, false);
	func_13(joaat("WEAPON_PISTOL"), 500, true);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), joaat("COMPONENT_AT_PI_SUPP_02"));
	func_13(joaat("WEAPON_ASSAULTRIFLE"), 1000, false);
	bLocal_57 = true;
	return;
}

void func_13(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x764 (1892)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), hParam0, false))
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), hParam0, iParam1, false, bParam2);

	return;
}

void func_14() // Position - 0x78A (1930)
{
	int i;

	if (func_11())
	{
		bLocal_48 = true;
	
		if (iLocal_49 == -1)
			iLocal_49 = *Global_4980736.f_90314;
	
		if (iLocal_49 != *Global_4980736.f_90314)
		{
			if (*Global_4980736.f_90314 >= 0 && *Global_4980736.f_90314 < 50 && iLocal_49 > *Global_4980736.f_90314)
			{
				Global_4980736.f_90320[*Global_4980736.f_90314 /*1269*/].f_165.f_8 = -1;
				Global_4980736.f_90320[*Global_4980736.f_90314 /*1269*/].f_785 = -1;
			}
		}
	
		iLocal_49 = *Global_4980736.f_90314;
		return;
	}

	iLocal_49 = -1;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1694114956) > 0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) > 0)
	{
		bLocal_48 = true;
		return;
	}

	if (!bLocal_48)
		return;

	for (i = 0; i <= 49; i = i + 1)
	{
		Global_4980736.f_90320[i /*1269*/].f_165.f_8 = -1;
		Global_4980736.f_90320[i /*1269*/].f_785 = -1;
	}

	bLocal_48 = false;
	return;
}

void func_15() // Position - 0x8A0 (2208)
{
	if (func_17(PLAYER::PLAYER_ID(), false) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_mp_smpl_interior_int")) <= 0)
	{
		if (bLocal_52)
		{
			Global_1950198.f_770 = 0;
			bLocal_52 = false;
		}
	
		return;
	}

	if (!IS_BIT_SET(Global_1574589, 8) && !IS_BIT_SET(Global_1574589, 7) && !IS_BIT_SET(Global_1574589, 4) && !(func_16() && *Global_4718592.f_133086 == 0))
		return;

	Global_1950198.f_770 = 1;
	bLocal_52 = true;
	return;
}

BOOL func_16() // Position - 0x923 (2339)
{
	return IS_BIT_SET(Global_2685150, 4);
}

BOOL func_17(Player plParam0, BOOL bParam1) // Position - 0x931 (2353)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (bParam1 || _NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2658291[plParam0 /*468*/].f_325.f_8 != -1)
				return func_18(Global_2658291[plParam0 /*468*/].f_325.f_8) == 33;

	return false;
}

int func_18(int iParam0) // Position - 0x980 (2432)
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

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0xED0 (3792)
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
				if (player == Global_2673271.f_3)
					return Global_2673271.f_2;
				else if (Global_2658291[player /*468*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

void func_20() // Position - 0xF30 (3888)
{
	int i;

	if (!func_11())
	{
		bLocal_45 = false;
		return;
	}

	if (bLocal_45)
		return;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_132513)))
		return;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (Global_4718592.f_3605[i /*26968*/].f_38 == -4)
		{
			Global_4718592.f_3605[i /*26968*/].f_38 = -1;
			bLocal_45 = true;
		}
	}

	return;
}

void func_21() // Position - 0xF9A (3994)
{
	int i;
	int j;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1694114956) == 0)
	{
		bLocal_44 = false;
		return;
	}

	if (!func_22())
		return;

	if (bLocal_44)
		return;

	for (i = 0; i <= *Global_4980736.f_90314 - 1; i = i + 1)
	{
		if (Global_4980736.f_90320[i /*1269*/].f_5 == 50f)
			Global_4980736.f_90320[i /*1269*/].f_5 = 49.999f;
	}

	for (i = 0; i <= *Global_4980736.f_68411 - 1; i = i + 1)
	{
		if (Global_4980736.f_68415[i /*626*/].f_4 == 50f)
			Global_4980736.f_68415[i /*626*/].f_4 = 49.999f;
	}

	for (j = 0; j <= 3; j = j + 1)
	{
		if (Global_4718592.f_3605[j /*26968*/].f_38 == -4)
			Global_4718592.f_3605[j /*26968*/].f_38 = -1;
	}

	bLocal_44 = true;
	return;
}

BOOL func_22() // Position - 0x1096 (4246)
{
	if (*Global_4718592.f_132500 == Global_262145.f_37343[0] || *Global_4718592.f_132500 == Global_262145.f_37343[1] || *Global_4718592.f_132500 == Global_262145.f_37343[2] || *Global_4718592.f_132500 == Global_262145.f_37343[3] || *Global_4718592.f_132500 == Global_262145.f_37343[4])
		return true;

	return false;
}

void func_23() // Position - 0x1131 (4401)
{
	Hash model;
	int num;
	int data;
	float num2;
	float num3;
	Vector3 vector;

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_35))
	{
		MISC::SET_BIT(&Global_9464, 2);
	
		if (func_8(&uLocal_35, 60000, false))
		{
			func_7(&uLocal_35, false, false);
			_STOPWATCH_DESTROY(&uLocal_35);
		}
	}

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_33) && func_8(&uLocal_33, 1000, false))
	{
		if (iLocal_42 == -1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_42 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_42, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", false, 0);
			}
		}
		else if (func_8(&uLocal_33, 4000, false))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_42))
				AUDIO::STOP_SOUND(iLocal_42);
		
			AUDIO::RELEASE_SOUND_ID(iLocal_42);
			iLocal_42 = -1;
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
			func_7(&uLocal_33, false, false);
			_STOPWATCH_DESTROY(&uLocal_33);
		}
	}

	if (!bLocal_27 && !func_35())
		return;

	bLocal_27 = true;
	MISC::SET_BIT(&Global_9464, 2);

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_26))
	{
		model = joaat("imp_prop_ship_01a");
		STREAMING::REQUEST_MODEL(model);
	
		if (STREAMING::HAS_MODEL_LOADED(model))
		{
			obLocal_26 = OBJECT::CREATE_OBJECT_NO_OFFSET(model, 360.8759f, 5623.4272f, 780.1747f, false, false, true, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			ENTITY::FREEZE_ENTITY_POSITION(obLocal_26, true);
			ENTITY::SET_ENTITY_LOD_DIST(obLocal_26, 8000);
			num = func_34(7869, -1);
			func_30(7869, num + 1, -1, true);
			data.f_1 = 1;
			data = 24;
			STATS::PLAYSTATS_GUNRUNNING_MISSION_ENDED(&data);
			uLocal_37 = { ENTITY::GET_ENTITY_COORDS(obLocal_26, false) };
			iLocal_40 = 0;
		}
	}
	else
	{
		func_29();
	
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			if (iLocal_41 == -1)
			{
				AUDIO::START_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
				iLocal_41 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_41, "07", obLocal_26, "DLC_GR_CS2_Sounds", false, 0);
			}
		
			if (!bLocal_28)
			{
				if (func_8(&uLocal_29, 4500, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(obLocal_26, false);
					func_7(&uLocal_29, false, false);
					_STOPWATCH_DESTROY(&uLocal_29);
					func_9(&uLocal_31, false, false);
					bLocal_28 = true;
				}
			}
			else
			{
				num2 = BUILTIN::TO_FLOAT(func_28(&uLocal_31, false, false)) / BUILTIN::TO_FLOAT(func_27());
				num3 = BUILTIN::TO_FLOAT(func_28(&uLocal_29, false, false)) / BUILTIN::TO_FLOAT(func_26());
				num3 = num3 * num2;
				vector = { func_24(uLocal_37, func_25(), num3) };
				ENTITY::SET_ENTITY_COORDS(obLocal_26, vector, true, false, false, true);
			
				if (num3 >= 1f)
				{
					iLocal_40 = iLocal_40 + 1;
					uLocal_37 = { ENTITY::GET_ENTITY_COORDS(obLocal_26, false) };
					func_7(&uLocal_29, false, false);
					_STOPWATCH_DESTROY(&uLocal_29);
				
					if (func_26() == -1)
					{
						OBJECT::DELETE_OBJECT(&obLocal_26);
						MISC::FORCE_LIGHTNING_FLASH();
					
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_41))
							AUDIO::STOP_SOUND(iLocal_41);
					
						AUDIO::RELEASE_SOUND_ID(iLocal_41);
						iLocal_41 = -1;
						func_9(&uLocal_33, false, false);
						func_9(&uLocal_35, false, false);
						func_7(&uLocal_31, false, false);
						_STOPWATCH_DESTROY(&uLocal_31);
						uLocal_37 = { 0f, 0f, 0f };
						iLocal_40 = 0;
						bLocal_27 = false;
						bLocal_28 = false;
					}
				}
			}
		}
	}

	return;
}

Vector3 func_24(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Position - 0x13D6 (5078)
{
	return ({ 1f - fParam6, 1f - fParam6, 1f - fParam6 } * uParam0) + ({ fParam6, fParam6, fParam6 } * uParam3);
}

Vector3 func_25() // Position - 0x13F1 (5105)
{
	switch (iLocal_40)
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

int func_26() // Position - 0x1463 (5219)
{
	switch (iLocal_40)
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

int func_27() // Position - 0x14A1 (5281)
{
	return 3150;
}

int func_28(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x14AC (5292)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		if (!bParam2)
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		else
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);

	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

void func_29() // Position - 0x14F3 (5363)
{
	float entityRotation;

	entityRotation = { ENTITY::GET_ENTITY_ROTATION(obLocal_26, 2) };
	entityRotation = 0f;
	entityRotation.f_1 = 0f;
	entityRotation.f_2 = entityRotation.f_2 + 1f;
	ENTITY::SET_ENTITY_ROTATION(obLocal_26, entityRotation, 2, true);
	return;
}

void func_30(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1524 (5412)
{
	Hash statName;

	statName = func_31(iParam0, iParam2);

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, bParam3);

	return;
}

Hash func_31(int iParam0, int iParam1) // Position - 0x1547 (5447)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_32(iParam1));
}

int func_32(int iParam0) // Position - 0x155C (5468)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_33();
	
		if (num2 > -1)
		{
			Global_2741298 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2741298 = 1;
		}
	}

	return num;
}

int func_33() // Position - 0x1590 (5520)
{
	return Global_1574927;
}

int func_34(int iParam0, int iParam1) // Position - 0x159C (5532)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 16715)
	{
		statHash = func_31(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL func_35() // Position - 0x15CB (5579)
{
	if (_STAT_GET_PACKED_BOOL(22107, -1) && Global_2640098 == 7 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && func_38(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f) && Global_2686090.f_3083.f_178 >= 1 && Global_2686090.f_3083.f_178 < 4 && func_37() && func_36())
		return true;

	return false;
}

BOOL func_36() // Position - 0x164C (5708)
{
	if (_STAT_GET_PACKED_BOOL(15476, -1) && func_34(5453, func_33()) > 577)
		return true;

	return false;
}

BOOL func_37() // Position - 0x1678 (5752)
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

BOOL func_38(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0x16EF (5871)
{
	return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, true), fParam1) <= fParam4 * fParam4;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x170C (5900)
{
	if (iParam1 == -1)
		iParam1 = func_33();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0x1728 (5928)
{
	uParam0->f_1 = 0;
	return;
}

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x1735 (5941)
{
	return uParam0->f_1;
}

void func_42() // Position - 0x1741 (5953)
{
	int num;
	Vector3 vector;
	Vector3 vector2;
	int num2;
	BOOL flag;
	int num3;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_57(Global_2673271.f_4.f_16) || !func_55())
		return;

	num = func_54();
	func_51(num);

	if (num != -1)
		return;

	if (!func_50())
		return;

	num2 = iLocal_67;

	if (func_49(Global_2673271.f_4.f_16, num2))
	{
		flag = false;
		num3 = func_48(num2);
		vector = { func_45(num3, -24.971f, -14.7995f, 0.0333f, 0) };
		vector2 = { func_45(num3, -23.5152f, -13.2081f, 2.4182f, 0) };
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2673271.f_4.f_11, vector, vector2, 4.8f, false, true))
		{
			if (!IS_BIT_SET(Global_1950198.f_5172.f_11, 0))
			{
				MISC::SET_BIT(&(Global_1950198.f_5172.f_11), 0);
				bLocal_68 = true;
			}
		
			flag = true;
		}
	
		vector = { func_45(num3, -22.4718f, -18.1247f, -0.0715f, 0) };
		vector2 = { func_45(num3, -24.2669f, -18.0151f, 2.2536f, 0) };
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2673271.f_4.f_11, vector, vector2, 2.2f, false, true) && func_43(Global_2673271.f_4.f_16, num2))
		{
			if (!IS_BIT_SET(Global_1950198.f_5172.f_11, 0))
			{
				MISC::SET_BIT(&(Global_1950198.f_5172.f_11), 0);
				bLocal_68 = true;
			}
		
			flag = true;
		}
	
		if (flag)
		{
			return;
		}
		else if (bLocal_68)
		{
			MISC::CLEAR_BIT(&(Global_1950198.f_5172.f_11), 0);
			bLocal_68 = false;
		}
	}

	iLocal_67 = (iLocal_67 + 1) % 4;
	return;
}

BOOL func_43(Player plParam0, int iParam1) // Position - 0x18DA (6362)
{
	int num;

	if (plParam0 != _INVALID_PLAYER_INDEX())
	{
		if (!func_44(iParam1))
			return false;
	
		num = iParam1 - 1;
		return !IS_BIT_SET(Global_1882572[plParam0 /*315*/].f_158.f_43.f_2[num], 23);
	}

	return false;
}

BOOL func_44(int iParam0) // Position - 0x191A (6426)
{
	int num;

	num = iParam0;

	if (num <= 0 || num >= 4)
		return false;

	return true;
}

Vector3 func_45(int iParam0, float fParam1, float fParam2, float fParam3, int iParam4) // Position - 0x193C (6460)
{
	Vector3 vector;
	float heading;

	vector = { func_47(iParam0, iParam4) };
	heading = func_46(iParam0, iParam4);
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vector, heading, fParam1);
}

float func_46(int iParam0, int iParam1) // Position - 0x1968 (6504)
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

Vector3 func_47(int iParam0, int iParam1) // Position - 0x19AB (6571)
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

int func_48(int iParam0) // Position - 0x1B3B (6971)
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

BOOL func_49(Player plParam0, int iParam1) // Position - 0x1B6C (7020)
{
	if (iParam1 > 0 && iParam1 < 4)
		if (plParam0 != _INVALID_PLAYER_INDEX())
			return IS_BIT_SET(Global_1882572[plParam0 /*315*/].f_158.f_43, iParam1);

	return false;
}

BOOL func_50() // Position - 0x1BA1 (7073)
{
	return _STAT_GET_PACKED_BOOL(54768, -1);
}

void func_51(int iParam0) // Position - 0x1BB2 (7090)
{
	Vector3 vector;
	Vector3 vector2;

	switch (iParam0)
	{
		case 179:
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2673271.f_4.f_11, 519.18304f, 714.13135f, 191.72446f, 528.8624f, 722.0759f, 194.05295f, 29.0625f, false, true))
			{
				func_52(0);
				return;
			}
		
			vector = { func_45(iParam0, -24.971f, -14.7995f, 0.0333f, 0) };
			vector2 = { func_45(iParam0, -23.5152f, -13.2081f, 1.1932f, 0) };
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2673271.f_4.f_11, vector, vector2, 4.8f, false, true))
			{
				func_52(0);
				return;
			}
			break;
	
		case 178:
		case 177:
			vector = { func_45(iParam0, -24.971f, -14.7995f, 0.0333f, 0) };
			vector2 = { func_45(iParam0, -23.5152f, -13.2081f, 1.1932f, 0) };
		
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2673271.f_4.f_11, vector, vector2, 4.8f, false, true))
			{
				func_52(0);
				return;
			}
			break;
	}

	return;
}

void func_52(int iParam0) // Position - 0x1CCF (7375)
{
	if (!func_53())
	{
		Global_1950198.f_3977 = 1;
		Global_1950198.f_3978 = iParam0;
	}

	return;
}

BOOL func_53() // Position - 0x1CF0 (7408)
{
	return Global_1950198.f_764;
}

int func_54() // Position - 0x1CFF (7423)
{
	return Global_2658291[PLAYER::PLAYER_ID() /*468*/].f_325.f_8;
}

BOOL func_55() // Position - 0x1D17 (7447)
{
	if (func_56() == 0)
		return true;

	return false;
}

int func_56() // Position - 0x1D2C (7468)
{
	return Global_1574634.f_18;
}

BOOL func_57(Player plParam0) // Position - 0x1D3A (7482)
{
	if (plParam0 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true))
		return IS_BIT_SET(Global_2658291[plParam0 /*468*/].f_325, 3);

	return false;
}

void func_58() // Position - 0x1D6B (7531)
{
	int num;

	if (func_17(PLAYER::PLAYER_ID(), false))
	{
		num = func_54();
	
		if (func_59(num, -1))
		{
			if (bLocal_65 && IS_BIT_SET(Global_1950198.f_4, 7))
			{
				MISC::CLEAR_BIT(&(Global_1950198.f_4), 7);
				bLocal_65 = false;
			}
		}
		else if (!bLocal_65 && !IS_BIT_SET(Global_1950198.f_4, 7))
		{
			MISC::SET_BIT(&(Global_1950198.f_4), 7);
			bLocal_65 = true;
		}
	}
	else if (bLocal_65 && IS_BIT_SET(Global_1950198.f_4, 7))
	{
		MISC::CLEAR_BIT(&(Global_1950198.f_4), 7);
		bLocal_65 = false;
	}

	return;
}

BOOL func_59(int iParam0, int iParam1) // Position - 0x1DF7 (7671)
{
	Player player;
	BOOL flag;
	int num;

	if (Global_1950198.f_751 == 0)
		return true;

	player = Global_2658291[PLAYER::PLAYER_ID() /*468*/].f_325.f_11;
	flag = false;
	num = -1;

	if (player != _INVALID_PLAYER_INDEX())
	{
		num = func_63(player);
	
		if (num != -1)
			flag = true;
	}

	if (IS_BIT_SET(Global_1950198.f_751, 31))
	{
		if (!func_49(PLAYER::PLAYER_ID(), func_62(iParam0)))
			return true;
	
		if (flag)
			return func_60(player);
	}
	else
	{
		if (!_NETWORK_IS_PLAYER_VALID(player, false, true))
			return true;
	
		if (!func_49(player, func_62(iParam0)))
			return true;
	
		if (flag)
			return func_60(player);
	}

	return false;
}

BOOL func_60(Player plParam0) // Position - 0x1EA7 (7847)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return func_61(plParam0, 9);

	return false;
}

BOOL func_61(Player plParam0, int iParam1) // Position - 0x1EC5 (7877)
{
	return IS_BIT_SET(Global_1892653[plParam0 /*615*/].f_10.f_4, iParam1);
}

int func_62(int iParam0) // Position - 0x1EDD (7901)
{
	switch (iParam0)
	{
		case 177:
			return 1;
	
		case 178:
			return 2;
	
		case 179:
			return 3;
	
		default:
		
	}

	return 0;
}

int func_63(Player plParam0) // Position - 0x1F0B (7947)
{
	if (func_65(plParam0))
		if (func_64(plParam0, false))
			return Global_1892653[plParam0 /*615*/].f_10.f_34;

	return -1;
}

BOOL func_64(Player plParam0, BOOL bParam1) // Position - 0x1F37 (7991)
{
	if (func_65(plParam0))
		if (Global_1892653[plParam0 /*615*/].f_10.f_34 != -1 || bParam1 && Global_1892653[plParam0 /*615*/].f_10.f_33 != -1)
			return true;

	return false;
}

BOOL func_65(Player plParam0) // Position - 0x1F7B (8059)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

void func_66() // Position - 0x1F9D (8093)
{
	if (func_63(PLAYER::PLAYER_ID()) == 309 && func_67(PLAYER::PLAYER_PED_ID(), func_68(177, 0), true) < 130f)
	{
		if (!bLocal_64)
		{
			ENTITY::CREATE_MODEL_HIDE(func_68(177, 0), 5f, joaat("prop_lrggate_01c_r"), false);
			ENTITY::CREATE_MODEL_HIDE(func_68(177, 1), 5f, joaat("prop_lrggate_01c_l"), false);
			bLocal_64 = true;
		}
	}
	else if (bLocal_64)
	{
		ENTITY::REMOVE_MODEL_HIDE(func_68(177, 0), 5f, joaat("prop_lrggate_01c_r"), false);
		ENTITY::REMOVE_MODEL_HIDE(func_68(177, 1), 5f, joaat("prop_lrggate_01c_l"), false);
		bLocal_64 = false;
	}

	return;
}

float func_67(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x202B (8235)
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, vParam1, bParam4);
}

Vector3 func_68(int iParam0, int iParam1) // Position - 0x2065 (8293)
{
	switch (iParam0)
	{
		case 178:
			switch (iParam1)
			{
				case 0:
					return -1693.4988f, 486.2354f, 129.2232f;
			
				case 1:
					return -1688.2344f, 487.7502f, 129.2232f;
			
				default:
					break;
			}
			break;
	
		case 177:
			switch (iParam1)
			{
				case 0:
					return -2556.654f, 1915.729f, 169.076f;
			
				case 1:
					return -2559.187f, 1910.86f, 169.076f;
			
				default:
					break;
			}
			break;
	
		case 179:
			switch (iParam1)
			{
				case 0:
					return 536.9908f, 777.0703f, 202.3633f;
			
				case 1:
					return 540.3844f, 772.7703f, 202.3633f;
			
				default:
					break;
			}
			break;
	}

	return func_69();
}

Vector3 func_69() // Position - 0x2138 (8504)
{
	return 0f, 0f, 0f;
}

void func_70() // Position - 0x2143 (8515)
{
	int num;
	Vector3 vector;
	float heading;
	Vector3 offsetFromCoordAndHeadingInWorldCoords;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || !func_77(Global_2673271.f_4.f_16))
		return;

	num = func_54();
	vector = { func_47(num, 0) };
	heading = func_46(num, 0);
	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vector, heading, func_76(iLocal_63)) };

	if (func_74(iLocal_63, func_75(Global_2673271.f_4.f_16)) && MISC::ABSF(offsetFromCoordAndHeadingInWorldCoords.f_2 - Global_2673271.f_4.f_11.f_2) <= 1.25f)
	{
		if (iLocal_63 != 12)
		{
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(Global_2673271.f_4.f_15) && BUILTIN::VDIST2(Global_2673271.f_4.f_11, offsetFromCoordAndHeadingInWorldCoords) < 9f)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_2673271.f_4.f_15, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vector, heading, func_72(iLocal_63, 0)), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vector, heading, func_72(iLocal_63, 1)), 1.15f, false, true, 0))
				{
					func_71(11, -1);
					return;
				}
			}
		}
	}

	iLocal_63 = iLocal_63 + 1;

	if (iLocal_63 >= 13)
		iLocal_63 = 0;

	return;
}

void func_71(int iParam0, int iParam1) // Position - 0x224F (8783)
{
	MISC::SET_BIT(&(Global_1677542.f_1047), iParam0);

	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				Global_1677542.f_170[iParam1] = 1;
			break;
	}

	return;
}

Vector3 func_72(int iParam0, int iParam1) // Position - 0x2285 (8837)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2.725f, -5.9208f, 0f;
			
				case 1:
					return 3.3025f, -4.9013f, 2f;
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3.367f, -12.4312f, 0f;
			
				case 1:
					return 2.26f, -12.4156f, 2f;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 23.896f, -7.045f, 0f;
			
				case 1:
					return 22.922f, -7.038f, 2.021f;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return 22.767f, 8.106f, 0f;
			
				case 1:
					return 23.344f, 7.311f, 1.986f;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 0:
					return 12.913f, 1.267f, -3.641f;
			
				case 1:
					return 13.477f, 0.445f, -1.668f;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 0:
					return 18.014f, -9.543f, -3.654f;
			
				case 1:
					return 18.011f, -10.553f, -1.654f;
			
				default:
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 0:
					return -0.516f, 8.643f, -4.046f;
			
				case 1:
					return -1.668f, 8.643f, -2.043f;
			
				default:
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 0:
					return 17.16f, 0.339f, -10.775f;
			
				case 1:
					return 17.165f, -0.731f, -8.883f;
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 0:
					return 29.957f, -7.94f, -15.285f;
			
				case 1:
					return 30.697f, -7.433f, -13.299f;
			
				default:
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 0:
					return 17.143f, 0.439f, -15.285f;
			
				case 1:
					return 17.113f, -0.724f, -13.265f;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 36.33f, 3.457f, -3.653f;
			
				case 1:
					return 36.837f, 2.729f, -1.668f;
			
				default:
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 0:
					return 29.689f, -7.797f, 0f;
			
				case 1:
					return 31.462f, -10.351f, 2.02f;
			
				default:
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 0:
					return 1.229f, 7.699f, -4.054f;
			
				case 1:
					return 1.212f, 6.619f, -2.065f;
			
				default:
					break;
			}
			break;
	}

	return 0f, 0f, 0f;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Vehicle veParam0) // Position - 0x25BB (9659)
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
			return true;

	return false;
}

BOOL func_74(int iParam0, int iParam1) // Position - 0x25DC (9692)
{
	switch (iParam0)
	{
		case 12:
			switch (iParam1)
			{
				case -1071930051:
					return true;
			
				default:
				
			}
		
			return false;
	
		case 7:
			switch (iParam1)
			{
				case 346703605:
					return true;
			
				case 1983507683:
					return true;
			
				default:
				
			}
		
			return false;
	}

	if (iParam1 == 0)
		return false;

	return true;
}

int func_75(Player plParam0) // Position - 0x263C (9788)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return Global_1882572[plParam0 /*315*/].f_158.f_43.f_6;

	return 0;
}

Vector3 func_76(int iParam0) // Position - 0x2660 (9824)
{
	switch (iParam0)
	{
		case 0:
			return 3.1411f, -5.1791f, 0f;
	
		case 1:
			return 2.6011f, -12.3328f, 0f;
	
		case 3:
			return 23.5864f, -7.0954f, 0f;
	
		case 4:
			return 22.9631f, 7.8564f, 0f;
	
		case 5:
			return 13.544f, 0.444f, -1.665f;
	
		case 6:
			return 18.006f, -9.862f, -3.654f;
	
		case 7:
			return -0.731f, 8.719f, -4.054f;
	
		case 8:
			return 17.169f, 0.339f, -10.781f;
	
		case 9:
			return 30.059f, -8.102f, -15.285f;
	
		case 10:
			return 17.169f, 0.339f, -15.282f;
	
		case 11:
			return 29.962f, -9.431f, 1.463f;
	
		case 2:
			return 36.355f, 3.438f, -2.125f;
	
		case 12:
			return 1.229f, 7.699f, -4.054f;
	}

	return 0f, 0f, 0f;
}

BOOL func_77(Player plParam0) // Position - 0x27C1 (10177)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (func_17(plParam0, false) && Global_2658291[plParam0 /*468*/].f_325.f_11 == plParam0)
			return true;

	return false;
}

void func_78() // Position - 0x27F7 (10231)
{
	Vector3 entityCoords;
	Vector3 vector;
	Vector3 vector2;
	Vector3 vector3;

	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return;

	if (!func_80() && !func_79(*Global_4718592.f_192777))
		return;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };

	if (IS_BIT_SET(*Global_4718592.f_185512, 4))
	{
		vector = { -1666.3678f, 478.9271f, 128.22156f };
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, -1647.266f, 490.222f, 129.22166f, -1654.3751f, 480.8793f, 130.4f, 0.29f, false, true))
			INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), INTERIOR::GET_INTERIOR_AT_COORDS(vector), -1345223810);
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, -1670.3148f, 463.31012f, 127.92162f, -1673.2775f, 462.3141f, 129.22162f, 1.5f, false, true))
			INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), INTERIOR::GET_INTERIOR_AT_COORDS(vector), 1774198988);
	}

	if (IS_BIT_SET(*Global_4718592.f_185512, 8))
	{
		vector2 = { 539.7012f, 749.08936f, 201.36165f };
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, 545.75275f, 738.48254f, 202.36162f, 556.873f, 735.25415f, 203.3617f, 0.29f, false, true))
			INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), INTERIOR::GET_INTERIOR_AT_COORDS(vector2), -1345223810);
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, 523.8675f, 747.2859f, 201.4861f, 521.7375f, 749.7493f, 201.86261f, 1.5f, false, true))
			INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), INTERIOR::GET_INTERIOR_AT_COORDS(vector2), 1774198988);
	}

	if (IS_BIT_SET(*Global_4718592.f_185512, 10))
	{
		vector3 = { -2586.065f, 1909.995f, 166.37543f };
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, -2586.5732f, 1897.8909f, 167.37553f, -2578.9717f, 1889.0901f, 168.37553f, 0.29f, false, true))
			INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), INTERIOR::GET_INTERIOR_AT_COORDS(vector3), -1345223810);
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(entityCoords, -1670.3148f, 463.31012f, 127.92162f, -1673.2775f, 462.3141f, 129.22162f, 1.5f, false, true))
			INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), INTERIOR::GET_INTERIOR_AT_COORDS(vector3), 1774198988);
	}

	return;
}

BOOL func_79(int iParam0) // Position - 0x2A3C (10812)
{
	return iParam0 == 95;
}

BOOL func_80() // Position - 0x2A49 (10825)
{
	if (*Global_4718592.f_132500 == func_81(5) || *Global_4718592.f_132500 == func_81(6) || *Global_4718592.f_132500 == func_81(7))
		return true;

	return false;
}

int func_81(int iParam0) // Position - 0x2A95 (10901)
{
	if (iParam0 != -1)
		return Global_262145.f_37058[iParam0];

	return -1;
}

void func_82() // Position - 0x2AB4 (10932)
{
	Vehicle vehiclePedIsIn;

	if (func_83(PLAYER::PLAYER_ID()))
	{
		if (!bLocal_61)
			bLocal_61 = true;
	}
	else if (bLocal_61)
	{
		bLocal_61 = false;
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
			
				if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(vehiclePedIsIn))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false) == PLAYER::PLAYER_PED_ID())
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vehiclePedIsIn))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(vehiclePedIsIn);
							bLocal_61 = true;
						}
						else
						{
							ENTITY::SET_ENTITY_INVINCIBLE(vehiclePedIsIn, false, false);
						}
					}
				}
			}
		}
	}

	return;
}

BOOL func_83(Player plParam0) // Position - 0x2B40 (11072)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_2658291[plParam0 /*468*/].f_325.f_7, 22);

	return false;
}

void func_84() // Position - 0x2B66 (11110)
{
	if (func_17(PLAYER::PLAYER_ID(), false))
	{
		if (!IS_BIT_SET(Global_2733002.f_976, 0))
		{
			bLocal_58 = true;
			MISC::SET_BIT(&(Global_2733002.f_976), 0);
		}
	}
	else if (bLocal_58)
	{
		bLocal_58 = false;
		MISC::CLEAR_BIT(&(Global_2733002.f_976), 0);
	}

	return;
}

void func_85() // Position - 0x2BAD (11181)
{
	if (func_17(PLAYER::PLAYER_ID(), false) && !func_86(PLAYER::PLAYER_ID()) && Global_2731953.f_4 != -1 && Global_2731953.f_5 == 0 && _DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		Global_2731953.f_4 = -1;

	return;
}

BOOL func_86(Player plParam0) // Position - 0x2C0C (11276)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_2658291[plParam0 /*468*/].f_203, 9);

	return false;
}

void func_87() // Position - 0x2C2F (11311)
{
	int num;
	Vector3 vector;
	float heading;

	if (MISC::GET_FRAME_COUNT() % 60 == 0)
	{
		if (func_17(PLAYER::PLAYER_ID(), false) && Global_2658291[PLAYER::PLAYER_ID() /*468*/].f_325.f_11 == PLAYER::PLAYER_ID() && !func_57(PLAYER::PLAYER_ID()))
		{
			if (func_93(veLocal_62, true) || func_92(&veLocal_62))
			{
				if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(veLocal_62) < 0.75f)
				{
					num = func_91(PLAYER::PLAYER_ID());
					vector = { func_45(num, func_90(), 0) };
					heading = func_88(num, func_89(), 0);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(veLocal_62, vector, false, false, true);
					ENTITY::SET_ENTITY_HEADING(veLocal_62, heading);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_62, 1084227584);
					VEHICLE::SET_VEHICLE_FIXED(veLocal_62);
					ENTITY::SET_ENTITY_HEALTH(veLocal_62, 1000, 0, 0);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veLocal_62, 1000f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(veLocal_62, 1000f);
					VEHICLE::SET_VEHICLE_DIRT_LEVEL(veLocal_62, 0f);
					VEHICLE::SET_HELI_MAIN_ROTOR_HEALTH(veLocal_62, 1000f);
					VEHICLE::SET_HELI_TAIL_ROTOR_HEALTH(veLocal_62, 1000f);
				}
			}
		}
	}

	return;
}

float func_88(int iParam0, float fParam1, int iParam2) // Position - 0x2D26 (11558)
{
	float i;

	for (i = fParam1 + func_46(iParam0, iParam2); i < 0f; i = i + 360f)
	{
	}

	while (i >= 360f)
	{
		i = i - 360f;
	}

	return i;
}

float func_89() // Position - 0x2D69 (11625)
{
	return 89.3175f;
}

Vector3 func_90() // Position - 0x2D76 (11638)
{
	return 24.4139f, -0.7575f, 5.7428f;
}

int func_91(Player plParam0) // Position - 0x2D8D (11661)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			return Global_2658291[plParam0 /*468*/].f_325.f_8;
		else if (Global_1575090 || Global_2635562.f_2981 && plParam0 == PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(plParam0, true, false))
			return Global_2658291[plParam0 /*468*/].f_325.f_8;

	return -1;
}

BOOL func_92(var uParam0) // Position - 0x2DFC (11772)
{
	int allVehicles;
	int i;

	allVehicles = VEHICLE::GET_ALL_VEHICLES(&Global_1576515);

	for (i = 0; i < allVehicles; i = i + 1)
	{
		if (func_93(Global_1576515[i], true))
		{
			*uParam0 = Global_1576515[i];
			return 1;
		}
	}

	return 0;
}

BOOL func_93(Vehicle veParam0, BOOL bParam1) // Position - 0x2E41 (11841)
{
	if (Global_80280)
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && !bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "Mansion_Spawned_Heli"))
				return true;

	return false;
}

void func_94() // Position - 0x2E7F (11903)
{
	int num;
	int num2;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("freemode")) == 0 || !func_116())
		return;

	if (iLocal_60 == 0)
		if (Global_1572206)
			iLocal_60 = 1;
	else if (iLocal_60 == 2)
		if (!Global_1572206)
			iLocal_60 = 0;

	if (iLocal_60 != 1)
		return;

	num = _MPPLY_STAT_GET_INT(joaat("MPPLY_TOTAL_EVC"));

	if (!_STAT_GET_PACKED_BOOL(54793, -1))
		if (num >= 100000000 || num < 0)
			_STAT_SET_PACKED_BOOL(54793, true, -1);

	if (!_STAT_GET_PACKED_BOOL(54794, -1))
		if (num >= 500000000 || num < 0)
			_STAT_SET_PACKED_BOOL(54794, true, -1);

	if (!_STAT_GET_PACKED_BOOL(54795, -1))
		if (num >= 1000000000 || num < 0)
			_STAT_SET_PACKED_BOOL(54795, true, -1);

	if (!_STAT_GET_PACKED_BOOL(54815, -1))
	{
		if (func_112(Global_2673271.f_4.f_16, false))
			num2 = num2 + 1;
	
		if (func_110(true))
			num2 = num2 + 1;
	
		if (func_108(true))
			num2 = num2 + 1;
	
		if (func_106(true, true))
			num2 = num2 + 1;
	
		if (func_104(true))
			num2 = num2 + 1;
	
		if (func_103())
			num2 = num2 + 1;
	
		if (func_101(true))
			num2 = num2 + 1;
	
		if (func_97(true))
			num2 = num2 + 1;
	
		if (func_96())
			num2 = num2 + 1;
	
		if (func_95())
			num2 = num2 + 1;
	
		if (_STAT_GET_PACKED_BOOL(42015, -1) && _STAT_GET_PACKED_BOOL(42016, -1) && _STAT_GET_PACKED_BOOL(42017, -1) && _STAT_GET_PACKED_BOOL(42018, -1) && _STAT_GET_PACKED_BOOL(42019, -1) && _STAT_GET_PACKED_BOOL(42020, -1) && _STAT_GET_PACKED_BOOL(42021, -1) && _STAT_GET_PACKED_BOOL(42022, -1))
			num2 = num2 + 1;
	
		if (num2 >= 5)
			_STAT_SET_PACKED_BOOL(54815, true, -1);
	}

	iLocal_60 = 2;
	return;
}

BOOL func_95() // Position - 0x3085 (12421)
{
	int num;

	num = func_34(8283, -1);

	if (IS_BIT_SET(num, 6) && IS_BIT_SET(num, 7) && IS_BIT_SET(num, 8) && IS_BIT_SET(num, 9) && IS_BIT_SET(num, 10) && IS_BIT_SET(num, 11))
		return true;

	return false;
}

BOOL func_96() // Position - 0x30D4 (12500)
{
	return IS_BIT_SET(func_34(8977, -1), 2);
}

BOOL func_97(BOOL bParam0) // Position - 0x30E6 (12518)
{
	if (func_98(0, bParam0) && func_98(1, bParam0) && func_98(2, bParam0))
		return true;

	return false;
}

BOOL func_98(int iParam0, BOOL bParam1) // Position - 0x3115 (12565)
{
	if (bParam1)
		return IS_BIT_SET(func_34(9905, -1), func_100(iParam0));

	return func_99(PLAYER::PLAYER_ID(), iParam0);
}

BOOL func_99(Player plParam0, int iParam1) // Position - 0x313E (12606)
{
	if (plParam0 != -1)
		return IS_BIT_SET(Global_1983167[plParam0 /*149*/].f_27, func_100(iParam1));

	return false;
}

int func_100(int iParam0) // Position - 0x3161 (12641)
{
	switch (iParam0)
	{
		case 0:
			return 15;
	
		case 1:
			return 16;
	
		case 2:
			return 17;
	
		default:
		
	}

	return -1;
}

BOOL func_101(BOOL bParam0) // Position - 0x3192 (12690)
{
	if (bParam0)
		return IS_BIT_SET(func_34(9905, -1), 2);

	return func_102(PLAYER::PLAYER_ID());
}

BOOL func_102(Player plParam0) // Position - 0x31B4 (12724)
{
	if (plParam0 != -1)
		return IS_BIT_SET(Global_1983167[plParam0 /*149*/].f_27, 2);

	return false;
}

BOOL func_103() // Position - 0x31D2 (12754)
{
	return IS_BIT_SET(func_34(10394, -1), 6);
}

BOOL func_104(BOOL bParam0) // Position - 0x31E4 (12772)
{
	if (bParam0)
		return IS_BIT_SET(func_34(12462, -1), 26);

	return func_105(PLAYER::PLAYER_ID());
}

BOOL func_105(Player plParam0) // Position - 0x3207 (12807)
{
	if (plParam0 != -1)
		return IS_BIT_SET(Global_1983167[plParam0 /*149*/].f_59, 26);

	return false;
}

BOOL func_106(BOOL bParam0, BOOL bParam1) // Position - 0x3226 (12838)
{
	if (bParam1)
		if (bParam0)
			return IS_BIT_SET(func_34(11950, -1), 12);
		else
			return IS_BIT_SET(func_34(11950, -1), 13);

	return func_107(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_107(Player plParam0, BOOL bParam1) // Position - 0x3261 (12897)
{
	if (func_65(plParam0))
		if (bParam1)
			return IS_BIT_SET(Global_1983167[plParam0 /*149*/].f_62.f_1, 12);
		else
			return IS_BIT_SET(Global_1983167[plParam0 /*149*/].f_62.f_1, 13);

	return false;
}

BOOL func_108(BOOL bParam0) // Position - 0x329F (12959)
{
	if (bParam0)
		return IS_BIT_SET(func_34(12033, -1), 12);

	return func_109(PLAYER::PLAYER_ID());
}

BOOL func_109(Player plParam0) // Position - 0x32C2 (12994)
{
	if (plParam0 != -1)
		return IS_BIT_SET(Global_1983167[plParam0 /*149*/].f_73, 12);

	return false;
}

BOOL func_110(BOOL bParam0) // Position - 0x32E1 (13025)
{
	if (bParam0)
		return IS_BIT_SET(func_34(12444, -1), 15);

	return func_111(PLAYER::PLAYER_ID());
}

BOOL func_111(Player plParam0) // Position - 0x3304 (13060)
{
	if (plParam0 != -1)
		return IS_BIT_SET(Global_1983167[plParam0 /*149*/].f_121, 15);

	return false;
}

BOOL func_112(Player plParam0, BOOL bParam1) // Position - 0x3323 (13091)
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (i < 5 || bParam1)
			if (!func_113(plParam0, i))
				return false;
	}

	return true;
}

BOOL func_113(Player plParam0, int iParam1) // Position - 0x335E (13150)
{
	if (func_65(plParam0))
	{
		switch (iParam1)
		{
			case 0:
				return IS_BIT_SET(Global_1983167[plParam0 /*149*/].f_145, 1);
		
			case 1:
				return IS_BIT_SET(Global_1983167[plParam0 /*149*/].f_145, 2);
		
			case 2:
				return IS_BIT_SET(Global_1983167[plParam0 /*149*/].f_145, 3);
		
			case 3:
				return IS_BIT_SET(Global_1983167[plParam0 /*149*/].f_145, 4);
		
			case 4:
				return IS_BIT_SET(Global_1983167[plParam0 /*149*/].f_145, 5);
		
			case 5:
			case 6:
			case 7:
				return IS_BIT_SET(Global_1983167[plParam0 /*149*/].f_145, 6);
		
			default:
			
		}
	}

	return false;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x3401 (13313)
{
	if (iParam2 == -1)
		iParam2 = func_33();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0x341F (13343)
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

BOOL func_116() // Position - 0x343D (13373)
{
	return func_117(func_33() + 1);
}

BOOL func_117(int iParam0) // Position - 0x344F (13391)
{
	return Global_1574538[iParam0];
}

void func_118() // Position - 0x345F (13407)
{
	int num;
	Interior interior;

	if (func_17(PLAYER::PLAYER_ID(), false) && func_123() == 1)
	{
		if (func_122(PLAYER::PLAYER_ID()))
		{
			bLocal_59 = true;
		}
		else if (bLocal_59)
		{
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
			{
				num = func_91(PLAYER::PLAYER_ID());
				interior = func_119(num, 1);
			
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), func_45(num, 8.088f, 6.713f, -4.45f, 1), func_45(num, 16.337f, 6.94f, 4.9f, 1), 4f, false, true, 0))
					INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), interior, -1685080178);
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), func_45(num, 2.619f, -28.674f, 0f, 1), func_45(num, 1.85f, 36.371f, 4.5f, 1), 28f, false, true, 0))
					INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), interior, -1333592204);
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), func_45(num, 2.619f, -28.674f, -4.5f, 1), func_45(num, 1.85f, 36.371f, 0f, 1), 28f, false, true, 0))
					INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), interior, -1108713331);
			}
		
			bLocal_59 = false;
		}
	}
	else
	{
		bLocal_59 = false;
	}

	return;
}

Interior func_119(int iParam0, int iParam1) // Position - 0x359F (13727)
{
	var interiorType;
	Vector3 vector;
	var unk18;

	func_120(iParam0, &interiorType, &vector, &unk18, iParam1);
	return INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vector, &interiorType);
}

void func_120(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4) // Position - 0x35BF (13759)
{
	TEXT_LABEL_ASSIGN_STRING(sParam1, func_121(iParam0, iParam4), 64);
	*uParam2 = { func_47(iParam0, iParam4) };
	*uParam3 = func_46(iParam0, iParam4);
	return;
}

char* func_121(int iParam0, int iParam1) // Position - 0x35EA (13802)
{
	switch (iParam1)
	{
		case 0:
			return "m25_2_int_mansion";
	
		case 1:
			return "m25_2_int_mansion_garage";
	
		case 2:
			return "m25_2_int_mansion_2";
	
		default:
		
	}

	return "m25_2_int_mansion_garage";
}

BOOL func_122(Player plParam0) // Position - 0x3620 (13856)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	return IS_BIT_SET(Global_1882572[plParam0 /*315*/].f_158.f_43.f_1, 2);
}

int func_123() // Position - 0x3646 (13894)
{
	return func_124(PLAYER::PLAYER_ID());
}

int func_124(Player plParam0) // Position - 0x3656 (13910)
{
	return MISC::GET_BITS_IN_RANGE(Global_2658291[plParam0 /*468*/].f_325.f_3, 28, 31);
}

void func_125() // Position - 0x3673 (13939)
{
	int num;
	int i;
	int offset;

	if (!func_65(Global_2673271.f_4.f_16) || !func_134(Global_2673271.f_4.f_16) || !(func_17(Global_2673271.f_4.f_16, true) || func_133(212) || func_133(213) || func_133(214)))
		return;

	num = 0;
	i = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		num = func_132(Global_2673271.f_4.f_16, i);
		offset = func_130(func_131(num));
	
		if (offset == -1)
		{
		}
		else if (func_129(Global_2673271.f_4.f_16, num) && !func_126(Global_2673271.f_4.f_16, num))
		{
			if (!IS_BIT_SET(Global_1674229, offset))
				MISC::SET_BIT(&Global_1674229, offset);
		}
		else if (IS_BIT_SET(Global_1674229, offset))
		{
			MISC::CLEAR_BIT(&Global_1674229, offset);
		}
	}

	return;
}

BOOL func_126(Player plParam0, int iParam1) // Position - 0x3767 (14183)
{
	int num;

	if (func_129(plParam0, iParam1))
	{
		num = func_127(plParam0, iParam1);
	
		if (Global_1845250[plParam0 /*880*/].f_260.f_205[num /*13*/].f_4 > 0 && Global_1845250[plParam0 /*880*/].f_260.f_205[num /*13*/].f_7)
			return true;
	}

	return false;
}

int func_127(Player plParam0, int iParam1) // Position - 0x37BB (14267)
{
	int i;

	if (func_128(iParam1) && plParam0 != _INVALID_PLAYER_INDEX())
	{
		for (i = 0; i <= 6; i = i + 1)
		{
			if (Global_1845250[plParam0 /*880*/].f_260.f_205[i /*13*/] == iParam1)
				return i;
		}
	}

	return -1;
}

BOOL func_128(int iParam0) // Position - 0x3807 (14343)
{
	if (iParam0 == 33 || iParam0 == 0)
		return false;

	return true;
}

BOOL func_129(Player plParam0, int iParam1) // Position - 0x3826 (14374)
{
	int i;

	if (func_128(iParam1) && plParam0 != _INVALID_PLAYER_INDEX())
	{
		for (i = 0; i <= 6; i = i + 1)
		{
			if (Global_1845250[plParam0 /*880*/].f_260.f_205[i /*13*/] == iParam1)
				return true;
		}
	}

	return false;
}

int func_130(int iParam0) // Position - 0x3871 (14449)
{
	switch (iParam0)
	{
		case 3:
			return 1;
	
		case 1:
			return 2;
	
		case 4:
			return 3;
	
		case 2:
			return 4;
	
		case 0:
			return 5;
	
		case 5:
			return 6;
	
		case 6:
			return 7;
	
		default:
		
	}

	return -1;
}

int func_131(int iParam0) // Position - 0x38C7 (14535)
{
	switch (iParam0)
	{
		case 1:
			return 3;
	
		case 2:
			return 1;
	
		case 3:
			return 4;
	
		case 4:
			return 2;
	
		case 5:
			return 0;
	
		case 6:
			return 3;
	
		case 7:
			return 1;
	
		case 8:
			return 4;
	
		case 9:
			return 2;
	
		case 10:
			return 0;
	
		case 11:
			return 3;
	
		case 12:
			return 1;
	
		case 13:
			return 4;
	
		case 14:
			return 2;
	
		case 15:
			return 0;
	
		case 16:
			return 3;
	
		case 17:
			return 1;
	
		case 18:
			return 4;
	
		case 19:
			return 2;
	
		case 20:
			return 0;
	
		case 21:
			return 5;
	
		case 22:
			return 5;
	
		case 23:
			return 5;
	
		case 24:
			return 5;
	
		case 25:
			return 5;
	
		case 26:
			return 5;
	
		case 27:
			return 5;
	
		case 28:
			return 5;
	
		case 29:
			return 5;
	
		case 30:
			return 5;
	
		case 31:
			return 5;
	
		case 32:
			return 6;
	
		default:
		
	}

	return -1;
}

int func_132(Player plParam0, int iParam1) // Position - 0x3A17 (14871)
{
	int num;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return 0;

	if (iParam1 < 0 || iParam1 >= 7)
		return 0;

	if (func_128(Global_1845250[plParam0 /*880*/].f_260.f_205[iParam1 /*13*/]))
		num = Global_1845250[plParam0 /*880*/].f_260.f_205[iParam1 /*13*/];

	return num;
}

BOOL func_133(int iParam0) // Position - 0x3A70 (14960)
{
	if (Global_24098 || Global_24097 || Global_24099)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}

	if (Global_118[iParam0 /*10*/].f_8 != 198)
		if (Global_21610.f_1 == 10)
			if (Global_8778 == iParam0)
				return 1;
			else
				return 0;
		else
			return 0;

	return 0;
}

BOOL func_134(Player plParam0) // Position - 0x3AD4 (15060)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	return IS_BIT_SET(Global_1882572[plParam0 /*315*/].f_158.f_43.f_1, 5);
}

void func_135() // Position - 0x3AFA (15098)
{
	if (func_136())
	{
		if (!bLocal_43 && !Global_1576473)
		{
			Global_1576473 = true;
			bLocal_43 = true;
		}
	}
	else if (bLocal_43)
	{
		bLocal_43 = false;
	}

	return;
}

BOOL func_136() // Position - 0x3B2C (15148)
{
	if (*Global_4718592.f_132500 == 193443741 || *Global_4718592.f_132500 == -1655398699 || *Global_4718592.f_132500 == 846282902)
		return true;

	return false;
}

void func_137() // Position - 0x3B78 (15224)
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

	if (*Global_4718592.f_132500 != Global_262145.f_37058[2])
		return;

	vector = { -941.45f, -2601.8f, -8.925f };
	vector2 = { -920.331f, -2584.174f, -8.925f };

	if (IS_BIT_SET(Global_1574951, 4) && func_140() >= 2)
	{
		Global_2686090.f_7150[func_139(18, 0) /*5*/] = { vector };
		Global_2686090.f_7150[func_139(18, 0) /*5*/].f_3 = -49.93f;
		Global_2686090.f_7150[func_139(18, 1) /*5*/] = { vector2 };
		Global_2686090.f_7150[func_139(18, 1) /*5*/].f_3 = 130.61f;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(veLocal_53) || !ENTITY::DOES_ENTITY_EXIST(veLocal_55) || !ENTITY::DOES_ENTITY_EXIST(veLocal_54) || !ENTITY::DOES_ENTITY_EXIST(veLocal_56))
	{
		allVehicles = VEHICLE::GET_ALL_VEHICLES(&Global_1576515);
		i = 0;
	
		for (i = 0; i < allVehicles; i = i + 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_1576515[i]))
			{
			}
			else if (ENTITY::GET_ENTITY_MODEL(Global_1576515[i]) != joaat("metrotrain"))
			{
			}
			else
			{
				if (func_138(Global_1576515[i]) == 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(veLocal_53))
						if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_53) != Global_1576515[i] && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_54) != Global_1576515[i])
							veLocal_53 = Global_1576515[i];
				
					if (!ENTITY::DOES_ENTITY_EXIST(veLocal_54))
						if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_53) != Global_1576515[i] && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_54) != Global_1576515[i])
							veLocal_54 = Global_1576515[i];
				}
			
				if (func_138(Global_1576515[i]) == 1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(veLocal_55))
						if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_55) != Global_1576515[i] && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_56) != Global_1576515[i])
							veLocal_55 = Global_1576515[i];
				
					if (!ENTITY::DOES_ENTITY_EXIST(veLocal_56))
						if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_55) != Global_1576515[i] && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_56) != Global_1576515[i])
							veLocal_56 = Global_1576515[i];
				}
			}
		}
	
		return;
	}

	MISC::GET_MODEL_DIMENSIONS(joaat("metrotrain"), &minimum, &maximum);
	maximum = 0f;
	maximum.f_2 = 0f;
	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(veLocal_53, false), ENTITY::GET_ENTITY_HEADING(veLocal_53), maximum) };
	offsetFromCoordAndHeadingInWorldCoords2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(veLocal_54, false), ENTITY::GET_ENTITY_HEADING(veLocal_54), maximum) };
	MISC::GET_MODEL_DIMENSIONS(joaat("metrotrain"), &minimum, &maximum);
	maximum = 0f;
	maximum.f_2 = 0f;
	offsetFromCoordAndHeadingInWorldCoords3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(veLocal_55, false), ENTITY::GET_ENTITY_HEADING(veLocal_55), maximum) };
	offsetFromCoordAndHeadingInWorldCoords4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(veLocal_56, false), ENTITY::GET_ENTITY_HEADING(veLocal_56), maximum) };
	flag2 = ENTITY::IS_ENTITY_TOUCHING_ENTITY(veLocal_56, veLocal_53) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(veLocal_56, veLocal_54);

	if (BUILTIN::VDIST2(offsetFromCoordAndHeadingInWorldCoords, offsetFromCoordAndHeadingInWorldCoords4) < BUILTIN::POW(5f, 2f) || flag2)
		flag = true;

	if (flag)
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veLocal_55))
			VEHICLE::SET_TRAIN_SPEED(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veLocal_55), 0f);
	
		Global_4980736.f_89361[1 /*238*/].f_8 = 0;
		MISC::SET_BIT(&(Global_4980736.f_89361[1 /*238*/].f_9), 8);
		MISC::SET_BIT(&(Global_4980736.f_89361[1 /*238*/].f_9), 9);
		MISC::SET_BIT(&(Global_4980736.f_89361[1 /*238*/].f_9), 10);
		MISC::SET_BIT(&(Global_4980736.f_89361[1 /*238*/].f_9), 11);
	}

	if (flag2)
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veLocal_53))
			ENTITY::SET_ENTITY_COORDS(veLocal_53, vector, true, false, false, true);

	if (flag2)
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veLocal_55))
			ENTITY::SET_ENTITY_COORDS(veLocal_55, vector2, true, false, false, true);

	return;
}

int func_138(Vehicle veParam0) // Position - 0x3F38 (16184)
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

int func_139(int iParam0, int iParam1) // Position - 0x3F71 (16241)
{
	int i;

	for (i = 0; i <= *Global_4980736.f_220133 - 1; i = i + 1)
	{
		if (Global_4980736.f_220117[i /*3*/] != iParam0 || Global_4980736.f_220117[i /*3*/].f_1 != iParam1)
		{
		}
		else
		{
			return i;
		}
	}

	return -1;
}

int func_140() // Position - 0x3FCA (16330)
{
	int i;

	for (i = 6; i >= 0; i = i + -1)
	{
		if (IS_BIT_SET(Global_2686090.f_3914, i))
			return i;
	}

	return 0;
}

void func_141() // Position - 0x3FF7 (16375)
{
	if (Global_2733002.f_5765.f_3 != -1)
		if (Global_2733002.f_5659 == -1)
			Global_2733002.f_5659 = func_142();

	return;
}

int func_142() // Position - 0x4026 (16422)
{
	return (func_143(15) + PLAYER::PLAYER_ID()) % 15;
}

int func_143(int iParam0) // Position - 0x403C (16444)
{
	return Global_2733002.f_5765.f_3 % iParam0;
}

void func_144() // Position - 0x4050 (16464)
{
	if (IS_BIT_SET(Global_1950198.f_8, 11))
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(Global_1970261) && NETWORK::NETWORK_IS_ENTITY_CONCEALED(Global_1970261))
		{
			if (!_STOPWATCH_IS_INITIALIZED(&uLocal_3))
			{
				func_9(&uLocal_3, false, false);
			}
			else if (func_8(&uLocal_3, 10000, false))
			{
				func_145();
				_STOPWATCH_DESTROY(&uLocal_3);
			}
		}
	}

	return;
}

void func_145() // Position - 0x40A8 (16552)
{
	MISC::CLEAR_BIT(&(Global_1950198.f_8), 11);
	func_149();
	func_148(PLAYER::PLAYER_ID(), false);
	func_147(PLAYER::PLAYER_ID(), false);
	func_146(false);
	return;
}

void func_146(BOOL bParam0) // Position - 0x40D7 (16599)
{
	if (bParam0)
		Global_1950198.f_5351 = 1;
	else
		Global_1950198.f_5351 = 0;

	return;
}

void func_147(Player plParam0, BOOL bParam1) // Position - 0x40F7 (16631)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (bParam1)
			if (!IS_BIT_SET(Global_2658291[plParam0 /*468*/].f_325.f_5, 11))
				MISC::SET_BIT(&(Global_2658291[plParam0 /*468*/].f_325.f_5), 11);
		else if (IS_BIT_SET(Global_2658291[plParam0 /*468*/].f_325.f_5, 11))
			MISC::CLEAR_BIT(&(Global_2658291[plParam0 /*468*/].f_325.f_5), 11);

	return;
}

void func_148(Player plParam0, BOOL bParam1) // Position - 0x4161 (16737)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (bParam1)
			if (!IS_BIT_SET(Global_2658291[plParam0 /*468*/].f_325.f_5, 14))
				MISC::SET_BIT(&(Global_2658291[plParam0 /*468*/].f_325.f_5), 14);
		else if (IS_BIT_SET(Global_2658291[plParam0 /*468*/].f_325.f_5, 14))
			MISC::CLEAR_BIT(&(Global_2658291[plParam0 /*468*/].f_325.f_5), 14);

	return;
}

void func_149() // Position - 0x41CB (16843)
{
	if (Global_1970261 != 0)
		Global_1970261 = 0;

	return;
}

void func_150() // Position - 0x41E0 (16864)
{
	if (!func_55())
	{
		if (bLocal_5)
			bLocal_5 = false;
	
		return;
	}

	if (bLocal_5)
		return;

	if (func_17(PLAYER::PLAYER_ID(), false) && Global_2658291[PLAYER::PLAYER_ID() /*468*/].f_325.f_11 == PLAYER::PLAYER_ID() && !func_153())
	{
		if (!func_152(PLAYER::PLAYER_ID()))
		{
			_STAT_SET_PACKED_BOOL(func_151(1), false, -1);
			_STAT_SET_PACKED_BOOL(func_151(2), false, -1);
			_STAT_SET_PACKED_BOOL(func_151(3), false, -1);
		}
	
		bLocal_5 = true;
	}

	return;
}

int func_151(int iParam0) // Position - 0x4266 (16998)
{
	if (!func_44(iParam0))
		return 0;

	switch (iParam0)
	{
		case 1:
			return 28330;
	
		case 2:
			return 28331;
	
		case 3:
			return 28332;
	
		default:
		
	}

	return 0;
}

BOOL func_152(Player plParam0) // Position - 0x42A8 (17064)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	return IS_BIT_SET(Global_1882572[plParam0 /*315*/].f_158.f_43.f_1, 3);
}

BOOL func_153() // Position - 0x42CE (17102)
{
	return Global_77342;
}

void func_154() // Position - 0x42DA (17114)
{
	if (func_155())
		if (!IS_BIT_SET(Global_1950198.f_5172.f_1, 31))
			MISC::SET_BIT(&(Global_1950198.f_5172.f_1), 31);
	else if (IS_BIT_SET(Global_1950198.f_5172.f_1, 31))
		MISC::CLEAR_BIT(&(Global_1950198.f_5172.f_1), 31);

	return;
}

BOOL func_155() // Position - 0x4329 (17193)
{
	return Global_1836875.f_94;
}

void func_156() // Position - 0x4337 (17207)
{
	int i;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) <= 0)
	{
		bLocal_51 = false;
		return;
	}

	if (bLocal_51)
		return;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (Global_4718592.f_185991[i] == 113)
			Global_4718592.f_185991[i] = 107;
	}

	bLocal_51 = true;
	return;
}

void func_157() // Position - 0x4390 (17296)
{
	struct<5> eventData;
	int i;
	eEventType eventAtIndex;
	Ped ped;
	int j;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1694114956) == 0)
		return;

	for (i = 0; i <= SCRIPT::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK) - 1; i = i + 1)
	{
		eventAtIndex = SCRIPT::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i);
	
		switch (eventAtIndex)
		{
			case EVENT_NETWORK_SCRIPT_EVENT:
				if (SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, i, &eventData, 5))
				{
					if (eventData == -487774749)
					{
						if (eventData.f_3 < 0 || eventData.f_3 >= 50)
							return;
					
						for (j = 0; j <= *Global_4980736.f_90314 - 1; j = j + 1)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(Global_1058124.f_157[j]))
							{
							}
							else if (func_158(Global_1058124.f_157[j]) == eventData.f_3)
							{
								ped = Global_1058124.f_157[j];
								break;
							}
						}
					
						if (!PED::IS_PED_INJURED(ped) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(ped))
							TASK::CLEAR_PED_TASKS(ped);
					}
				}
				break;
		}
	}

	return;
}

int func_158(Entity eParam0) // Position - 0x447A (17530)
{
	int _int;

	if (eParam0 == 0)
		return -1;

	_int = -1;

	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MC_EntityID", INT))
		if (DECORATOR::DECOR_EXIST_ON(eParam0, "MC_EntityID"))
			_int = DECORATOR::DECOR_GET_INT(eParam0, "MC_EntityID");

	return _int;
}

void func_159() // Position - 0x44B3 (17587)
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (bLocal_50)
			bLocal_50 = false;
	
		return;
	}

	if (!Global_1836261)
		return;

	if (!bLocal_50)
	{
		if (!func_161(13))
			func_160();
	
		bLocal_50 = true;
	}

	return;
}

void func_160() // Position - 0x44F3 (17651)
{
	HUD::SET_MINIMAP_COMPONENT(20, false, -1);
	HUD::SET_MINIMAP_COMPONENT(22, false, -1);
	HUD::SET_MINIMAP_COMPONENT(21, false, -1);
	return;
}

BOOL func_161(int iParam0) // Position - 0x4516 (17686)
{
	return *Global_4718592.f_192778 >= iParam0;
}

void func_162() // Position - 0x452B (17707)
{
	if (func_54() == 178 && func_163() == 482563055)
	{
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_25))
			return;
	
		STREAMING::REQUEST_MODEL(joaat("prop_dummy_car"));
	
		if (STREAMING::HAS_MODEL_LOADED(joaat("prop_dummy_car")))
		{
			obLocal_25 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_dummy_car"), -1628.8046f, 486.4122f, 118.4275f, false, false, false, 0);
			ENTITY::SET_ENTITY_ROTATION(obLocal_25, 0f, 0f, -35.6617f, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(obLocal_25, true);
			ENTITY::SET_ENTITY_INVINCIBLE(obLocal_25, true, false);
			ENTITY::SET_ENTITY_VISIBLE(obLocal_25, false, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_dummy_car"));
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(obLocal_25))
	{
		OBJECT::DELETE_OBJECT(&obLocal_25);
	}

	return;
}

int func_163() // Position - 0x45CC (17868)
{
	return Global_1882572[PLAYER::PLAYER_ID() /*315*/].f_158.f_43.f_6;
}

void func_164() // Position - 0x45E5 (17893)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
	{
		if (func_17(PLAYER::PLAYER_ID(), false))
		{
			if (!bLocal_24)
			{
				bLocal_24 = true;
				PED::SET_PED_MAX_TIME_UNDERWATER(PLAYER::PLAYER_PED_ID(), 10000000f);
				PED::SET_PED_DIES_IN_WATER(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (bLocal_24)
		{
			bLocal_24 = false;
			PED::SET_PED_MAX_TIME_UNDERWATER(PLAYER::PLAYER_PED_ID(), -1f);
			PED::SET_PED_DIES_IN_WATER(PLAYER::PLAYER_PED_ID(), true);
		}
	}

	return;
}

void func_165() // Position - 0x4640 (17984)
{
	if (IS_BIT_SET(Global_1845250[PLAYER::PLAYER_ID() /*880*/].f_260.f_439.f_2, 17))
		if (!Global_2733002.f_5828)
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_mp_rc_vehicle")) == 0 && !IS_BIT_SET(Global_1845250[PLAYER::PLAYER_ID() /*880*/].f_260.f_439.f_2, 16))
				MISC::CLEAR_BIT(&(Global_1845250[PLAYER::PLAYER_ID() /*880*/].f_260.f_439.f_2), 17);

	return;
}

void func_166() // Position - 0x46AF (18095)
{
	Vehicle vehiclePedIsIn;

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
		return;

	if (func_168() && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(vehiclePedIsIn) && VEHICLE::IS_VEHICLE_MODEL(vehiclePedIsIn, -1321131184) && Global_102481.f_530 == 40 && Global_24529.f_6342 == 0)
		{
			func_7(&uLocal_19, false, false);
			uLocal_21 = { ENTITY::GET_ENTITY_COORDS(vehiclePedIsIn, true) };
		}
		else if (!func_167(&uLocal_19, 5000, false))
		{
			if (MISC::GET_FRAME_COUNT() % 15 == 0)
				MISC::CLEAR_AREA(uLocal_21, 6f, false, false, false, true);
		}
	}
	else if (!func_167(&uLocal_19, 5000, false))
	{
		if (MISC::GET_FRAME_COUNT() % 15 == 0)
			MISC::CLEAR_AREA(uLocal_21, 6f, false, false, false, true);
	}

	return;
}

BOOL func_167(var uParam0, int iParam1, BOOL bParam2) // Position - 0x4780 (18304)
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

BOOL func_168() // Position - 0x47ED (18413)
{
	return IS_BIT_SET(Global_80529, 8);
}

void func_169() // Position - 0x47FC (18428)
{
	if (iLocal_7.f_2 >= *Global_262145.f_35612)
		return;

	switch (iLocal_7.f_1)
	{
		case 0:
			if (Global_2709274.f_567 && Global_2709903 != -1)
			{
				iLocal_7 = Global_2709903;
				STREAMING::REQUEST_MODEL(func_176(iLocal_7));
				iLocal_7.f_1 = iLocal_7.f_1 + 1;
			}
			break;
	
		case 1:
			STREAMING::REQUEST_MODEL(func_176(iLocal_7));
		
			if (STREAMING::HAS_MODEL_LOADED(func_176(iLocal_7)))
			{
				if (!Global_2709274.f_567)
				{
					func_171(iLocal_7);
					func_170();
					iLocal_7.f_2 = iLocal_7.f_2 + 1;
				}
			}
			break;
	}

	return;
}

void func_170() // Position - 0x48A1 (18593)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_7.f_3))
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_7.f_3));

	iLocal_7.f_1 = 0;
	iLocal_7 = -1;
	return;
}

void func_171(int iParam0) // Position - 0x48C4 (18628)
{
	Vector3 vector;

	vector = { func_175(iParam0) };
	vector.f_2 = vector.f_2 - 2.5f;
	iLocal_7.f_3 = OBJECT::CREATE_OBJECT(func_176(iParam0), vector, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(iLocal_7.f_3, func_172(iParam0), 2, true);
	OBJECT::SET_OBJECT_TARGETTABLE(iLocal_7.f_3, false, 0);
	ENTITY::SET_ENTITY_PROOFS(iLocal_7.f_3, true, true, true, true, true, false, false, false);

	if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iLocal_7.f_3))
		if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iLocal_7.f_3))
			NETWORK::SET_NETWORK_ID_CAN_MIGRATE(NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iLocal_7.f_3), false);

	ENTITY::FREEZE_ENTITY_POSITION(iLocal_7.f_3, true);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_7.f_3, 200);
	return;
}

Vector3 func_172(int iParam0) // Position - 0x4959 (18777)
{
	int num;

	num = func_173(iParam0);

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

int func_173(int iParam0) // Position - 0x4B43 (19267)
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

int _STAT_GET_PACKED_INT(int iParam0, int iParam1) // Position - 0x4BBB (19387)
{
	if (iParam1 == -1)
		iParam1 = func_33();

	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

Vector3 func_175(int iParam0) // Position - 0x4BD7 (19415)
{
	int num;

	num = func_173(iParam0);

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

Hash func_176(int iParam0) // Position - 0x4EC1 (20161)
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

void func_177() // Position - 0x4F17 (20247)
{
	if (func_17(PLAYER::PLAYER_ID(), false))
	{
		if (Global_2658291[PLAYER::PLAYER_ID() /*468*/].f_325.f_11 != _INVALID_PLAYER_INDEX() && plLocal_6 != Global_2658291[PLAYER::PLAYER_ID() /*468*/].f_325.f_11)
			plLocal_6 = Global_2658291[PLAYER::PLAYER_ID() /*468*/].f_325.f_11;
	}
	else if (plLocal_6 != _INVALID_PLAYER_INDEX() && !func_57(PLAYER::PLAYER_ID()) && !func_182() && !Global_1950198.f_4247 && !func_181())
	{
		if (!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			plLocal_6 = _INVALID_PLAYER_INDEX();
			return;
		}
		else
		{
			func_178(plLocal_6);
		}
	}

	return;
}

BOOL func_178(Player plParam0) // Position - 0x4FC6 (20422)
{
	BOOL num;
	int num2;

	num = 1;

	if (plParam0 != _INVALID_PLAYER_INDEX() && !func_180() && !(func_182() && func_179(Global_1950198.f_5246)) && !(Global_1950198.f_4247 && func_179(Global_1950198.f_4248)))
	{
		num2 = plParam0 + 32;
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				if (NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
				{
					num = 0;
				}
				else if (NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(Global_2673271.f_4.f_16) == num2)
				{
					if (!NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
					{
						NETWORK::NETWORK_END_TUTORIAL_SESSION();
						num = 0;
					}
				}
			}
		}
	}
	else
	{
		plParam0 == _INVALID_PLAYER_INDEX();
		func_180();
		func_182() && func_179(Global_1950198.f_5246);
		Global_1950198.f_4247 && func_179(Global_1950198.f_4248);
	}

	return num;
}

BOOL func_179(int iParam0) // Position - 0x50AF (20655)
{
	return func_18(iParam0) == 33;
}

BOOL func_180() // Position - 0x50C0 (20672)
{
	return IS_BIT_SET(Global_1950198.f_14, 10);
}

BOOL func_181() // Position - 0x50D1 (20689)
{
	return IS_BIT_SET(Global_1950198.f_3, 8);
}

BOOL func_182() // Position - 0x50E2 (20706)
{
	return Global_1950198.f_5246 != -1;
}

void func_183() // Position - 0x50F3 (20723)
{
	if (func_187(PLAYER::PLAYER_ID()))
	{
		if (!bLocal_47)
		{
			if (func_186() && MISC::ARE_STRINGS_EQUAL(&(Global_2685150.f_863), "SStkBAsLAkaLStFT7XVe0Q") || MISC::ARE_STRINGS_EQUAL(&(Global_2685150.f_863), "2pzrsV4cE0e0S7s1lTrDeg") || MISC::ARE_STRINGS_EQUAL(&(Global_2685150.f_863), "9LUl3hK6q0yF3TxCS23h4A"))
			{
				func_185();
				func_184();
				bLocal_47 = true;
			}
		}
	}
	else
	{
		bLocal_47 = false;
	}

	return;
}

void func_184() // Position - 0x515F (20831)
{
	MISC::CLEAR_BIT(&(Global_2685150.f_2), 14);
	return;
}

void func_185() // Position - 0x5173 (20851)
{
	MISC::SET_BIT(&Global_2685150, 7);
	return;
}

BOOL func_186() // Position - 0x5184 (20868)
{
	return IS_BIT_SET(Global_2685150, 5);
}

BOOL func_187(Player plParam0) // Position - 0x5192 (20882)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2658291[plParam0 /*468*/].f_325.f_8 != -1 && Global_2658291[plParam0 /*468*/].f_325.f_11 != _INVALID_PLAYER_INDEX())
				return func_18(Global_2658291[plParam0 /*468*/].f_325.f_8) == 5;

	return false;
}

void func_188() // Position - 0x51F1 (20977)
{
	BOOL flag;

	flag = Global_1950198.f_5391 == 88 || Global_1950198.f_5391 == 147;

	if (!bLocal_16)
	{
		if (Global_1950198.f_5391.f_1 != -1 && func_18(Global_1950198.f_5391.f_1) == 33 && flag && !Global_4718592.f_3602)
		{
			Global_4718592.f_3602 = 1;
			bLocal_16 = true;
			func_7(&uLocal_17, false, false);
		}
	}
	else
	{
		if (Global_4718592.f_3602 && func_189(uLocal_17, 10000, false))
		{
			Global_4718592.f_3602 = 0;
			bLocal_16 = false;
			_STOPWATCH_DESTROY(&uLocal_17);
		}
	
		if (Global_1950198.f_5391.f_1 == -1 || func_18(Global_1950198.f_5391.f_1) != 33 || !flag && Global_4718592.f_3602)
		{
			Global_4718592.f_3602 = 0;
			bLocal_16 = false;
			_STOPWATCH_DESTROY(&uLocal_17);
		}
	}

	return;
}

BOOL func_189(int iParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x52DE (21214)
{
	if (!_STOPWATCH_IS_INITIALIZED(&iParam0))
		return 0;

	if (iParam2 == -1)
		return 1;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0)) >= iParam2)
			return 1;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), iParam0)) >= iParam2)
		return 1;

	return 0;
}

void func_190() // Position - 0x533F (21311)
{
	if (!func_11())
		return;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1694114956) <= 0)
		return;

	if (Global_1058075 == 78)
	{
		MISC::SET_BIT(&Global_1844819, 3);
		Global_1844819.f_2 = -1;
	}

	return;
}

void func_191() // Position - 0x537B (21371)
{
	if (Global_113847 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) <= 0 && func_55())
		NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();

	return;
}

void func_192() // Position - 0x53A7 (21415)
{
	if (!bLocal_12)
	{
		if (Global_1836491)
		{
			if (func_194() || func_193())
				Global_262145.f_20001 = 1;
			else
				Global_262145.f_20001 = 0;
		
			bLocal_12 = true;
		}
	}
	else if (!Global_1836491)
	{
		bLocal_12 = false;
	}

	return;
}

int func_193() // Position - 0x53F1 (21489)
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

int func_194() // Position - 0x5480 (21632)
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

void func_195() // Position - 0x550F (21775)
{
	int i;

	if (MISC::IS_PC_VERSION())
	{
		for (i = 0; i < 32; i = i + 1)
		{
			MISC::SET_BIT(&(Global_1845250[i /*880*/].f_828), 1);
		}
	}

	return;
}

void func_196() // Position - 0x5542 (21826)
{
	if (bLocal_1)
	{
		HUD::SET_TEXT_SCALE(0f, 0.23f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		func_197(0.69f, 0.06f, "STRING", sLocal_0);
	}

	if (!bLocal_1)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			switch (iLocal_2)
			{
				case 0:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
					{
						iLocal_2 = iLocal_2 + 1;
						BUILTIN::SETTIMERA(0);
					}
					break;
			
				case 1:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
					{
						iLocal_2 = iLocal_2 + 1;
						BUILTIN::SETTIMERA(0);
					}
					else if (BUILTIN::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
			
				case 2:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
					{
						iLocal_2 = iLocal_2 + 1;
						BUILTIN::SETTIMERA(0);
					}
					else if (BUILTIN::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
			
				case 3:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
					{
						iLocal_2 = iLocal_2 + 1;
						BUILTIN::SETTIMERA(0);
					}
					else if (BUILTIN::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
			
				case 4:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
					{
						bLocal_1 = true;
						BUILTIN::SETTIMERA(0);
					}
					else if (BUILTIN::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
			}
		}
	}
	else if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		switch (iLocal_2)
		{
			case 0:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
				{
					iLocal_2 = iLocal_2 + 1;
					BUILTIN::SETTIMERA(0);
				}
				break;
		
			case 1:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
				{
					iLocal_2 = iLocal_2 + 1;
					BUILTIN::SETTIMERA(0);
				}
				else if (BUILTIN::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
		
			case 2:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
				{
					iLocal_2 = iLocal_2 + 1;
					BUILTIN::SETTIMERA(0);
				}
				else if (BUILTIN::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
		
			case 3:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
				{
					iLocal_2 = iLocal_2 + 1;
					BUILTIN::SETTIMERA(0);
				}
				else if (BUILTIN::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
		
			case 4:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
				{
					bLocal_1 = false;
					BUILTIN::SETTIMERA(0);
				}
				else if (BUILTIN::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
		}
	}

	return;
}

void func_197(float fParam0, float fParam1, char* sParam2, char* sParam3) // Position - 0x5741 (22337)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
	return;
}

BOOL IS_ROCKSTAR_DEV() // Position - 0x575E (22366)
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

Player _INVALID_PLAYER_INDEX() // Position - 0x576F (22383)
{
	return -1;
}

