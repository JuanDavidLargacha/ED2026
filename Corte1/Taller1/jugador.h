#ifndef JUGADOR_H
#define JUGADOR_H

#define max_iniciales 4

typedef struct {
    char iniciales[max_iniciales];
    int puntaje;
} jugador;

void ingresarJugadores(jugador *jugador);
void mostrarJugador(jugador jugador);

#endif