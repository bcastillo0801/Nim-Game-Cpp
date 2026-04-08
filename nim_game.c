#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	
	string jugador1, jugador2;
	int puntos1 = 0, puntos2 = 0, totalPartidas = 0;
	int opcion;
	bool continuarPrograma = true;
	
	cout << "------- WELCOME TO NIM_GAME -------" << endl;
	cout << "Nombre del Jugador 1: "; cin >> jugador1;
	cout << "Nombre del Jugador 2: "; cin >> jugador2;
	
	do {// menú Principal
		cout << "\n--- MENU PRINCIPAL ---" << endl;
		cout << "1. Iniciar Juego" << endl;
		cout << "2. Instrucciones" << endl;
		cout << "3. Salir" << endl;
		cout << "Seleccione una opcion: ";
		cin >> opcion;
	
		if (opcion == 1) {
			cout <<"\nIniciando el juego..."<< endl;
		} 
		else if (opcion == 2) {
			//mostrar Instrucciones
			cout << "\nInstrucciones: Quita piezas hasta que el otro pierda." << endl;
		} 
		else if (opcion == 3) {
			continuarPrograma = false;
			cout <<"Saliendo del programa..."<< endl;
		}
		else {
			cout <<"Opcion no valida, intenta de nuevo."<< endl;
		}
		
	} while (continuarPrograma);
	
	return 0;
}
