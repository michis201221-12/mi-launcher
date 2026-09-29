/*

	Sistema de acentos. Por MrDave ||Modificado por Sean Jhonson

*/

#include <a_samp>
#include <zcmd>


#define DIALOG_ACENTO 0
#define NO_ACENTO -1
#define 			COLOR_GREY 					0xAFAFAFAA

new Acento[MAX_PLAYERS];

public OnPlayerConnect(playerid)
{
Acento[playerid] = NO_ACENTO;
return 1;
}

public OnPlayerText(playerid, text[])
{
	new chat[128], name[24];
	GetPlayerName(playerid, name, sizeof(name));

	if(!(Acento[playerid] <= -1))
	{
		format(chat, sizeof(chat), "{f0ff04}[Acento %s] {FFFFFF}%s dice: %s" , GetNameAccent(playerid), name, text);
		ProxDetector(playerid, 2.0, 0xFFFFFFAA, chat);
		return 0;
	}
	else
	{
		format(chat, sizeof(chat), "%s dice: %s" , name, text);
		ProxDetector(playerid, 2.0, 0xFFFFFFAA, chat);
		return 0;
	}
}

public OnDialogResponse(playerid, dialogid, response, listitem)
{
switch(dialogid)
{
case DIALOG_ACENTO:
{
if(!(response != 0)) return GameTextForPlayer(playerid, "DIALOGO CERRADO", 5000, 3);
if(!(listitem <= 0 && listitem >= 19))
{
Acento[playerid] = listitem;
new texto1[128];
format(texto1, sizeof(texto1), "Ahora tu acento es {f0ff04}%s, {FFFFFF}usa {f0ff04}/acento {FFFFFF}para cambiarlo.", GetNameAccent(playerid));
SendClientMessage(playerid,-1, texto1);
}
}
}
return 1;
}

GetNameAccent(playerid)
{
new NameAccent[18][15] = {{"Argentino"},{"Venezolano"},{"Ecuatoriano"},{"Peruano"},{"Ruso"},{"Mexicano"},{"Español"},{"Colombiano"},{"Boliviano"},{"Chileno"},{"Ganster"},{"Brasileño"},{"Árabe"},{"Costarricense"},{"Dominicano"},{"Israeli"},{"Guatemalteco"},{"Americano"}};
return NameAccent[Acento[playerid]];
}

ProxDetector(playerid, Float:distance, color, string[])
{
new Float:vX, Float:vY, Float: vZ;
GetPlayerPos(playerid, vX, vY, vZ);
for(new userid = GetPlayerPoolSize(); userid > -1; userid--)
{
if(!((IsPlayerConnected(userid) == 1) && (IsPlayerInRangeOfPoint(userid, distance, vX, vY, vZ) == 1)))continue;
SendClientMessage(userid, color, string);
}
}

CMD:acento(playerid)
{
ShowPlayerDialog(playerid, DIALOG_ACENTO, DIALOG_STYLE_LIST, "{f0ff04}Acentos Disponibles","Venezolano\nArgentino\nEcuatoriano\nPeruano\nRuso\nMexicano\nEspañol\nColombiano\nBoliviano\nChileno\nGangster\nBrasileño\nÁrabe\nCostarricense\nDominicano\nIsraeli\nGuatemalteco\nHippie", "Aceptar", "");
PlayerPlaySound(playerid,1139,0,0,0);
return 1;
}
CMD:noacento(playerid)
{
	Acento[playerid] = -1;
	SendClientMessage(playerid, COLOR_GREY,"* Para volver a usar /acento debes de reloguear");
	return 1;
}

