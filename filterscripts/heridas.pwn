#include <a_samp>
#include <sscanf2>

#define HOLDING(%0) ((newkeys & (%0)) == (%0))
#define RELEASED(%0) (((newkeys & (%0)) != (%0)) && ((oldkeys & (%0)) == (%0)))

new check_timer[MAX_PLAYERS];

// Injured cripple walk (if shot in legs)

public OnPlayerKeyStateChange(playerid, newkeys, oldkeys)
{
	if(newkeys & KEY_JUMP && !(oldkeys & KEY_JUMP))
	{
	    if(GetPVarInt(playerid, "InjuredWalkstyle") == 1)
	    {
			ApplyAnimation(playerid, "GYMNASIUM", "gym_jog_falloff", 4.1, 0, 1, 1, 0, 0);
		}
	}

	if(HOLDING(KEY_WALK) || HOLDING(KEY_SPRINT))
	{
		if(GetPVarInt(playerid, "InjuredWalkstyle") == 1 || IsPlayerRunning(playerid))
		{
      		ApplyAnimation(playerid, "PED", "WALK_old", 4.1, 1, 1, 1, 0, 0);
		}
	}

	else if(RELEASED(KEY_WALK) || RELEASED(KEY_SPRINT))
	{
		if(GetPVarInt(playerid, "InjuredWalkstyle") == 1)
		{
		    ClearAnimations(playerid);
		}
	}

	return true;
}

public OnPlayerTakeDamage(playerid, issuerid, Float:amount, weaponid, bodypart)
{
	if(bodypart == 7 || bodypart == 8 || IsPlayerFalling(playerid) && amount > 6.0)
	{
	    SetPVarInt(playerid, "InjuredWalkstyle", 1);
	    SendClientMessage(playerid, -1, "Your legs have been injured!");

		check_timer[playerid] = SetTimerEx("RunnerCheck", 500, true, "i", playerid);
	}

	printf("Damage taken; %f - bodypart: %d", amount, bodypart);

	return true;
}

stock IsPlayerRunning(playerid)
{
    new ai = GetPlayerAnimationIndex(playerid);
    
    if(ai == 1231) return true;

    return false;
}

stock IsPlayerFalling(playerid)
{
    new index = GetPlayerAnimationIndex(playerid);

    if(index >= 958 && index <= 979 || index == 1130 || index == 1195 || index == 1132) return true;

    return false;
}

forward RunnerCheck(playerid);
public RunnerCheck(playerid)
{
	if(IsPlayerRunning(playerid))
	{
		if(GetPVarInt(playerid, "InjuredWalked") < 3)
		{
			SetPVarInt(playerid, "InjuredWalked", GetPVarInt(playerid, "InjuredWalked") +1);
			ApplyAnimation(playerid, "PED", "WALK_old", 4.1, 0, 1, 1, 0, 0);
		}
		
		else if(GetPVarInt(playerid, "InjuredWalked") >= 3)
		{
			SetPVarInt(playerid, "InjuredWalked", 0);
			ApplyAnimation(playerid, "GYMNASIUM", "gym_jog_falloff", 4.1, 0, 1, 1, 0, 0);
		}
	}

	return true;
}