#include <a_samp>
new Danos[15][46];
stock SDanos()
{
Danos[3][22]=60;//Torso - 9mm
Danos[4][22]=20;//Ingle - 9mm
Danos[5][22]=10;//Brazo Izquierdo - 9mm
Danos[6][22]=10;//Brazo Derecho - 9mm
Danos[7][22]=20;//Pierna Izquierda - 9mm
Danos[8][22]=20;//Pierna Derecha - 9mm
Danos[9][22]=300;//Cabeza - Mata de 1 - 9mm

Danos[3][23]=60;//Torso - 9mm silenciada
Danos[4][23]=20;//Ingle - 9mm silenciada
Danos[5][23]=10;//Brazo Izquierdo - 9mm silenciada
Danos[6][23]=10;//Brazo Derecho - 9mm silenciada
Danos[7][23]=20;//Pierna Izquierda - 9mm silenciada
Danos[8][23]=20;//Pierna Derecha - 9mm silenciada
Danos[9][23]=300;//Cabeza - Mata de 1 - 9mm silenciada

Danos[3][24]=80;//Torso - desert eagle
Danos[4][24]=40;//Ingle - desert eagle
Danos[5][24]=30;//Brazo Izquierdo - desert eagle
Danos[6][24]=30;//Brazo Derecho - desert eagle
Danos[7][24]=40;//Pierna Izquierda - desert eagle
Danos[8][24]=40;//Pierna Derecha - desert eagle
Danos[9][24]=300;//Cabeza - Mata de 1 - desert eagle

Danos[3][25]=90;//Torso - escopeta normal
Danos[4][25]=50;//Ingle - escopeta normal
Danos[5][25]=40;//Brazo Izquierdo - escopeta normal
Danos[6][25]=40;//Brazo Derecho - escopeta normal
Danos[7][25]=50;//Pierna Izquierda - escopeta normal
Danos[8][25]=50;//Pierna Derecha - escopeta normal
Danos[9][25]=300;//Cabeza - Mata de 1 - escopeta normal

Danos[3][27]=90;//Torso - escopeta de combate
Danos[4][27]=50;//Ingle - escopeta de combate
Danos[5][27]=40;//Brazo Izquierdo - escopeta de combate
Danos[6][27]=40;//Brazo Derecho - escopeta de combate
Danos[7][27]=50;//Pierna Izquierda - escopeta de combate
Danos[8][27]=50;//Pierna Derecha - escopeta de combate
Danos[9][27]=300;//Cabeza - Mata de 1 - escopeta de combate

Danos[3][27]=50;//Torso - mp5
Danos[4][29]=30;//Ingle - mp5
Danos[5][29]=20;//Brazo Izquierdo - mp5
Danos[6][29]=20;//Brazo Derecho - mp5
Danos[7][29]=30;//Pierna Izquierda - mp5
Danos[8][29]=30;//Pierna Derecha - mp5
Danos[9][29]=300;//Cabeza - Mata de 1 - mp5

Danos[3][30]=60;//Torso - ak47
Danos[4][30]=40;//Ingle - ak47
Danos[5][30]=30;//Brazo Izquierdo - ak47
Danos[6][30]=30;//Brazo Derecho - ak47
Danos[7][30]=40;//Pierna Izquierda - ak47
Danos[8][30]=40;//Pierna Derecha - ak47
Danos[9][30]=300;//Cabeza - Mata de 1 - ak47

Danos[3][31]=60;//Torso - m4
Danos[4][31]=40;//Ingle - m4
Danos[5][31]=30;//Brazo Izquierdo - m4
Danos[6][31]=30;//Brazo Derecho - m4
Danos[7][31]=40;//Pierna Izquierda - m4
Danos[8][31]=40;//Pierna Derecha - m4
Danos[9][31]=300;//Cabeza - Mata de 1 - m4

Danos[3][33]=60;//Torso - m4
Danos[4][33]=50;//Ingle - rifle de caza
Danos[5][33]=30;//Brazo Izquierdo - rifle de caza
Danos[6][33]=30;//Brazo Derecho - rifle de caza
Danos[7][33]=40;//Pierna Izquierda - rifle de caza
Danos[8][33]=40;//Pierna Derecha - rifle de caza
Danos[9][33]=300;//Cabeza - Mata de 1 - rifle de caza

Danos[4][34]=99;//Ingle - sniper
Danos[5][34]=70;//Brazo Izquierdo - sniper
Danos[6][34]=70;//Brazo Derecho - sniper
Danos[7][34]=80;//Pierna Izquierda - sniper
Danos[8][34]=80;//Pierna Derecha - sniper
Danos[9][34]=500;//Cabeza - Mata de 1 - sniper

//Danos[3][IDARMA]=Daño;//Torso - NombreArma
//Danos[4][IDARMA]=Daño;//Ingle - NombreArma
//Danos[5][IDARMA]=Daño;//Brazo Izquierdo - NombreArma
//Danos[6][IDARMA]=Daño;//Brazo Derecho - sniper
//Danos[7][IDARMA]=Daño;//Pierna Izquierda - NombreArma
//Danos[8][IDARMA]=Daño;//Pierna Derecha - NombreArma
//Danos[9][IDARMA]=Daño"300";//Cabeza - Mata de 1 - NombreArma
}
public OnFilterScriptInit()
{
	print("Sistema de daños - Tusso4");
	SDanos();
	return 1;
}

public OnFilterScriptExit()
{
	return 1;
}
public OnPlayerGiveDamage(playerid, damagedid, Float:amount, weaponid, bodypart)
{
	new Float:Health, Float:Armour;
	GetPlayerArmour(damagedid, Armour);
	GetPlayerHealth(damagedid, Health);
	if(Armour==0){SetPlayerHealth(damagedid, Health-Danos[bodypart][weaponid]);return 1;}
	if(Armour>0 && Armour<Danos[bodypart][weaponid]){SetPlayerArmour(damagedid, 0);SetPlayerHealth(damagedid, Health-Danos[bodypart][weaponid]/2);return 1;}
    return 1;
}
