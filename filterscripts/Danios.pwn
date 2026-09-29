#include <a_samp>
#include <fader>
#include <foreach>
#include <sscanf2>
#include <zcmd>

new Fuerza[MAX_PLAYERS];

public OnFilterScriptInit()
{
	foreach(new i: Player)
	{
	    SetPlayerTeam(i, 1);
 	}
	return 1;
}

public OnFilterScriptExit()
{
    foreach(new i: Player)
	{
	    SetPlayerTeam(i, -1);
 	}
 	Seifader_OnExit();
	return 1;
}

public OnPlayerConnect(playerid)
{
	SetPlayerTeam(playerid, 1);
	Fuerza[playerid] = 1;
	return 1;
}

public OnPlayerTakeDamage(playerid, issuerid, Float: amount, weaponid, bodypart)
{
    new Float:danio, Float:vida, Float:chaleco, string[256];
    new fuerza = Fuerza[issuerid];
    	if(amount == 2.64)
		{
		    if(GetPlayerWeapon(issuerid) > 21 && GetPlayerWeapon(issuerid) < 34)
		    {
		        switch(fuerza)
			    {
				    case 0..10: danio = 11.5;
		      		case 11..20: danio = 12.0;
		        	case 21..30: danio = 12.5;
	          		case 31..40: danio = 13.0;
	            	case 41..50: danio = 13.5;
		            case 51..60: danio = 14.0;
				    case 61..70: danio = 14.5;
	       			case 71..80: danio = 15.0;
	          		case 81..90: danio = 15.5;
	            	case 91..100: danio = 50.0;
	            }
		    }
		}
        else
		{
            if(weaponid >= 0 && weaponid < 16)
			{
	            switch(weaponid)
				{
					case 0:
					{
         				switch(bodypart)
					 	{
					 	    case 3:
					 	    {
								switch(fuerza)
								{
					               	case 0..10: danio = 3.0;
					                case 11..20: danio = 3.5;
					                case 21..30: danio = 4.0;
					                case 31..40: danio = 4.5;
					                case 41..50: danio = 5.0;
					                case 51..60: danio = 5.5;
					                case 61..70: danio = 6.0;
					                case 71..80: danio = 6.5;
					                case 81..90: danio = 7.0;
					                case 91..100: danio = 7.5;
								}
                            }
                            case 4:
					 	    {
								switch(fuerza)
								{
					               	case 0..10: danio = 4.5;
					                case 11..20: danio = 5.0;
					                case 21..30: danio = 5.5;
					                case 31..40: danio = 6.0;
					                case 41..50: danio = 6.5;
					                case 51..60: danio = 7.0;
					                case 61..70: danio = 7.5;
					                case 71..80: danio = 8.0;
					                case 81..90: danio = 8.5;
					                case 91..100: danio = 9.0;
								}
                            }
                            case 5..8:
					 	    {
								switch(fuerza)
								{
					               	case 0..10: danio = 2.0;
					                case 11..20: danio = 2.5;
					                case 21..30: danio = 3.0;
					                case 31..40: danio = 3.5;
					                case 41..50: danio = 4.0;
					                case 51..60: danio = 4.5;
					                case 61..70: danio = 5.0;
					                case 71..80: danio = 5.5;
					                case 81..90: danio = 6.0;
					                case 91..100: danio = 6.5;
								}
                            }
					 	    case 9:
					 	    {
								switch(fuerza)
								{
					               	case 0..10: danio = 100.0;
					                case 11..20: danio = 100.0;
					                case 21..30: danio = 100.0;
					                case 31..40: danio = 100.0;
					                case 41..50: danio = 100.0;
					                case 51..60: danio = 100.0;
					                case 61..70: danio = 100.0;
					                case 71..80: danio = 100.0;
					                case 81..90: danio = 100.0;
					                case 91..100: danio = 100.0;
								}
                            }
						}
					}
				 	case 1:
				 	{
				 	    switch(bodypart)
					 	{
					 	    case 3:
					 	    {
								switch(fuerza)
								{
					               	case 0..10: danio = 4.0;
					                case 11..20: danio = 4.5;
					                case 21..30: danio = 5.0;
					                case 31..40: danio = 5.5;
					                case 41..50: danio = 6.0;
					                case 51..60: danio = 6.5;
					                case 61..70: danio = 7.0;
					                case 71..80: danio = 7.5;
					                case 81..90: danio = 8.0;
					                case 91..100: danio = 8.5;
								}
                            }
                            case 4:
					 	    {
								switch(fuerza)
								{
					               	case 0..10: danio = 5.5;
					                case 11..20: danio = 6.0;
					                case 21..30: danio = 6.5;
					                case 31..40: danio = 7.0;
					                case 41..50: danio = 7.5;
					                case 51..60: danio = 8.0;
					                case 61..70: danio = 8.5;
					                case 71..80: danio = 9.0;
					                case 81..90: danio = 9.5;
					                case 91..100: danio = 10.0;
								}
                            }
                            case 5..8:
					 	    {
								switch(fuerza)
								{
					               	case 0..10: danio = 3.0;
					                case 11..20: danio = 3.5;
					                case 21..30: danio = 4.0;
					                case 31..40: danio = 4.5;
					                case 41..50: danio = 5.0;
					                case 51..60: danio = 5.5;
					                case 61..70: danio = 6.0;
					                case 71..80: danio = 6.5;
					                case 81..90: danio = 7.0;
					                case 91..100: danio = 7.5;
								}
                            }
					 	    case 9:
					 	    {
								switch(fuerza)
								{
					               	case 0..10: danio = 5.0;
					                case 11..20: danio = 5.5;
					                case 21..30: danio = 6.0;
					                case 31..40: danio = 6.5;
					                case 41..50: danio = 7.0;
					                case 51..60: danio = 7.5;
					                case 61..70: danio = 8.0;
					                case 71..80: danio = 8.5;
					                case 81..90: danio = 9.0;
					                case 91..100: danio = 9.5;
								}
                            }
						}
					}
				 	case 2,3,5,6,7,15:
				 	{
				 	    switch(bodypart)
					 	{
					 	    case 3:
					 	    {
								switch(fuerza)
								{
					               	case 0..10: danio = 6.0;
					                case 11..20: danio = 6.5;
					                case 21..30: danio = 7.0;
					                case 31..40: danio = 7.5;
					                case 41..50: danio = 8.0;
					                case 51..60: danio = 8.5;
					                case 61..70: danio = 9.0;
					                case 71..80: danio = 9.5;
					                case 81..90: danio = 10.0;
					                case 91..100: danio = 10.5;
								}
                            }
                            case 4:
					 	    {
								switch(fuerza)
								{
					               	case 0..10: danio = 10.5;
					                case 11..20: danio = 11.0;
					                case 21..30: danio = 11.5;
					                case 31..40: danio = 12.0;
					                case 41..50: danio = 12.5;
					                case 51..60: danio = 13.0;
					                case 61..70: danio = 13.5;
					                case 71..80: danio = 14.0;
					                case 81..90: danio = 14.5;
					                case 91..100: danio = 15.0;
								}
                            }
                            case 5..8:
					 	    {
								switch(fuerza)
								{
					               	case 0..10: danio = 5.0;
					                case 11..20: danio = 5.5;
					                case 21..30: danio = 6.0;
					                case 31..40: danio = 6.5;
					                case 41..50: danio = 7.0;
					                case 51..60: danio = 7.5;
					                case 61..70: danio = 8.0;
					                case 71..80: danio = 8.5;
					                case 81..90: danio = 9.0;
					                case 91..100: danio = 9.5;
								}
                            }
					 	    case 9:
					 	    {
								switch(fuerza)
								{
					               	case 0..10: danio = 10.0;
					                case 11..20: danio = 10.5;
					                case 21..30: danio = 11.0;
					                case 31..40: danio = 11.5;
					                case 41..50: danio = 12.0;
					                case 51..60: danio = 12.5;
					                case 61..70: danio = 13.0;
					                case 71..80: danio = 13.5;
					                case 81..90: danio = 14.0;
					                case 91..100: danio = 14.5;
								}
                            }
						}
					}
				 	case 4:
				 	{
				 	    switch(bodypart)
					 	{
					 	    case 3,4: danio = 40.0;
					 	    case 5,6: danio = 30.0;
					 	    case 7,8: danio = 30.0;
					 	    case 9: danio = 200.0;
						}
					}
				 	case 8:
				 	{
				 	    switch(bodypart)
					 	{
					 	    case 3,4:
					 	    {
								switch(fuerza)
								{
					               	case 0..10: danio = 15.0;
					                case 11..20: danio = 15.5;
					                case 21..30: danio = 16.0;
					                case 31..40: danio = 16.5;
					                case 41..50: danio = 17.0;
					                case 51..60: danio = 17.5;
					                case 61..70: danio = 18.0;
					                case 71..80: danio = 18.5;
					                case 81..90: danio = 19.0;
					                case 91..100: danio = 19.5;
								}
                            }
                            case 5..8:
					 	    {
								switch(fuerza)
								{
					               	case 0..10: danio = 12.0;
					                case 11..20: danio = 12.5;
					                case 21..30: danio = 13.0;
					                case 31..40: danio = 13.5;
					                case 41..50: danio = 14.0;
					                case 51..60: danio = 14.5;
					                case 61..70: danio = 15.0;
					                case 71..80: danio = 15.5;
					                case 81..90: danio = 16.0;
					                case 91..100: danio = 16.5;
								}
                            }
					 	    case 9: danio = 200;
						}
					}
					default: danio = amount;
			 	}
			 	format(string, sizeof(string), "Daño que has recibido por el golpe/corte: %f | Fuerza del agresor: %d", danio, fuerza);
				SendClientMessage(playerid, -1, string);
				format(string, sizeof(string), "Daño que has efectuado con el golpe/corte: %f", danio);
				SendClientMessage(issuerid, -1, string);
            }
	        if(weaponid > 21 && weaponid < 52)
			{
         		switch(weaponid)
			 	{
				    case 22,23:
					{
					    switch(bodypart)
					 	{
							case 3,4: danio = 45.0;
							case 5..8: danio = 20.0;
							case 9: danio = 200.0;
						}
		    		}
                    case 24:
				 	{
					    switch(bodypart)
					 	{
							case 3,4: danio = 70.0;
							case 5,6: danio = 35.0;
							case 7,8:{
							 danio = 45.0;
                             ApplyAnimation(playerid, "PED", "WALK_fatold", 4.1, 1, 1, 1, 0, 0, 1);
							 }
							case 9:{
								danio = 1.0;
								SetPVarInt(playerid, "Injured", 1);
								SetPlayerHealth(playerid, 20);
								ApplyAnimation(playerid, "WUZI", "CS_Dead_Guy", 4.0, 0, 1, 1, 1, 0, 1);
								SendClientMessage(playerid, -1, "Fuiste gravemente herido. Serás enviado al hospital en 5 minutos.");
								//TogglePlayerControllable(playerid, 0);
							} 
						}
                    }

                    /*
						foreach(Player, i){
				if(Info[playerid][pAdminDRP] >= 1){
					SendDeathMessageToPlayer(i, killerid, playerid, reason);
				}
			}
                    */
       				case 25..27:
			   		{
		 	    		switch(bodypart)
					 	{
							case 3,4: danio = 90.0;
							case 5..8: danio = 50.0;
							case 9: danio = 200.0;
						}
				 	}
     				case 28,32:
				  	{
					    switch(bodypart)
					 	{
							case 3,4: danio = 60.0;
							case 5..8: danio = 20.0;
							case 9: danio = 500.0;
						}
                    }
		          	case 29:
				  	{
					    switch(bodypart)
					 	{
							case 3,4: danio = 55.0;
							case 5..8: danio = 30.0;
							case 9: danio = 200.0;
						}
                    }
	         		case 30:
				 	{
         				switch(bodypart)
					 	{
							case 3,4: danio = 65.0;
							case 5..8: danio = 40.0;
							case 9: danio = 200.0;
						}
                    }
		         	case 31:
				 	{
					    switch(bodypart)
					 	{
							case 3,4: danio = 60.0;
							case 5..8: danio = 45.0;
							case 9: danio = 200.0;
						}
                    }
		         	case 33:
				 	{
					    switch(bodypart)
					 	{
							case 3,4: danio = 80.0;
							case 5..8: danio = 40.0;
							case 9: danio = 200.0;
						}
                    }
		         	case 34:
				 	{
					    switch(bodypart)
					 	{
							case 3,4: danio = 100.0;
							case 5..8: danio = 60.0;
							case 9: danio = 200.0;
						}
                    }
                    default: danio = amount;
           		}
           		format(string, sizeof(string), "Daño que has recibido por disparo: %f", danio);
				SendClientMessage(playerid, -1, string);
				format(string, sizeof(string), "Daño que has efectuado con el disparo: %f", danio);
				SendClientMessage(issuerid, -1, string);
			}
		}
		GetPlayerHealth(playerid, vida);
      	GetPlayerArmour(playerid, chaleco);
       	if(chaleco)
  		{
        	if(chaleco > danio) SetPlayerArmour(playerid, chaleco-danio);
         	else
	 		{
          		SetPlayerArmour(playerid, 0.0);
            	chaleco = danio-chaleco;
             	if(chaleco >= vida) SetPlayerHealth(playerid, 0.0);
              	else SetPlayerHealth(playerid, vida-chaleco);
            }
        }
        else
        {
        	if(vida > danio) SetPlayerHealth(playerid, vida-danio);
        	if(vida <= 15 && GetPVarInt(playerid, "Injured") != 1){
		 		SetPlayerHealth(playerid, 15);
		 		JugadorHerido(playerid);
		 	}
		 	else if(vida <= 15 && GetPVarInt(playerid, "Injured") == 1){
		 		SetPlayerHealth(playerid, 15);
		 	}
        	else SetPlayerHealth(playerid, 1.0);
        }
    return 1;
}

stock Nombre(playerid)
{
    new nombre[32];
    GetPlayerName(playerid, nombre, 32);
    return nombre;
}

stock JugadorHerido(playerid){
	SetPlayerHealth(playerid, 90);
	SetPVarInt(playerid, "Injured", 1);
	ApplyAnimation(playerid, "WUZI", "CS_Dead_Guy", 4.0, 0, 1, 1, 1, 0, 1);
	SendClientMessage(playerid, -1, "Fuiste gravemente herido. Serás enviado al hospital en 5 minutos.");
	TogglePlayerControllable(playerid, 0);
}

COMMAND:darfuerza(playerid, params[])
{
	if(!sscanf(params, "ui", params[0], params[1]))
	{
 		if(params[0] != INVALID_PLAYER_ID)
 		{
 		    if(params[1] < 0 || params[1] > 100) return SendClientMessage(playerid, -1, "[ERROR] Sólo puedes dar entre 1 y 100 de fuerza.");
  			Fuerza[params[0]] = params[1];
  			new string[128];
			format(string, sizeof(string), "%s te ha dado %d de fuerza.", Nombre(playerid), params[1]);
			SendClientMessage(params[0], -1, string);
    	}
		else SendClientMessage(playerid, -1, "[ERROR] El jugador seleccionado no se encuentra conectado.");
	}
	else SendClientMessage(playerid, -1, "[USO] '/darfuerza' [ID Jugador] [Fuerza 1-100]");
  	return 1;
}

COMMAND:fuerza(playerid, params[])
{
	new string[128];
	format(string, sizeof(string), "Tienes %d de fuerza.", Fuerza[playerid]);
	SendClientMessage(playerid, -1, string);
  	return 1;
}
