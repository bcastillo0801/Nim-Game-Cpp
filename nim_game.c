#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

   string jugador1, jugador2;
int puntos1 = 0, puntos2 = 0, totalPartidas = 0;
int opcion; // Variable para almacenar la opción del usuario
bool continuarPrograma = true; // Variable booleana para mantener el ciclo while
   
   
    printf("--------WELCOME TO NIM GAME--------");

    cout << "Nombre del Jugador 1: ";cin >> jugador1;
cout << "Nombre del Jugador 2: ";cin >> jugador2;


do {
        // Menú Principal 
        cout << "\n--- MENU PRINCIPAL ---" << endl;
        cout << "1. Iniciar Juego" << endl;
        cout << "2. Instrucciones" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

} while (continuarPrograma);

( adentro del do{ )
	if (opcion == 1) {
	    //Iniciar Juego
	} else if (opcion == 2) {
            //MostrarInstrucciones
        } else if (opcion == 3) {
            continuarPrograma = false;
        } 



    return 0;
} 