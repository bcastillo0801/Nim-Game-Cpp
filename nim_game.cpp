#include <iostream>
#include <string>

using namespace std;
int main() {

    // Declarar variables 
    string jugador_1, jugador_2;
	int puntos_1 = 0, puntos_2 = 0, total_partidas = 0;
	int opcion;
	bool continuar_programa = true;

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
			cout <<"\nJuego Nim iniciado..."<< endl;

			// Ingresos de nombres de jugadores    // Ingresos de nombres de jugadores
			cout << "Nombre del Jugador 1: "; cin >> jugador_1;
			cout << "Nombre del Jugador 2: "; cin >> jugador_2;
		} 
		else if (opcion == 2) {
			//mostrar Instrucciones
			cout << "\nInstrucciones: selecciona la fila y luego los elementos que desees eliminar para ganar." << endl;
		    cout<<"trata de no dejar elementos para para perder"<<endl;
			cout<<"1. hay 3 filas con 3,5 y 7 objetos respectivamente" <<endl;
			cout<<"2. en un turno, retira cualquier cantidad de una sola fila" <<endl;
			cout<<"3. si retiras el ultimo objeto o te toca jugar y solo queda uno, ¡¡PIERDES!!" <<endl;
			cout<<"4. virtoria es igual a 3 puntos, empate = a 1 punto, derrota = 0 puntos" <<endl;
		} 
		else if (opcion == 3) {
			continuar_programa = false;
			cout <<"Saliendo del programa..."<< endl;
		}
		else {
			cout <<"Opcion no valida, intenta de nuevo."<< endl;
		}
		
	} while (continuar_programa);


    return 0;
} 
