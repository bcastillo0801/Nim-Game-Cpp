#include <iostream>
#include <string>

using namespace std;
// Función para verificar jugadores
void capturar_jugadores(string &jugador_1, string &jugador_2) {
  cout << "Ingrese el nombre del Jugador 1: ";
  cin >> jugador_1;

  cout << "Ingrese el nombre del Jugador 2: ";
  cin >> jugador_2;
}

void inicializar_juego(int filas[], int &turno, int &partidas) {
  filas[0] = 3;
  filas[1] = 5;
  filas[2] = 7;

  turno = 0;    // 0 = jugador 1, 1 = jugador 2
  partidas = 0; // contador de partidas
}

void dibujar_tablero(int f1, int f2, int f3) {
  // Dibuja los objetos con caracteres
  cout << "\nTABLERO ACTUAL:" << endl;
  cout << "Fila 1 (" << f1 << "): ";
  for (int i = 0; i < f1; i++)
    cout << " @ ";
  cout << endl;

  cout << "Fila 2 (" << f2 << "): ";
  for (int i = 0; i < f2; i++)
    cout << " @ ";
  cout << endl;

  cout << "Fila 3 (" << f3 << "): ";
  for (int i = 0; i < f3; i++)
    cout << " @ ";
  cout << endl;
}

bool esMovimiento_valido(int fila, int cantidad, int r1, int r2, int r3) {
    if (cantidad <= 0) return false;
    if (fila == 1 && cantidad <= r1) return true;
    if (fila == 2 && cantidad <= r2) return true;
    if (fila == 3 && cantidad <= r3) return true;
    return false;
}

int main() {

  // Declarar variables
  string jugador_1, jugador_2;
  int puntos_1 = 0, puntos_2 = 0, total_partidas = 0;
  int opcion;
  bool continuar_programa = true; // Variable booleana requerida para terminar el programa


  cout << "------- WELCOME TO NIM_GAME -------" << endl;

  // Menú Principal e inicio del ciclo do while

  do {
    cout << "\n--- MENU PRINCIPAL ---" << endl;
    cout << "1. Iniciar Juego" << endl;
    cout << "2. Instrucciones" << endl;
    cout << "3. Salir" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    // Opciones del menu
    if (opcion == 1) {
      cout << "\nJuego Nim iniciado..." << endl;

      string jugador_1, jugador_2;
      int puntos_1 = 0, puntos_2 = 0, total_partidas = 0;
      int filas[3];
      int turno;
      int partidas;
      bool partida_activa = true;
      total_partidas++;

      // Captura de jugadores
      capturar_jugadores(jugador_1, jugador_2);

      // Inicialización del juego
      inicializar_juego(filas, turno, partidas);

      // Mostrar estado inicial (para verificar)
      cout << "\n--- Estado ---\n";
      cout << "Jugador 1: " << jugador_1 << endl;
      cout << "Jugador 2: " << jugador_2 << endl;

      cout << "Turno inicial: " << (turno == 0 ? jugador_1 : jugador_2) << endl;
      cout << "Partidas jugadas: " << partidas << endl;

      while (partida_activa) {
        string nombre_actual = (turno % 2 != 0) ? jugador_1 : jugador_2;
        int total_objetos = filas[0] + filas[1] + filas[2];

          // Regla de Empate
                          if (total_objetos == 0) {
                              cout << "\n¡EMPATE! No quedan objetos para tomar." << endl;
                              puntos_1 += 1;
                              puntos_2 += 1;
                              partida_activa = false;
                              break;
                          }

                          // Regla de Pérdida por 1 objeto restante
                          if (total_objetos == 1) {
                              cout << "\n" << nombre_actual << ", solo queda 1 objeto. ¡HAS PERDIDO!" << endl;
                              if (turno % 2 != 0) {
                                  puntos_2 += 3; // Gana el otro
                                  cout << "¡Ganador de la partida: " << jugador_2 << "!" << endl;
                              } else {
                                  puntos_1 += 3;
                                  cout << "¡Ganador de la partida: " << jugador_1 << "!" << endl;
                              }
                              partida_activa = false;
                              break;
                          }
        // Regla de Pérdida por 1 objeto restante

        // Mostrar turno y tablero
        cout << "\n----------------------------" << endl;
        cout << "Turno de: " << nombre_actual << endl;
        dibujar_tablero(filas[0], filas[1], filas[2]);

        int elegida, cantidad;
        cout << "Elija fila (1, 2 o 3): ";
        cin >> elegida;
        cout << "Cantidad a retirar: ";
        cin >> cantidad;

        // Validación de movimiento
        if (esMovimiento_valido(elegida, cantidad, filas[0], filas[1], filas[2])) {
                    if (elegida == 1) filas[0] -= cantidad;
                    else if (elegida == 2) filas[1] -= cantidad;
                    else if (elegida == 3) filas[2] -= cantidad;

                    // Si el jugador retiró el último objeto, pierde
                    if (filas[0] + filas[1] + filas[2] == 0) {
                        cout << "\n" << nombre_actual << " retiro el ultimo objeto y PIERDE." << endl;
                        if (turno % 2 != 0) puntos_2 += 3; else puntos_1 += 3;
                        partida_activa = false;
                    } else {
                        turno++; // Siguiente turno
                    }
                } else {
                    cout << ">> Movimiento invalido. Intente de nuevo." << endl;
                }
      }
        // Mostrar puntos acumulados
                    cout << "\n** PUNTOS ACTUALES **" << endl;
                    cout << jugador_1 << ": " << puntos_1 << endl;
                    cout << jugador_2 << ": " << puntos_2 << endl;

                    char repetir;
                    cout << "\n¿Desea jugar otra partida? (s/n): ";
                    cin >> repetir;
                    if (repetir == 'n' || repetir == 'N') {
                        // Resumen final
                        cout << "\n===============================" << endl;
                        cout << "RESUMEN FINAL" << endl;
                        cout << "Partidas jugadas: " << total_partidas << endl;
                        cout << "Puntos totales " << jugador_1 << ": " << puntos_1 << endl;
                        cout << "Puntos totales " << jugador_2 << ": " << puntos_2 << endl;
                        cout << "===============================" << endl;
                        continuar_programa = false;
                    }

    } else if (opcion == 2) {
      // mostrar Instrucciones
      cout << "\nInstrucciones: selecciona la fila y luego los elementos que "
              "desees eliminar para ganar."
           << endl;
      cout << "trata de no dejar elementos para para perder" << endl;
      cout << "1. hay 3 filas con 3,5 y 7 objetos respectivamente" << endl;
      cout << "2. en un turno, retira cualquier cantidad de una sola fila"
           << endl;
      cout << "3. si retiras el ultimo objeto o te toca jugar y solo queda "
              "uno, ¡¡PIERDES!!"
           << endl;
      cout << "4. virtoria es igual a 3 puntos, empate = a 1 punto, derrota = "
              "0 puntos"
           << endl;
    } else if (opcion == 3) {
      continuar_programa = false;
      cout << "Saliendo del programa..." << endl;
    } else {
      cout << "Opcion no valida, intenta de nuevo." << endl;
    }

  } while (continuar_programa);

  return 0;
}
