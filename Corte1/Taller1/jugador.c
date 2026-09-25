#include <stdio.h>
#include <string.h>
#include "jugador.h"


void mostrarJugador(jugador jugador){

    printf("%s - %d punto\n",
            jugador.iniciales,
            jugador.puntaje);
}