
#include <stdio.h>
#include "competidor.h"
#include "ordenamiento.h"

int main() {
    Competidor jugador;
    int opcion = 0;

    // Registrar datos
    registrarCompetidor(&jugador);

    do {
        printf("\n=========================================");
        printf("\n  SISTEMA DE CLASIFICACION DE VIDEOJUEGOS");
        printf("\n=========================================");
        mostrarCompetidor(&jugador);
        printf("Estado actual de puntajes:\n");
        mostrarTablaPuntajes(&jugador);

        printf("\nSeleccione el Metodo de Ordenamiento:\n");
        printf("1. Bubble Sort (Burbuja)\n");
        printf("2. Selection Sort (Seleccion)\n");
        printf("3. Insertion Sort (Insercion)\n");
        printf("4. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                bubbleSort(jugador.puntajes, jugador.num_puntajes);
                printf("\n[!] Puntajes ordenados con Bubble Sort.");
                break;
            case 2:
                selectionSort(jugador.puntajes, jugador.num_puntajes);
                printf("\n[!] Puntajes ordenados con Selection Sort.");
                break;
            case 3:
                insertionSort(jugador.puntajes, jugador.num_puntajes);
                printf("\n[!] Puntajes ordenados con Insertion Sort.");
                break;
            case 4:
                printf("\nSaliendo del programa...\n");
                break;
            default:
                printf("\nOpcion inválida. Intente de nuevo.\n");
        }
    } while (opcion != 4);

    return 0;
}