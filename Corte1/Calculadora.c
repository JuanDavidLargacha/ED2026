#include <stdio.h>
#include "aritmetica.h"

void mostrarMenu() {
    printf("\n=== CALCULADORA EN C ===\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("5. Ver ultimo resultado guardado\n");
    printf("6. Salir\n");
    printf("Selecciona una opcion: ");
}

int main() {
    int opcion = 0;
    int x = 0, y = 0;
    int ultimo_resultado = 0;
    int tiene_guardado = 0; // Controla si se ha realizado al menos una operacion

    do {
        mostrarMenu();
        if (scanf("%d", &opcion) != 1) {
            printf("\nEntrada no valida.\n");
            while (getchar() != '\n'); // Limpia buffer
            continue;
        }

        switch (opcion) {
            case 1:
                printf("Ingresa el primer numero: ");
                scanf("%d", &x);
                printf("Ingresa el segundo numero: ");
                scanf("%d", &y);
                
                ultimo_resultado = sumar(x, y);
                tiene_guardado = 1;
                printf("Resultado: %d\n", ultimo_resultado);
                break;

            case 2:
                printf("Ingresa el primer numero: ");
                scanf("%d", &x);
                printf("Ingresa el segundo numero: ");
                scanf("%d", &y);
                
                ultimo_resultado = restar(x, y);
                tiene_guardado = 1;
                printf("Resultado: %d\n", ultimo_resultado);
                break;

            case 3:
                printf("Ingresa el primer numero: ");
                scanf("%d", &x);
                printf("Ingresa el segundo numero: ");
                scanf("%d", &y);

                ultimo_resultado = multiplicar(x, y);
                tiene_guardado = 1;
                printf("Resultado: %d\n", ultimo_resultado);
                break;

            case 4:
                printf("Ingresa el primer numero: ");
                scanf("%d", &x);
                printf("Ingresa el segundo numero: ");
                scanf("%d", &y);

                if (y == 0) {
                    printf("Error: No se puede dividir entre cero.\n");
                } else {
                    ultimo_resultado = dividir(x, y);
                    tiene_guardado = 1;
                    printf("Resultado: %d\n", ultimo_resultado);
                }
                break;

            case 5:
                if (tiene_guardado) {
                    printf("Ultimo resultado guardado: %d\n", ultimo_resultado);
                } else {
                    printf("Aun no hay ningun resultado guardado.\n");
                }
                break;

            case 6:
                printf("Saliendo de la calculadora. Hasta luego!\n");
                break;

            default:
                printf("\nOpcion no valida. Intenta de nuevo.\n");
                break;
        }

    } while (opcion != 6);

    return 0;
}