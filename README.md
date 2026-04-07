# Nim-Game-Cpp
Este repositorio contiene el desarrollo del **Proyecto Corto #1** para el curso de programación, consistente en una implementación en modo texto del clásico juego de estrategia **Nim** utilizando **C/C++**.

## Descripción del Proyecto
El objetivo principal es aplicar estructuras de selección, repetición y el uso de funciones para crear un sistema de juego por turnos. El programa permite a dos jugadores competir retirando objetos de tres filas distintas, donde el objetivo es evitar retirar el último objeto.

## Reglas del Juego
 * **Configuración Inicial:** Se dispone de tres filas con la siguiente cantidad de elementos:
   * Fila 1: 3 elementos.
   * Fila 2: 5 elementos.
   * Fila 3: 7 elementos.
 * **Mecánica de Turno:** En cada turno, un jugador elige una única fila y retira la cantidad de objetos que desee, siempre que haya suficientes disponibles.
 * **Condición de Victoria/Derrota:**
   * **Pierde:** El jugador que se ve obligado a retirar el último objeto restante.
   * **Gana:** El jugador contrario al que retiró el último objeto.
   * **Empate:** Ocurre si en el turno de un jugador ya no existen objetos disponibles para retirar.

## Características del Programa
El sistema incluye los siguientes requerimientos técnicos y funcionales:
### Funcionalidades
 * **Gestión de Jugadores:** Registro de nombres y visualización personalizada durante los turnos.
 * **Interfaz Visual:** Representación de los objetos en pantalla mediante caracteres y figuras para simular el tablero.
 * **Sistema de Puntuación:** 
   * Victoria: 3 puntos.
   * Empate: 1 punto.
   * Derrota: 0 puntos.
 * **Menú Principal:** Opciones para iniciar juego, ver instrucciones y salir.
 * **Persistencia de Sesión:** Opción de reiniciar partidas acumulando el puntaje o finalizar viendo las estadísticas totales (partidas jugadas y puntos totales).
### Restricciones Técnicas
 * Desarrollado estrictamente en **C/C++**.
 * Uso de al menos 2 funciones personalizadas.
 * Implementación de variables booleanas y cadenas de caracteres.
 * Control de flujo mediante estructuras de selección y repetición.

