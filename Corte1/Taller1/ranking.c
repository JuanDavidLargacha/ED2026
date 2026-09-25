#include <stdio.h>
#include "ranking.h"

void inicializarRanking(ranking *ranking) {

    ranking->cantidad = 0;
}

void insertarJugador(ranking *ranking, jugador jugador) {

    int posicion = 0;

    /* Buscar la posición donde debe entrar el jugador */
    while (posicion < ranking->cantidad &&
           jugador.puntaje <= ranking->jugadores[posicion].puntaje) {
        posicion++;
    }

    /* Si no entra al Top 3 */
    if (posicion >= max_jugadores) {
        printf("\nEl jugador no entra al Top 3.\n");
        return;
    }

    /* Desplazar jugadores hacia abajo */
    if (ranking->cantidad < max_jugadores) {
        ranking->cantidad++;
    }

    for (int i = ranking->cantidad - 1; i > posicion; i--) {
        ranking->jugadores[i] = ranking->jugadores[i - 1];
    }

    /* Insertar el nuevo jugador */
    ranking->jugadores[posicion] = jugador;

    printf("\nEl jugador entro al Top 3.\n");
}

void mostrarRanking(ranking ranking) {

    printf("\n============================\n");
    printf("        TOP 3 PUNTAJES\n");
    printf("============================\n");

    for (int i = 0; i < ranking.cantidad; i++) {

        printf("%d. ", i + 1);
        mostrarJugador(ranking.jugadores[i]);
    }

    printf("============================\n");
}