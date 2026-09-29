// SpooflessDialogs - SA-MP Dialog Anti-Spoof
// Made by Nixtren (https://github.com/Nixtren)
// Licensed under the MIT License

/*
These #include attempts don't work well for whatever reason
#if !defined Hook_ReplaceNative
#include <nhooks>
#endif
*/

//#if !defined _INC_y_hooks
//#error Please #include <YSI\y_hooks> first
//#endif
#include <YSI\y_hooks>
//#if !defined Hook_ReplaceNative
//#error Please #include <nhooks> first
//#endif

#if !defined FILTERSCRIPT
    hook OnDialogResponse(playerid, dialogid, response, listitem, inputtext[])
    {
        new SpooflessDialogs_dialogid = GetPVarInt(playerid, "SpooflessDialogs_dialogid");
        if (dialogid != SpooflessDialogs_dialogid)
        {
            printf("[SpooflessDialogs] Player %i spoofed a dialog, server sent ID %i and received %i", playerid, SpooflessDialogs_dialogid, dialogid);
            if (!CallRemoteFunction("OnDialogSpoof", "iiii", playerid, dialogid, SpooflessDialogs_dialogid)) return -2; // Halt script execution if OnDialogSpoof is not found or returns 0
        }
        SetPVarInt(playerid, "SpooflessDialogs_dialogid", -2);
        return 1;
    }
#endif

hook SD_ShowPlayerDialog(playerid, dialogid, style, caption[], info[], button1[], button2[])
{
    SetPVarInt(playerid, "SpooflessDialogs_dialogid", dialogid);
    ShowPlayerDialog(playerid, dialogid, style, caption, info, button1, button2);
}