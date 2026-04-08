Inicio

    puntos1 = 0
    puntos2 = 0
    total_partidas = 0
    continuar_programa = true

    imprimir "--------WELCOME TO NIM GAME--------"

    imprimir "Nombre del Jugador 1: "
    leer nombre_1
    imprimir "Nombre del Jugador 2: "
    leer nombre_2

    hacer
        imprimir "--- MENU PRINCIPAL ---"
        imprimir "1. Iniciar Juego"
        imprimir "2. Instrucciones"
        imprimir "3. Salir"
        imprimir "Seleccione una opcion: "
        leer opcion

        si opcion == 1 entonces
            imprimir "Iniciando el juego..."
        sino si opcion == 2 entonces
            imprimir "Instrucciones: selecciona la fila y luego los elementos que desees eliminar para ganar."
            imprimir "trata de no dejar elementos para para perder"
            imprimir "1. hay 3 filas con 3,5 y 7 objetos respectivamente"
            imprimir "2. en un turno, retira cualquier cantidad de una sola fila"
            imprimir "3. si retiras el ultimo objeto o te toca jugar y solo queda uno, ¡¡PIERDES!!"
            imprimir "4. virtoria es igual a 3 puntos, empate = a 1 punto, derrota = 0 puntos"
        sino si opcion == 3 entonces
            continuar_programa = false
            imprimir "Saliendo del programa..."
        sino
            imprimir "Opcion no valida, intenta de nuevo."
        fin si
        
    fin mientras continuar_programa = true

imprimir "Fin del programa"