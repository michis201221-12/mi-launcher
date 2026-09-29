#include <a_samp>
#if defined FILTERSCRIPT
#endif

//Definicion Coche NPC
new npcoche;
//Conecta NPC al SV
public OnFilterScriptInit()
{
    ConnectNPC("Carlos_Maquinista","Train");
	return 1;
}
public OnGameModeInit()
{
    npcoche = AddStaticVehicle(538, -1943.0624, 158.9263, 25.7186, 358.2109, 1, 252);
	return 1;
}
public OnPlayerRequestClass(playerid, classid)
{
    if (IsPlayerNPC(playerid))
    {
    SpawnPlayer(playerid);
    }
    return 1;
}

public OnPlayerSpawn(playerid)
{
    if(IsPlayerNPC(playerid))
{
new nombre[24]; 
GetPlayerName(playerid, nombre, sizeof(nombre)); 
if(!strcmp(nombre, "Carlos_Maquinista", true)) //No olvidar que el "_" es solo para servidores rp.
{
PutPlayerInVehicle(playerid, npcoche, 0); //Aqui lo que haremos sera subir nuestr npc a el asiento 0 que es el del conductor.
return 1;
}
}
	return 1;
}