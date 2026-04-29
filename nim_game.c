
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Capturar jugadores
void capturar_jugadores(char jugador1[], char jugador2[]) {
    printf("Ingrese el nombre del Jugador 1: ");
    scanf("%s", jugador1);

    printf("Ingrese el nombre del Jugador 2: ");
    scanf("%s", jugador2);
}

// Inicializar juego
void inicializar_juego(int filas[], int *turno, int *partidas) {
    filas[0] = 3;
    filas[1] = 5;
    filas[2] = 7;

    *turno = 0;
    *partidas = 0;
}

// Dibujar tablero
void dibujar_tablero(int f1, int f2, int f3) {
    printf("\nTABLERO ACTUAL:\n");

    printf("Fila 1 (%d): ", f1);
    for (int i = 0; i < f1; i++) printf(" @ ");
    printf("\n");

    printf("Fila 2 (%d): ", f2);
    for (int i = 0; i < f2; i++) printf(" @ ");
    printf("\n");

    printf("Fila 3 (%d): ", f3);
    for (int i = 0; i < f3; i++) printf(" @ ");
    printf("\n");
}

// Validar movimiento
int esMovimientoValido(int fila, int cantidad, int r1, int r2, int r3) {
    if (cantidad <= 0) return 0;
    if (fila == 1 && cantidad <= r1) return 1;
    if (fila == 2 && cantidad <= r2) return 1;
    if (fila == 3 && cantidad <= r3) return 1;
    return 0;
}

int main(void) {

    char jugador1[50], jugador2[50];
    int opcion;
    int continuar = 1;

    printf("------- WELCOME TO NIM_GAME -------\n");

    do {
        printf("\n--- MENU PRINCIPAL ---\n");
        printf("1. Iniciar Juego\n");
        printf("2. Instrucciones\n");
        printf("3. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        if (opcion == 1) {

            int filas[3];
            int turno, partidas;
            int partidaActiva = 1;

            capturar_jugadores(jugador1, jugador2);
            inicializar_juego(filas, &turno, &partidas);

            while (partidaActiva) {

                int total = filas[0] + filas[1] + filas[2];

                char *nombreActual = (turno % 2 == 0) ? jugador1 : jugador2;

                // Empate
                if (total == 0) {
                    printf("\nEMPATE\n");
                    break;
                }

                // Pierde
                if (total == 1) {
                    printf("\n%s pierde (queda 1 objeto)\n", nombreActual);
                    break;
                }

                printf("\nTurno de: %s\n", nombreActual);
                dibujar_tablero(filas[0], filas[1], filas[2]);

                int fila, cantidad;
                printf("Elija fila (1-3): ");
                scanf("%d", &fila);

                printf("Cantidad: ");
                scanf("%d", &cantidad);

                if (esMovimientoValido(fila, cantidad, filas[0], filas[1], filas[2])) {

                    if (fila == 1) filas[0] -= cantidad;
                    if (fila == 2) filas[1] -= cantidad;
                    if (fila == 3) filas[2] -= cantidad;

                    // Si quitó el último
                    if (filas[0] + filas[1] + filas[2] == 0) {
                        printf("\n%s retiro el ultimo objeto y PIERDE\n", nombreActual);
                        break;
                    }

                    turno++;

                } else {
                    printf("Movimiento invalido\n");
                }
            }

        } else if (opcion == 2) {
            printf("\nInstrucciones: evita tomar el ultimo objeto.\n");
        } else if (opcion == 3) {
            continuar = 0;
        }

    } while (continuar);

    return 0;
}
