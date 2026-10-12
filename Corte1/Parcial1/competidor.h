#ifndef COMPETIDOR_H
#define COMPETIDOR_H

#define MAX_NOMBRE 50
#define MAX_PUNTAJES 10

// Estructura para el competidor
typedef struct {
    int id;
    char nombre[MAX_NOMBRE];
    float puntajes[MAX_PUNTAJES]; // Arreglo para los tiempos o puntajes
    int num_puntajes;
} Competidor;

// Prototipos de funciones usando apuntadores
void registrarCompetidor(Competidor *c);
void mostrarCompetidor(const Competidor *c);
void mostrarTablaPuntajes(const Competidor *c);

#endif