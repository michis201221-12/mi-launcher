//Agregamos los includes que vamos a necesitar.
#include <a_samp>
// Definiremos el color que queremos:
#define darksalmon E9967A
#define FILTERSCRIPT
// Forward(s):
forward msgxd;
//////////News:
new msgtiempo;
new msg[][] =

{
     {"[!]Usa /duda para cualquier pregunta frecuente"},
	 {"[!] ¿Viste algun cheater o antirol? Usa /re para reportarlo"},            //Si quieres poner más mensajes, copia esta linea, y pegala bajo de la misma.
	 {"[!] ¿Te gustaria formar parte del Staff? postulate en /foro"}

}

///Ponemos el public
public OnFilterScriptInit()
{
    print("\n+==========================+");
    print("|     Mensajes aleatorios(1)|");
    print("|             100%         |");
    print("|          Cargados        |");
    print("+==========================+\n");
    msgtiempo = SetTimer("msgxd",300000, 1);//edita el 300000 para cmabiar el tiempo con el que salen( 300000 son 5 minutos)
    return 1;
}

public OnFilterScriptExit()
{
    print("\n+==========================+");
    print("|     Mensajes aleatorios(2) |");
    print("|           100%           |");
    print("|         Cargados       	|");
    print("+==========================+\n");
    KillTimer(msgtiempo);
    return 1;
}
public msgxd()dbd
{
    SendClientMessageToAll(darksalmon,msg[random(sizeof(msg))]);  //cambiamos donde dice "darksalmon" por nuestro color
    return 1;
}
