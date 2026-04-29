**inicio**

    puntos_1 = 0
    puntos_2 = 0
    total_partidas = 0
    continuar_programa = true

    imprimir "------- WELCOME TO NIM_GAME -------"

    mientras continuar_programa == true hacer
        imprimir "\n--- MENU PRINCIPAL ---"
        imprimir "1. Iniciar Juego"
        imprimir "2. Instrucciones"
        imprimir "3. Salir"
        imprimir "Seleccione una opcion: "
        leer opcion

        **si** opcion == 1 **entonces**
            imprimir "\nJuego Nim iniciado..."
            total_partidas = total_partidas + 1
            partida_activa = true

            capturar_jugadores(jugador_1, jugador_2)
            inicializar_juego(filas, turno, partidas)

            **mientras** partida_activa == true **hacer**
                **si** turno % 2 != 0 **entonces**
                    nombre_actual = jugador_1
                **sino**
                    nombre_actual = jugador_2
                **fin si**

                total_objetos = filas[0] + filas[1] + filas[2]

                **si** total_objetos == 0 **entonces**
                    imprimir "¡EMPATE! No quedan objetos."
                    puntos_1 = puntos_1 + 1
                    puntos_2 = puntos_2 + 1
                    partida_activa = false
                **sino si** total_objetos == 1 **entonces**
                    imprimir nombre_actual + ", solo queda 1 objeto. ¡HAS PERDIDO!"
                    **si** turno % 2 != 0 **entonces**
                        puntos_2 = puntos_2 + 3
                        imprimir "¡Ganador de la partida: " + jugador_2 + "!"
                    **sino**
                        puntos_1 = puntos_1 + 3
                        imprimir "¡Ganador de la partida: " + jugador_1 + "!"
                    **fin si**
                    partida_activa = false
                **sino**
                    imprimir "Turno de: " + nombre_actual
                    dibujar_tablero(filas[0], filas[1], filas[2])
      
                    imprimir "Elija fila (1, 2 o 3): "
                    **leer** elegida
                    imprimir "Cantidad a retirar: "
                    **leer** cantidad

                    **si** esMovimiento_valido(elegida, cantidad, filas[0], filas[1], filas[2]) == true **entonces**
                        **si** elegida == 1 **entonces** filas[0] = filas[0] - cantidad
                        **sino si** elegida == 2 **entonces** filas[1] = filas[1] - cantidad
                        **sino si** elegida == 3 **entonces** filas[2] = filas[2] - cantidad
                        **fin si**

                    **si** (filas[0] + filas[1] + filas[2]) == 0 **entonces**
                        imprimir: nombre_actual + " retiro el ultimo objeto y PIERDE."
                        **si** turno % 2 != 0 **entonces** puntos_2 = puntos_2 + 3 **sino** puntos_1 = puntos_1 + 3
                        partida_activa = false
                    **sino**
                        turno = turno + 1
                    **fin si**
                    **sino**
                        imprimir ">> Movimiento invalido. Intente de nuevo."
                    **fin si**
                **fin si**
            **fin mientras**

            imprimir: "** PUNTOS ACTUALES **"
            imprimir: jugador_1 + ": " + puntos_1
            imprimir: jugador_2 + ": " + puntos_2
            imprimir: "¿Desea jugar otra partida? (s/n): "
            **leer** repetir
            **si** repetir == 'n' o repetir == 'N' **entonces**
                imprimir: "RESUMEN FINAL"
                imprimir: "Partidas jugadas: " + total_partidas
                imprimir: "Puntos totales " + jugador_1 + ": " + puntos_1
                imprimir: "Puntos totales " + jugador_2 + ": " + puntos_2
                continuar_programa = false
            **fin si**

        **sino si** opcion == 2 **entonces**
            imprimir: "Instrucciones: selecciona la fila y luego los elementos..."
        **sino si** opcion == 3 **entonces**
            continuar_programa = false
            imprimir: "Saliendo del programa..."
        **sino**
            imprimir: "Opcion no valida, intenta de nuevo."
        **fin si**
    **fin mientras**
**fin**



**subrutina capturar_jugadores(jugador_1, jugador_2)**
    imprimir: "Ingrese el nombre del Jugador 1: "
    leer jugador_1
    imprimir: "Ingrese el nombre del Jugador 2: "
    leer jugador_2
**fin subrutina**

**subrutina inicializar_juego(filas, turno, partidas)**
    filas[0] = 3
    filas[1] = 5
    filas[2] = 7
    turno = 0
    partidas = 0
**fin subrutina**

**subrutina dibujar_tablero(f1, f2, f3)**
    imprimir: "TABLERO ACTUAL:"
    imprimir: "Fila 1 (" + f1 + "): @@@ (segun cantidad)"
    imprimir: "Fila 2 (" + f2 + "): @@@@@ (segun cantidad)"
    imprimir: "Fila 3 (" + f3 + "): @@@@@@@ (segun cantidad)"
**fin subrutina**

**subrutina esMovimiento_valido(fila, cantidad, r1, r2, r3)**
    si cantidad <= 0 entonces return false
    si fila == 1 y cantidad <= r1 entonces return true
    si fila == 2 y cantidad <= r2 entonces return true
    si fila == 3 y cantidad <= r3 entonces return true
    return false
**fin subrutina**