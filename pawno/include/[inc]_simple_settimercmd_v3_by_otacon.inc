/*
             Prohibido TOTALMENTE el Robo de Créditos o la
              Publicación de este INCLUDE sin Mi Permiso.

	SIMPLE INCLUDE --> SetTimerCMD V3
	CREDITOS: OTACON ;)
	NOTA: Menos Creditos para los que me los critican.. JO'PUTAS! :D xD ;)
*/

// ========== [ -|- FUNCION -|- ] ==========
#define MAX_SLOTS (100) //El maximo de contadores que se podran crear.
#define SetTimerCMD(%0,%1,%2) TiempoEspera[%0][%1]=gettime()+%2 //Para Establecer el Tiempo que se debe esperar entre segundos para utilizar la funcion correspondiente.
#define GetTimerCMD(%0,%1) TiempoEspera[%0][%1]>gettime() //Para Chequear si un contador esta activo.
#define GetSegTimetCMD(%0,%1) TiempoEspera[%0][%1]-gettime() //Para Chequear Los Segundos que debe esperar para utilizar La Funcion correspondiente. [NOTA]: Utilizar con format.
new TiempoEspera[MAX_PLAYERS][MAX_SLOTS];
// ========== [ -|- FUNCION -|- ] ==========
/*
	//EJEMPLO 1:
	COMMAND:test1(playerid, params[]) {
		if(GetTimerCMD(playerid,0)) {
		  new str[128];
		  format(str, sizeof(str), "[TEST 1] Debes Esperar %d Segundos Para Volver a Utilizar La funcion!.", GetSegTimetCMD(playerid,0));
		  return SendClientMessage(playerid, -1, str);
		}
	    SetTimerCMD(playerid,0,15);
	    SendClientMessage(playerid, -1, "[TEST 1] Comando Funciona");
	    //TU FUNCION...
	    //TU FUNCION...
		return true;
	}

	//EJEMPLO 2:
	COMMAND:test2(playerid, params[]) {
		if(GetTimerCMD(playerid,1)) {
		  new str[128];
		  format(str, sizeof(str), "[TEST 2] Debes Esperar %d Segundos Para Volver a Utilizar La funcion!.", GetSegTimetCMD(playerid,1));
		  return SendClientMessage(playerid, -1, str);
		}
	    SetTimerCMD(playerid,1,30);
	    SendClientMessage(playerid, -1, "[TEST 2] Comando Funciona");
	    //TU FUNCION...
	    //TU FUNCION...
		return true;
	}

	//EJEMPLO 3:
	COMMAND:test3(playerid, params[]) {
		if(GetTimerCMD(playerid,2)) {
		  new str[128];
		  format(str, sizeof(str), "[TEST 3] Debes Esperar %d Segundos Para Volver a Utilizar La funcion!.", GetSegTimetCMD(playerid,2));
		  return SendClientMessage(playerid, -1, str);
		}
	    SetTimerCMD(playerid,2,60);
	    SendClientMessage(playerid, -1, "[TEST 3] Comando Funciona");
	    //TU FUNCION...
	    //TU FUNCION...
		return true;
	}
*/
/*
             Prohibido TOTALMENTE el Robo de Créditos o la
              Publicación de este INCLUDE sin Mi Permiso.

	SIMPLE INCLUDE --> SetTimerCMD V3
	CREDITOS: OTACON ;)
	NOTA: Menos Creditos para los que me los critican.. JO'PUTAS! :D xD ;)
*/