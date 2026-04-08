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
            imprimir "Instrucciones: Quita piezas hasta que el otro pierda."
        sino si opcion == 3 entonces
            continuar_programa = false
            imprimir "Saliendo del programa..."
        sino
            imprimir "Opcion no valida, intenta de nuevo."
        fin si
        
    fin mientras continuar_programa = true

imprimir "Fin del programa"