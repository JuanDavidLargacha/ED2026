#include <stdio.h>
#include "jugador.h"
#include "ranking.h"

void ingresarJugador(jugador *jugador) {
    printf("Ingrese las 3 iniciales del jugador: ");
    scanf("%3s", jugador->iniciales);

    printf("Ingrese el puntaje: ");
    scanf("%d", &jugador->puntaje);
}

int main() {

    ranking ranking;
    jugador Jugador;
    int opcion;

    inicializarRanking(&ranking);

    do {

        printf("\n============================\n");
        printf("       GTA VI - RANKING\n");
        printf("============================\n");
        printf("1. Registrar jugador\n");
        printf("2. Mostrar Top 3\n");
        printf("3. Salir\n");
        printf("============================\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {

            case 1:
                ingresarJugador(&Jugador);
                insertarJugador(&ranking, Jugador);
                break;

            case 2:
                mostrarRanking(ranking);
                break;

            case 3:
                printf("\nPrograma finalizado.\n");
                break;

            default:
                printf("\nOpcion no valida.\n");
        }

    } while (opcion != 3);

    return 0;
}