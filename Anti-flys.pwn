//...:::[Crea un timer para cada jugador que se conecte y dentro del callback de ese timer pones este codigo]:::...

//===========================[Anti-Cheat Fly]===========================
new Float:animX, Float:animY, Float:animZ;
new anim = GetPlayerAnimationIndex(playerid);
GetPlayerPos(playerid, animX, animY, animZ);
if((anim >= 1538) && (anim <= 1542) && animZ > 5)
{
	new string[250];
	format(string, sizeof(string), "{FF6347}[~Shinigami~]{FFFFFF} expulso del servidor a {FF6347}%s{FFFFFF} por uso de Fly Hack", l[playerid][pName]);
	SendClientMessageToAll(COLOR_WHITE, string);
	SetTimerEx("PlayerKick",500,false,"d", playerid);
}
//==========================[Anti-Cheat Fly 2]==========================
new Float:Pos_x,Float:Pos_y,Float:Pos_z;
new anim2 = GetPlayerAnimationIndex(playerid);
GetPlayerVelocity(playerid,Pos_x,Pos_y,Pos_z);
if((Pos_x <= -0.800000  || Pos_y <= -0.800000 || Pos_z <= -0.800000) && anim2 == 959)
{
	new string[250];
	format(string, sizeof(string), "{FF6347}[~Shinigami~]{FFFFFF} expulso del servidor a {FF6347}%s{FFFFFF} por uso de Fly Hack", l[playerid][pName]);
	SendClientMessageToAll(COLOR_WHITE, string);
	SetTimerEx("PlayerKick",500,false,"d", playerid);
}
//=====================[Anti-Cheat Escoba Voladora]=====================
if(GetPlayerAnimationIndex(playerid) == 1058)
{
	new string[250];
	format(string, sizeof(string), "{FF6347}[~Shinigami~]{FFFFFF} expulso del servidor a {FF6347}%s{FFFFFF} por uso de Escoba Voladora", l[playerid][pName]);
	SendClientMessageToAll(COLOR_WHITE, string);
	SetTimerEx("PlayerKick",500,false,"d", playerid);
}