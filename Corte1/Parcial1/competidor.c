#include <stdio.h>
#include "competidor.h"

void registrarCompetidor(Competidor *c) {
    printf("\n--- Registro de Competidor ---\n");
    printf("Ingrese ID: ");
    scanf("%d", &(c->id));
    
    printf("Ingrese Nombre o Iniciales: ");
    scanf("%s", c->nombre);
    
    printf("¿Cuantos puntajes/tiempos registrara? (maximo %d): ", MAX_PUNTAJES);
    scanf("%d", &(c->num_puntajes));
    
    if (c->num_puntajes > MAX_PUNTAJES) {
        c->num_puntajes = MAX_PUNTAJES;
    }

    for (int i = 0; i < c->num_puntajes; i++) {
        printf("Ingrese puntaje/tiempo [%d]: ", i + 1);
        scanf("%f", &(c->puntajes[i]));
    }
}

void mostrarCompetidor(const Competidor *c) {
    printf("\nID: %d | Competidor: %s\n", c->id, c->nombre);
}

void mostrarTablaPuntajes(const Competidor *c) {
    printf("Puntajes/Tiempos: [ ");
    for (int i = 0; i < c->num_puntajes; i++) {
        printf("%.2f ", c->puntajes[i]);
    }
    printf("]\n");
}