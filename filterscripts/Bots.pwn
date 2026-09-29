#include <a_samp>
#if defined FILTERSCRIPT //esto es para que se defina como FILTERSCRIPT
#endif
public OnFilterScriptInit()
{
ConnectNPC("Andres_Sanchez","guardia"); //Esto es para que se conecte al GM el NPC cambien los nombres
ConnectNPC("Andres_Sanchez","guardia"); //Lo mismo de arriba en este
return 1;
}

public OnPlayerRequestClass(playerid, classid) //Esto lo dejamos como esta
{
   if(IsPlayerNPC(playerid))
   {
   SpawnPlayer(playerid);
   }
}

public OnPlayerSpawn(playerid)
{
if(IsPlayerNPC(playerid))
{
new npcname[24];
GetPlayerName(playerid,npcname,sizeof(npcname));
if(!strcmp(npcname,"Andres_Sanchez",true)) //Aqui cambien el nombre por el de su NPC
{
SetPlayerSkin(playerid,71); //Aqui pueden cambiarle el SKIN
}
if(!strcmp(npcname, "Andres_Sanchez",true))
{
SetPlayerSkin(playerid,71);
}
ShowPlayerMarkers(0); } //Esto es para que no se cree un icono en el mapa
return 1;
}
public OnPlayerConnect(playerid) //Esto es para que se conecte el NPC
{
if(IsPlayerNPC(playerid))return 1;
return 1;
}
