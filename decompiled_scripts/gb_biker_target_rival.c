#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = 0;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
#endregion

void main() // Position - 0x0
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	func_96();

	while (true)
	{
		func_95();
	
		if (_SHOULD_NETWORK_SCRIPT_TERMINATE())
			func_89();
	
		if (Global_2794162.f_5231.f_755 == 0)
			func_89();
	
		switch (iLocal_33)
		{
			case 0:
				iLocal_33 = 1;
				break;
		
			case 1:
				if (func_12())
					iLocal_33 = 2;
				break;
		
			case 2:
				if (!func_1())
					iLocal_33 = 4;
				break;
		
			case 4:
				func_89();
				break;
		}
	}

	return;
}

BOOL func_1() // Position - 0xD3
{
	Player player;

	if (func_7(true))
	{
		player = Global_2794162.f_5231.f_754;
	
		if (player != _INVALID_PLAYER_INDEX())
		{
			if (func_4(player))
			{
				func_2(player);
				return false;
			}
		}
		else
		{
			func_2(player);
			return false;
		}
	}
	else
	{
		return false;
	}

	return true;
}

void func_2(Player plParam0) // Position - 0x120
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		func_3(plParam0);

	Global_2794162.f_5231.f_754 = _INVALID_PLAYER_INDEX();
	return;
}

void func_3(Player plParam0) // Position - 0x145
{
	Player offset;

	offset = plParam0;
	MISC::CLEAR_BIT(&(Global_2646835.f_388), offset);
	MISC::CLEAR_BIT(&(Global_2646835.f_389), offset);
	MISC::CLEAR_BIT(&(Global_2646835.f_390), offset);
	MISC::CLEAR_BIT(&(Global_2646835.f_392), offset);
	MISC::CLEAR_BIT(&(Global_2646835.f_396), offset);
	MISC::CLEAR_BIT(&(Global_2646835.f_391), offset);
	return;
}

BOOL func_4(Player plParam0) // Position - 0x19F
{
	if (!_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		return true;

	return false;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x1B8
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
				if (player == Global_2672524.f_3)
					return Global_2672524.f_2;
				else if (Global_2657704[player /*463*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x218
{
	return -1;
}

BOOL func_7(BOOL bParam0) // Position - 0x221
{
	return func_8(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_8(Player plParam0, BOOL bParam1) // Position - 0x233
{
	return func_9(plParam0, bParam1, 1);
}

int func_9(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x244
{
	Player player;

	if (!func_11(plParam0))
		return 0;

	if (!bParam1)
		if (func_10(plParam0, iParam2))
			return 0;

	player = Global_1895156[plParam0 /*609*/].f_10;

	if (player != _INVALID_PLAYER_INDEX() && Global_1895156[player /*609*/].f_10.f_429 == iParam2)
		return 1;

	return 0;
}

BOOL func_10(Player plParam0, int iParam1) // Position - 0x2A1
{
	if (func_11(plParam0))
		if (Global_1895156[plParam0 /*609*/].f_10 != _INVALID_PLAYER_INDEX())
			if (Global_1895156[plParam0 /*609*/].f_10 == plParam0 && Global_1895156[plParam0 /*609*/].f_10.f_429 == iParam1)
				return true;

	return false;
}

BOOL func_11(Player plParam0) // Position - 0x2F0
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_12() // Position - 0x312
{
	Player player;

	if (func_7(true))
	{
		player = Global_2794162.f_5231.f_754;
	
		if (player != _INVALID_PLAYER_INDEX())
			if (func_13(player))
				return true;
	}

	return false;
}

BOOL func_13(Player plParam0) // Position - 0x345
{
	if (_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
	{
		func_87(plParam0, 432, true, false);
	
		if (func_86(plParam0))
			func_83(plParam0, func_84(func_85(PLAYER::PLAYER_ID())), true, false);
	
		if (func_81(plParam0))
			func_79(plParam0, true, true, false);
	
		func_73(plParam0, true, false);
		func_14(plParam0, true, 5000);
		return true;
	}

	return false;
}

void func_14(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x3A9
{
	Player offset;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return;

	if (iParam2 > 200000)
		iParam2 = 200000;

	offset = plParam0;

	if (bParam1)
	{
		if (plParam0 == Global_2672524)
		{
		}
		else if (HUD::DOES_BLIP_EXIST(Global_2646835[offset]))
		{
			MISC::SET_BIT(&(Global_2646835.f_370), offset);
			MISC::CLEAR_BIT(&(Global_2646835.f_375), offset);
			HUD::SET_BLIP_FLASHES(Global_2646835[offset], true);
			HUD::SET_BLIP_FLASH_INTERVAL(Global_2646835[offset], 250);
			func_15(plParam0);
		
			if (iParam2 < 0)
				MISC::SET_BIT(&(Global_2646835.f_375), offset);
			else
				Global_2646835.f_201[offset] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
		}
		else
		{
			MISC::SET_BIT(&(Global_2646835.f_370), offset);
			MISC::CLEAR_BIT(&(Global_2646835.f_375), offset);
		
			if (iParam2 < 0)
				MISC::SET_BIT(&(Global_2646835.f_375), offset);
			else
				Global_2646835.f_201[offset] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
		}
	}

	if (!bParam1)
	{
		MISC::CLEAR_BIT(&(Global_2646835.f_370), offset);
		MISC::CLEAR_BIT(&(Global_2646835.f_375), offset);
	
		if (HUD::DOES_BLIP_EXIST(Global_2646835[offset]))
		{
			func_15(plParam0);
			HUD::SET_BLIP_FLASHES(Global_2646835[offset], false);
		}
	}

	return;
}

void func_15(Player plParam0) // Position - 0x4DE
{
	Player player;

	player = plParam0;

	if (_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
	{
		if (HUD::DOES_BLIP_EXIST(Global_2646835[player]))
		{
			Global_2646835.f_1504[player] = func_16(plParam0);
			HUD::SET_BLIP_PRIORITY(Global_2646835[player], Global_2646835.f_1504[player]);
		}
	}

	return;
}

int func_16(Player plParam0) // Position - 0x52C
{
	Player player;
	eBlipSprite blipSprite;

	player = plParam0;

	if (_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
	{
		if (HUD::DOES_BLIP_EXIST(Global_2646835[player]))
		{
			blipSprite = HUD::GET_BLIP_SPRITE(Global_2646835[player]);
		
			if (IS_BIT_SET(Global_2646835.f_386, player) || IS_BIT_SET(Global_2646835.f_385, player))
			{
				return 1;
			}
			else if (IS_BIT_SET(Global_2646835.f_371, player) || IS_BIT_SET(Global_2646835.f_370, player) || IS_BIT_SET(Global_2646835.f_388, player))
			{
				return func_70(10);
			}
			else
			{
				switch (blipSprite)
				{
					case BLIP_PLAYERSTATE_CUSTODY:
					case BLIP_PLAYERSTATE_ARRESTED:
					case BLIP_PLAYERSTATE_KEYHOLDER:
						return func_70(7);
				
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_70(11);
				
					case BLIP_PLAYERSTATE_DRIVING:
						if (PLAYER::GET_PLAYER_TEAM(plParam0) == PLAYER::GET_PLAYER_TEAM(Global_2672524))
							return func_70(6);
						else
							return func_70(5);
						break;
				
					case BLIP_ON_MISSION:
						if (PLAYER::GET_PLAYER_TEAM(plParam0) == PLAYER::GET_PLAYER_TEAM(Global_2672524))
							return func_70(6);
						else
							return func_70(5);
						break;
				
					case BLIP_PASSIVE:
					case BLIP_USINGMENU:
						if (func_69(Global_2672524, plParam0, -2, 0))
							return func_70(6);
						else
							return func_70(5);
						break;
				
					case BLIP_BOUNTY_HIT:
					case BLIP_BOUNTY_HIT_INSIDE:
						return func_70(10);
				
					case BLIP_INCAPACITATED:
						if (func_21(Global_2672524, plParam0, true))
							return func_70(10);
						else
							return func_70(5);
						break;
				
					case BLIP_CONTRABAND:
					case BLIP_PACKAGE:
					case BLIP_SPORTS_CAR:
					case BLIP_SUPPLIES:
						return func_70(10);
				
					case BLIP_LEVEL_INSIDE:
						if (func_20(plParam0) || func_19(plParam0) || func_17(plParam0))
							if (func_21(Global_2672524, plParam0, true))
								return 3;
							else
								return 4;
						else if (func_21(Global_2672524, plParam0, true))
							return func_70(6);
						else
							return func_70(5);
						break;
				
					case BLIP_PLAYERSTATE_PARTNER:
					case BLIP_GANG_HIGHLIGHT:
					default:
						if (func_21(Global_2672524, plParam0, true))
							return func_70(6);
						else
							return func_70(5);
						break;
				}
			}
		}
	}

	return 1;
}

BOOL func_17(Player plParam0) // Position - 0x797
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657704[plParam0 /*463*/].f_321.f_7 != -1)
				return func_18(Global_2657704[plParam0 /*463*/].f_321.f_7) == 16;

	return false;
}

int func_18(int iParam0) // Position - 0x7DE
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
	}

	return -1;
}

BOOL func_19(Player plParam0) // Position - 0xC92
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657704[plParam0 /*463*/].f_321.f_7 != -1)
				return func_18(Global_2657704[plParam0 /*463*/].f_321.f_7) == 15;

	return false;
}

BOOL func_20(Player plParam0) // Position - 0xCD9
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657704[plParam0 /*463*/].f_321.f_7 != -1)
				return func_18(Global_2657704[plParam0 /*463*/].f_321.f_7) == 14;

	return false;
}

BOOL func_21(Player plParam0, Player plParam1, BOOL bParam2) // Position - 0xD20
{
	if (func_24(plParam0, -2, false, false, false) == func_24(plParam1, -2, false, false, false))
		return true;

	if (bParam2)
		if (func_22(func_24(plParam0, -2, false, false, false)) && func_22(func_24(plParam1, -2, false, false, false)))
			return true;

	return false;
}

int func_22(int iParam0) // Position - 0xD79
{
	if (iParam0 == func_23(true) || iParam0 == func_23(false))
		return 1;

	return 0;
}

int func_23(BOOL bParam0) // Position - 0xD9F
{
	if (bParam0)
		return 118;

	return 116;
}

int func_24(Player plParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xDB6
{
	int playerTeam;
	Ped ped;

	if (!func_11(plParam0))
		return 1;

	if (func_67(plParam0) && !bParam4)
		if (bParam2)
			return 0;
		else
			return 1;

	if (iParam1 == -2)
	{
		playerTeam = PLAYER::GET_PLAYER_TEAM(plParam0);
	
		if (playerTeam > -1 && playerTeam < 4)
			if (Global_4718592.f_112316[playerTeam] != -1)
				iParam1 = playerTeam;
	}

	if (func_67(PLAYER::PLAYER_ID()) || func_66() && func_65() && !IS_BIT_SET(Global_2794162.f_4697, 31) && !bParam4)
	{
		ped = func_64();
	
		if (ENTITY::DOES_ENTITY_EXIST(ped))
			if (PED::IS_PED_A_PLAYER(ped))
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ped) != -1)
					if (_NETWORK_IS_PLAYER_VALID(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ped), false, true))
						if (iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION() && iParam1 < 4)
							if (Global_4718592.f_112316[iParam1] != -1)
								return func_62(iParam1, plParam0, false);
							else
								return func_41(plParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ped), iParam1, bParam2, bParam3);
						else
							return func_41(plParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ped), iParam1, bParam2, bParam3);
			else if (iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION() && iParam1 < 4)
				if (Global_4718592.f_112316[iParam1] != -1)
					return func_62(iParam1, plParam0, false);
				else
					return func_25(false, -1, false);
			else
				return func_25(false, -1, false);
	}

	if (iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION() && iParam1 < 4)
		if (Global_4718592.f_112316[iParam1] != -1)
			return func_62(iParam1, plParam0, false);
		else
			return func_41(plParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);

	return func_41(plParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_25(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0xFA1
{
	return func_26(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_26(Player plParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0xFB7
{
	int playerTeam;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return 3;

	playerTeam = PLAYER::GET_PLAYER_TEAM(plParam0);

	if (func_40() || func_39() && func_37() && Global_1665516.f_1)
		if (bParam1)
			return func_36(iParam2, playerTeam);
		else
			return func_36(playerTeam, playerTeam);

	if (bParam1)
	{
		if (iParam2 > -1)
			if (func_30(playerTeam, iParam2, 0, -1) && !IS_BIT_SET(Global_4718592.f_15, 18))
				if (playerTeam == iParam2)
					return func_23(true);
				else
					return func_23(false);
			else if (bParam3)
				return 28;
			else if (IS_BIT_SET(Global_4718592.f_4, 20))
				return func_27(playerTeam, iParam2, true, 4);
			else
				return func_27(playerTeam, iParam2, false, 4);
	
		return 28;
	}

	if (playerTeam == iParam2 || iParam2 == -1)
		return func_23(true);

	return func_23(false);
}

// Unhandled jump detected. Output should be considered invalid
int func_27(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x10B9
{
	int num;

	num = func_29(iParam0, iParam1, iParam3);

	if (func_28(*Global_4718592.f_117591, true))
		if (num == 1)
			num = 0;

	if (bParam2)
	{
		switch (num)
		{
			case 0:
				return 28;
		
			case 1:
				return 29;
		
			case 2:
				return 30;
		
			case 3:
				return 31;
		
			case 4:
				return 32;
		
			case 5:
				return 33;
		
			case 6:
				return 34;
		
			case 7:
				return 35;
		
			case 8:
				return 36;
		
			case 9:
				return 37;
		
			case 10:
				return 38;
		
			case 11:
				return 39;
		
			case 12:
				return 40;
		
			case 13:
				return 41;
		
			case 14:
				return 42;
		
			case 15:
				return 43;
		
			default:
				goto 0x113;
		}
	}
	else
	{
		switch (num)
		{
			case 0:
				return 28;
		
			case 1:
				return 29;
		
			case 2:
				return 30;
		
			default:
			
		}
	}

	return 28;
}

BOOL func_28(int iParam0, BOOL bParam1) // Position - 0x11D1
{
	int i;

	if (bParam1)
		if (*Global_4718592.f_171044 == 65)
			return true;

	if (iParam0 == 0)
		return false;

	for (i = 0; i <= 6; i = i + 1)
	{
		if (iParam0 == Global_262145.f_9658[i])
			return true;
	}

	return false;
}

int func_29(int iParam0, int iParam1, int iParam2) // Position - 0x1222
{
	int i;
	int num;

	for (i = 0; i < iParam2; i = i + 1)
	{
		if (i == iParam1)
			return num;
		else if (!(iParam0 == i))
			if (!func_30(iParam0, i, 0, -1))
				num = num + 1;
	}

	return -1;
}

BOOL func_30(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x126A
{
	int num;
	int num2;

	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
			return true;
	
		return false;
	}

	if (iParam0 > -1 && iParam1 > -1 && iParam0 == iParam1)
		return true;

	if (iParam0 > -1 && iParam0 < 4 && iParam1 > -1 && iParam1 < 4)
	{
		num = Global_1058071.f_14[iParam0];
	
		if (iParam3 != -1)
			num = iParam3;
	
		if (num < 17 && num > -1)
		{
			if (IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24064, num))
			{
				num2 = Global_1058071.f_14[iParam1];
			
				if (num2 < 17 && num2 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_31(iParam0, num, iParam1, num2) || !func_31(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[num], 0 + iParam1);
							break;
					
						case 1:
							if (!func_31(iParam0, num, iParam1, num2) || !func_31(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[num], 4 + iParam1);
							break;
					
						case 2:
							if (!func_31(iParam0, num, iParam1, num2) || !func_31(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[num], 8 + iParam1);
							break;
					
						case 3:
							if (!func_31(iParam0, num, iParam1, num2) || !func_31(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[num], 12 + iParam1);
							break;
					}
				}
			}
		}
	}

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_1765, 0);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_1765, 1);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_1765, 2);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_1765, 3);
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_1765, 4);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_1765, 5);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_1765, 6);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_1765, 7);
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_1765, 8);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_1765, 9);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_1765, 10);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_1765, 11);
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_1765, 12);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_1765, 13);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_1765, 14);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_1765, 15);
			
				default:
					break;
			}
			break;
	}

	return false;
}

BOOL func_31(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x15B5
{
	BOOL num;
	Player player;
	Ped playerPed;
	Hash entityModel;
	Hash entityModel2;
	Player i;

	if (iParam0 == iParam2)
		return true;

	if (!IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_24065, iParam1))
		return false;

	if (!IS_BIT_SET(Global_4718592.f_1816[iParam2 /*24279*/].f_24065, iParam3))
		return false;

	num = 1;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		entityModel2 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		player = i;
	
		if (!_NETWORK_IS_PLAYER_VALID(player, true, true) || func_33(player, 0) || IS_BIT_SET(Global_2657704[player /*463*/].f_199, 2) || func_32(player))
		{
		}
		else if (PLAYER::GET_PLAYER_TEAM(player) != iParam2)
		{
		}
		else
		{
			playerPed = PLAYER::GET_PLAYER_PED(player);
		
			if (PED::IS_PED_INJURED(playerPed))
			{
			}
			else
			{
				entityModel = ENTITY::GET_ENTITY_MODEL(playerPed);
			
				if (entityModel2 == joaat("MP_F_Freemode_01") || entityModel2 == joaat("MP_M_Freemode_01"))
					if (entityModel == joaat("MP_F_Freemode_01") || entityModel == joaat("MP_M_Freemode_01"))
						return true;
					else
						return false;
				else if (entityModel2 != entityModel)
					return false;
			}
		}
	}

	return num;
}

BOOL func_32(Player plParam0) // Position - 0x16E1
{
	return IS_BIT_SET(Global_1853988[plParam0 /*867*/].f_36.f_18, 14);
}

BOOL func_33(Player plParam0, int iParam1) // Position - 0x16F9
{
	BOOL flag;

	if (!func_11(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_34(-1, false) == 8;
	else
		flag = Global_1853988[plParam0 /*867*/].f_205 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_34(int iParam0, BOOL bParam1) // Position - 0x1752
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_35();

	if (Global_1575043[num2] == 1)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574912[num2];
		bParam1;
	}

	return num;
}

int func_35() // Position - 0x1793
{
	return Global_1574918;
}

int func_36(int iParam0, int iParam1) // Position - 0x179F
{
	if (iParam0 == -1)
		iParam0 = func_29(iParam1, iParam0, 4);

	switch (iParam0)
	{
		case 0:
			return 15;
	
		case 1:
			return 21;
	
		case 2:
			return 24;
	
		case 3:
			return 18;
	
		default:
		
	}

	return 28;
}

BOOL func_37() // Position - 0x17ED
{
	if (func_38())
		return true;

	return IS_BIT_SET(*Global_4718592.f_175236, 4);
}

BOOL func_38() // Position - 0x180C
{
	return IS_BIT_SET(*Global_4718592.f_164769, 12);
}

BOOL func_39() // Position - 0x1821
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return IS_BIT_SET(*Global_4718592.f_175236, 0);

	return IS_BIT_SET(*Global_4718592.f_175236, 0) || Global_1927347 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0;
}

BOOL func_40() // Position - 0x1868
{
	if (func_38() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return true;

	return false;
}

int func_41(Player plParam0, Player plParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1885
{
	int playerTeam;
	BOOL flag;
	Player player;
	int num;
	int num2;

	if (iParam2 == -2)
		playerTeam = PLAYER::GET_PLAYER_TEAM(plParam0);
	else
		playerTeam = iParam2;

	if (Global_1853988[PLAYER::PLAYER_ID() /*867*/] == 148)
		flag = true;

	player = plParam0;

	if (player > -1)
		if (Global_1853988[player /*867*/] == 148)
			flag = true;

	if (!flag)
	{
		if (playerTeam != -1)
		{
			if (func_49())
			{
				num = func_45(plParam0);
			
				if (!(num == -1))
					return func_43(num);
			}
		
			if (func_69(plParam1, plParam0, playerTeam, 0) && !IS_BIT_SET(Global_4718592.f_15, 18) || func_30(PLAYER::GET_PLAYER_TEAM(plParam1), PLAYER::GET_PLAYER_TEAM(plParam0), 0, -1) && IS_BIT_SET(Global_4718592.f_15, 23) && !IS_BIT_SET(Global_4718592.f_15, 18))
				return func_23(true);
			else if (IS_BIT_SET(Global_4718592.f_15, 26))
				return func_42(true);
			else
				return func_26(plParam1, true, playerTeam, bParam4);
		}
		else if (Global_1836600 || Global_1836590 || Global_1853988[plParam0 /*867*/] == 0)
		{
			if (plParam0 == plParam1 || Global_1836600 == 1 && Global_1836610 == 0)
				return func_23(true);
			else
				return func_26(plParam1, true, playerTeam, bParam4);
		}
	
		if (Global_1836594 && Global_1836080.f_14 == plParam0)
			return 28;
	}

	num2 = func_45(plParam0);

	if (!(num2 == -1))
		return func_43(num2);

	if (bParam3)
		return 0;

	return 1;
}

int func_42(BOOL bParam0) // Position - 0x1A1D
{
	if (bParam0)
		return 119;

	return 116;
}

int func_43(int iParam0) // Position - 0x1A34
{
	int num;

	if (iParam0 > -1)
	{
		num = func_44(iParam0);
	
		switch (num)
		{
			case 0:
				return 192;
		
			case 1:
				return 193;
		
			case 2:
				return 194;
		
			case 3:
				return 195;
		
			case 4:
				return 196;
		
			case 5:
				return 197;
		
			case 6:
				return 198;
		
			case 7:
				return 199;
		
			case 8:
				return 200;
		
			case 9:
				return 201;
		
			case 10:
				return 202;
		
			case 11:
				return 203;
		
			case 12:
				return 204;
		
			case 13:
				return 205;
		
			case 14:
				return 206;
		
			default:
			
		}
	}

	return 1;
}

var func_44(int iParam0) // Position - 0x1AF7
{
	return Global_2648711.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_45(Player plParam0) // Position - 0x1B0E
{
	if (func_11(plParam0))
		if (func_47(plParam0, true))
			return Global_2648711.f_818.f_11[func_46(plParam0)];

	return -1;
}

Player func_46(Player plParam0) // Position - 0x1B3E
{
	if (func_11(plParam0))
		return Global_1895156[plParam0 /*609*/].f_10;

	return _INVALID_PLAYER_INDEX();
}

BOOL func_47(Player plParam0, BOOL bParam1) // Position - 0x1B61
{
	if (!func_11(plParam0))
		return false;

	if (!bParam1)
		if (func_48(plParam0))
			return false;

	return Global_1895156[plParam0 /*609*/].f_10 != _INVALID_PLAYER_INDEX();
}

BOOL func_48(Player plParam0) // Position - 0x1B9A
{
	if (func_11(plParam0))
		if (Global_1895156[plParam0 /*609*/].f_10 != _INVALID_PLAYER_INDEX())
			return Global_1895156[plParam0 /*609*/].f_10 == plParam0;

	return false;
}

BOOL func_49() // Position - 0x1BCF
{
	if (func_61() || func_60() || func_59() || func_58() || func_57() || func_55() || func_53() || func_50())
		return true;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && IS_BIT_SET(Global_4718592.f_36, 1))
		return true;

	return false;
}

BOOL func_50() // Position - 0x1C41
{
	return func_51(*Global_4718592.f_117591);
}

BOOL func_51(int iParam0) // Position - 0x1C57
{
	int i;

	for (i = 0; i < 6; i = i + 1)
	{
		if (iParam0 == func_52(i))
			return 1;
	}

	return 0;
}

int func_52(int iParam0) // Position - 0x1C81
{
	if (iParam0 != -1)
		return Global_262145.f_33923[iParam0];

	return -1;
}

BOOL func_53() // Position - 0x1CA0
{
	return func_54(*Global_4718592.f_117591);
}

BOOL func_54(var uParam0) // Position - 0x1CB6
{
	int i;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_262145.f_31922[i] == uParam0)
			return 1;
	}

	return 0;
}

BOOL func_55() // Position - 0x1CE5
{
	return func_56(*Global_4718592.f_117591);
}

BOOL func_56(int iParam0) // Position - 0x1CFB
{
	int i;

	if (iParam0 == 0)
		return 0;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_262145.f_31258[i] == iParam0)
			return 1;
	}

	return 0;
}

BOOL func_57() // Position - 0x1D35
{
	return Global_2683883.f_24;
}

BOOL func_58() // Position - 0x1D43
{
	return Global_2683883.f_21;
}

BOOL func_59() // Position - 0x1D51
{
	return Global_2683883.f_19;
}

var func_60() // Position - 0x1D5F
{
	return Global_2683883.f_18;
}

var func_61() // Position - 0x1D6D
{
	return Global_2683883.f_17;
}

int func_62(int iParam0, Player plParam1, BOOL bParam2) // Position - 0x1D7B
{
	int num;
	int num2;
	int num3;

	num2 = Global_1058071.f_14[iParam0];

	if (func_49())
	{
		num3 = func_45(plParam1);
	
		if (!(num3 == -1))
			return func_43(num3);
	}

	if (num2 > -1 && num2 < 17)
		if (IS_BIT_SET(Global_4718592.f_1816[iParam0 /*24279*/].f_8104[num2], 24))
			return 18;

	if (iParam0 > -1 && plParam1 != _INVALID_PLAYER_INDEX())
	{
		if (Global_4718592.f_112316[iParam0] != -1 && Global_4718592.f_112316[iParam0] <= 4)
			if (Global_4718592.f_112316[iParam0] == 0)
				num = 15;
			else if (Global_4718592.f_112316[iParam0] == 1)
				num = 18;
			else if (Global_4718592.f_112316[iParam0] == 2)
				num = 24;
			else if (Global_4718592.f_112316[iParam0] == 4)
				if (IS_BIT_SET(Global_4718592.f_15, 29))
					num = 21;
				else
					num = 6;
			else
				num = Global_4718592.f_112316[iParam0];
		else
			num = func_26(plParam1, !bParam2, iParam0, false);
	
		if (IS_BIT_SET(Global_4718592.f_21, 13))
			num = func_63(iParam0);
	
		if (IS_BIT_SET(Global_4718592.f_24, 29))
			num = 0;
	
		if (IS_BIT_SET(Global_4718592.f_15, 26) && !func_30(iParam0, PLAYER::GET_PLAYER_TEAM(plParam1), 0, -1))
			num = func_42(true);
	}
	else
	{
		num = 1;
	}

	return num;
}

int func_63(int iParam0) // Position - 0x1EFB
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = *Global_4718592.f_171203;
			break;
	
		case 1:
			num = *Global_4718592.f_171204;
			break;
	
		case 2:
			num = *Global_4718592.f_171205;
			break;
	
		case 3:
			num = *Global_4718592.f_171206;
			break;
	}

	switch (num)
	{
		case 0:
			return 15;
	
		case 1:
			return 21;
	
		case 2:
			return 24;
	
		case 3:
			return 18;
	
		case 4:
			return 6;
	
		case 5:
			return 9;
	
		case 6:
			return 3;
	
		case 7:
			return 1;
	
		case 8:
			return 12;
	
		case 9:
			return 2;
	
		default:
		
	}

	return 2;
}

Ped func_64() // Position - 0x1FD0
{
	return Global_2621446.f_2;
}

BOOL func_65() // Position - 0x1FDE
{
	return IS_BIT_SET(Global_2621446, 4);
}

BOOL func_66() // Position - 0x1FEC
{
	return IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}

BOOL func_67(Player plParam0) // Position - 0x2006
{
	if (func_33(plParam0, 0))
		return true;

	if (func_68())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657704[plParam0 /*463*/].f_199, 2))
		return true;

	return false;
}

BOOL func_68() // Position - 0x2045
{
	return IS_BIT_SET(Global_2621446, 3);
}

BOOL func_69(Player plParam0, Player plParam1, int iParam2, int iParam3) // Position - 0x2053
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
			if (PLAYER::GET_PLAYER_TEAM(plParam0) == -1 && PLAYER::GET_PLAYER_TEAM(plParam1) == -1)
				return false;
	
		return PLAYER::GET_PLAYER_TEAM(plParam0) == PLAYER::GET_PLAYER_TEAM(plParam1);
	}
	else
	{
		if (iParam3 == 0)
			if (PLAYER::GET_PLAYER_TEAM(plParam0) == -1 && iParam2 == -1)
				return false;
	
		return PLAYER::GET_PLAYER_TEAM(plParam0) == iParam2;
	}

	return PLAYER::GET_PLAYER_TEAM(plParam0) == iParam2;
}

int func_70(int iParam0) // Position - 0x20CB
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_72())
				if (iParam0 == 5)
					iParam0 = 6;
				else
					iParam0 = 5;
			break;
	}

	return func_71(iParam0);
}

int func_71(int iParam0) // Position - 0x2105
{
	switch (iParam0)
	{
		case 10:
			return 9;
	
		case 5:
			return 8;
	
		case 6:
			return 7;
	
		case 8:
			return 6;
	
		case 7:
			return 4;
	
		case 4:
		case 11:
			return 2;
	
		case 0:
		case 2:
		case 3:
		case 9:
		case 1:
			return 1;
	}

	return 1;
}

BOOL func_72() // Position - 0x2190
{
	int playerTeam;

	playerTeam = PLAYER::GET_PLAYER_TEAM(Global_2672524);

	if (playerTeam > -1 && playerTeam < 4)
		return IS_BIT_SET(Global_4718592.f_1816[playerTeam /*24279*/].f_13040, 4);

	return false;
}

void func_73(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x21C7
{
	var unk;

	if (func_75(plParam0))
		return;

	func_74(&Global_2646835.f_723[plParam0], &Global_2646835.f_1086[plParam0], &(Global_2646835.f_393), bParam1, plParam0, bParam2, &unk);
	return;
}

BOOL func_74(var uParam0, var uParam1, int* piParam2, BOOL bParam3, Player plParam4, BOOL bParam5, var uParam6) // Position - 0x2205
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}

	if (!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!IS_BIT_SET(*piParam2, plParam4))
			{
				*uParam6 = 1;
				MISC::SET_BIT(piParam2, plParam4);
			}
		
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (IS_BIT_SET(*piParam2, plParam4))
			{
				*uParam6 = 1;
				MISC::CLEAR_BIT(piParam2, plParam4);
			}
		
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
				*uParam1 = -1;
		
			*uParam0 = -1;
		}
	
		return true;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !(*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
	}

	return false;
}

BOOL func_75(Player plParam0) // Position - 0x22C4
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return true;

	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH())
		return true;

	return false;
}

Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x22ED
{
	switch (func_78())
	{
		case 0:
			return func_77();
	
		case 2:
			return joaat("creator");
	}

	return 0;
}

Hash func_77() // Position - 0x2320
{
	switch (Global_2697098)
	{
		case 0:
			return joaat("freemode");
	
		default:
		
	}

	return joaat("freemode");
}

int func_78() // Position - 0x2344
{
	return Global_32283;
}

void func_79(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x234F
{
	var unk;

	if (func_75(plParam0))
		return;

	if (func_74(&Global_2646835.f_822[plParam0], &Global_2646835.f_1185[plParam0], &(Global_2646835.f_367), bParam1, plParam0, bParam3, &unk))
		func_80(plParam0, bParam2);

	return;
}

void func_80(Player plParam0, BOOL bParam1) // Position - 0x2397
{
	if (bParam1)
		MISC::SET_BIT(&(Global_2646835.f_368), plParam0);
	else
		MISC::CLEAR_BIT(&(Global_2646835.f_368), plParam0);

	if (HUD::DOES_BLIP_EXIST(Global_2646835[plParam0]))
		if (bParam1)
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2646835[plParam0], false);
		else
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2646835[plParam0], true);

	return;
}

BOOL func_81(Player plParam0) // Position - 0x23F2
{
	return func_82(&Global_2646835.f_822[plParam0]);
}

BOOL func_82(var uParam0) // Position - 0x2409
{
	if (SCRIPT::IS_THREAD_ACTIVE(*uParam0))
		if (!(*uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD()))
			return 0;

	return 1;
}

void func_83(Player plParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x242C
{
	var unk;

	if (func_75(plParam0))
		return;

	if (func_74(&Global_2646835.f_624[plParam0], &Global_2646835.f_987[plParam0], &(Global_2646835.f_389), bParam2, plParam0, bParam3, &unk))
		if (bParam2)
			Global_2646835.f_459[plParam0] = iParam1;

	return;
}

int func_84(eHudColour ehcParam0) // Position - 0x247E
{
	int r;
	int g;
	int b;
	var a;

	switch (ehcParam0)
	{
		case 1:
			return 4;
	
		case 0:
			return 4;
	
		case 6:
			return 59;
	
		case 18:
			return 2;
	
		case 13:
			return 5;
	
		case 116:
			return 38;
	
		case 28:
			return 6;
	
		case 29:
			return 7;
	
		case 30:
			return 8;
	
		case 31:
			return 9;
	
		case 32:
			return 10;
	
		case 33:
			return 11;
	
		case 34:
			return 12;
	
		case 35:
			return 13;
	
		case 36:
			return 14;
	
		case 37:
			return 15;
	
		case 38:
			return 16;
	
		case 39:
			return 17;
	
		case 40:
			return 18;
	
		case 41:
			return 19;
	
		case 42:
			return 20;
	
		case 43:
			return 21;
	
		case 44:
			return 22;
	
		case 45:
			return 23;
	
		case 46:
			return 24;
	
		case 47:
			return 25;
	
		case 48:
			return 26;
	
		case 49:
			return 27;
	
		case 50:
			return 28;
	
		case 51:
			return 29;
	
		case 52:
			return 30;
	
		case 53:
			return 31;
	
		case 54:
			return 32;
	
		case 55:
			return 33;
	
		case 56:
			return 34;
	
		case 57:
			return 35;
	
		case 58:
			return 36;
	
		case 59:
			return 37;
	
		case 9:
			return 57;
	
		case 10:
			return 53;
	
		case 118:
			return 57;
	
		case 14:
			return 56;
	
		case 3:
			return 55;
	
		case 21:
			return 50;
	
		case 15:
			return 51;
	
		case 20:
			return 52;
	
		case 11:
			return 54;
	
		case 23:
			return 58;
	
		case 12:
			return 60;
	
		case 24:
			return 61;
	
		case 4:
			return 62;
	
		default:
		
	}

	HUD::GET_HUD_COLOUR(ehcParam0, &r, &g, &b, &a);
	return (r * 16777216) + (g * 65536) + (b * 256) + a;
}

int func_85(Player plParam0) // Position - 0x26E6
{
	int num;

	num = func_45(plParam0);

	if (num != -1)
		return func_43(num);

	return 1;
}

BOOL func_86(Player plParam0) // Position - 0x2706
{
	return func_82(&Global_2646835.f_624[plParam0]);
}

void func_87(Player plParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x271D
{
	BOOL flag;

	if (func_75(plParam0))
		return;

	if (func_74(&Global_2646835.f_591[plParam0], &Global_2646835.f_954[plParam0], &(Global_2646835.f_388), bParam2, plParam0, bParam3, &flag))
	{
		if (bParam2)
			Global_2646835.f_426[plParam0] = iParam1;
	
		if (flag)
			func_88();
	}

	return;
}

void func_88() // Position - 0x2778
{
	Global_2646835.f_1655 = 1;
	return;
}

void func_89() // Position - 0x2788
{
	func_2(Global_2794162.f_5231.f_754);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x27A2
{
	if (Global_1575038 == 0)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return true;

	if (func_94())
		return true;

	if (Global_2696994)
		return true;

	if (func_93())
		return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(159))
		if (!func_91())
			return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(157))
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	if (_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() != 0)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH()) == 0)
			return true;

	return false;
}

BOOL func_91() // Position - 0x2826
{
	return Global_2683883.f_698;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x2835
{
	if (SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0))
		return true;

	return false;
}

BOOL func_93() // Position - 0x284C
{
	return Global_2694576;
}

BOOL func_94() // Position - 0x2858
{
	return Global_2683883.f_693;
}

void func_95() // Position - 0x2867
{
	SYSTEM::WAIT(0);
	return;
}

int func_96() // Position - 0x2874
{
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	return 1;
}

