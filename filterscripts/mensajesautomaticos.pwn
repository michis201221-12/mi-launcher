#include <a_samp>
#define naranja 0xFF8600FF
forward MensajesAleatorios();
new MensajesTimer;
new Mensajes[][] =
{
    {"Nuestro equipo de Staff esta para ayudarte, usa /duda o /mp."},//copia esta linea para poner mas mensajes, la siguiente no
    {"¿Tenes alguna sugerencia? publicala en el foro www.cat-rp.online"}
};
public OnFilterScriptInit()
{
    print("\n+==========================+");
    print("| [FS]Mensajes aleatorios  |");
    print("|           by             |");
    print("|         Gantzyo          |");
    print("+==========================+\n");
    MensajesTimer = SetTimer("MensajesAleatorios",300000, 1);//edita el 300000 para cmabiar el tiempo con el que salen( 300000 son 5 minutos)
    return 1;
}
public OnFilterScriptExit()
{
    print("\n+==========================+");
    print("| [FS]Mensajes aleatorios  |");
    print("|           by             |");
    print("|         Gantzyo          |");
    print("+==========================+\n");
    KillTimer(MensajesTimer);
    return 1;
}
public MensajesAleatorios()
{
    SendClientMessageToAll(naranja,Mensajes[random(sizeof(Mensajes))]);
    return 1;
}
