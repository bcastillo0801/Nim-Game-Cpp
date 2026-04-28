#include <iostream>
#include <string>

using namespace std;
// Función para verificar jugadores
void capturarJugadores(string &jugador1, string &jugador2) {
    cout << "Ingrese el nombre del Jugador 1:\n ";
    cin >> jugador1;

    cout << "Ingrese el nombre del Jugador 2: ";
    cin >> jugador2;
}

void inicializarJuego(int filas[], int &turno, int &partidas) {
    filas[0] = 3;
    filas[1] = 5;
    filas[2] = 7;

    turno = 0;      // 0 = jugador 1, 1 = jugador 2
    partidas = 0;   // contador de partidas


}

void dibujar_tablero(int f1, int f2, int f3) {
    // Dibuja los objetos con caracteres 
    cout << "\nTABLERO ACTUAL:" << endl;
    cout << "Fila 1 (" << f1 << "): ";
    for(int i=0; i<f1; i++) cout << " @ "; 
    cout << endl;

    cout << "Fila 2 (" << f2 << "): ";
    for(int i=0; i<f2; i++) cout << " @ ";
    cout << endl;

    cout << "Fila 3 (" << f3 << "): ";
    for(int i=0; i<f3; i++) cout << " @ ";
    cout << endl;
}
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

    string jugador1, jugador2;
    int filas[3];
    int turno;
    int partidas;

    // Captura de jugadores
    capturarJugadores(jugador1, jugador2);

    // Inicialización del juego
    inicializarJuego(filas, turno, partidas);
    dibujar_tablero(filas[0], filas[1], filas[2]);


    // Mostrar estado inicial (para verificar)
    cout << "\n--- Estado Inicial ---\n";
    cout << "Jugador 1: " << jugador1 << endl;
    cout << "Jugador 2: " << jugador2 << endl;

    cout << "Filas: ";
    for (int i = 0; i < 3; i++) {
        cout << filas[i] << " ";
    }
    cout << endl;

    cout << "Turno inicial: " << (turno == 0 ? jugador1 : jugador2) << endl;
    cout << "Partidas jugadas: " << partidas << endl;

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
