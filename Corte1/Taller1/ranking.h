#ifndef RANKING_H
#define RANKING_H

#include "jugador.h"

#define max_jugadores 3

typedef struct {
    jugador jugadores[max_jugadores];
    int cantidad;
} ranking;

void inicializarRanking(ranking *ranking);
void mostrarRanking(ranking ranking);
void insertarJugador(ranking *ranking, jugador jugador);
#endif