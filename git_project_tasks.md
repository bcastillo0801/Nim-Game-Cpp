# Tareas para el proyecto de Nim Game

## Github Tasks 
### Estructura Base y Navegación
1. Configuración del Repositorio: Inicializar el repositorio con un archivo README.md (documentación inicial) y .gitignore para C++.

2. Esqueleto del Programa Principal: Implementar el ciclo DO WHILE general, la declaración de variables globales/partida y el mensaje de bienvenida.

3. Sistema de Menú: Crear la lógica de navegación para las 5 opciones mencionadas (Iniciar, Instrucciones, Salir, Resumen, Personalizada).

### Lógica del Juego
1. Gestión de Jugadores: Implementar la captura de nombres y la inicialización de variables de estado (filas, turnos, conteo de partidas).

2. Renderizado del Tablero: Crear una función que muestre visualmente las filas y la cantidad de objetos actuales en cada turno.

3. Validación de Movimientos: Desarrollar la lógica que verifique si la fila elegida existe y si la cantidad de objetos a retirar es permitida.

4. Controlador de Turnos: Implementar la alternancia entre jugadores y la actualización del nombre del jugador actual en pantalla.

### Condiciones de Victoria y Empate
1. Detector de Fin de Partida: Implementar la lógica de verificación de objetos totales (Si no hay objetos = Empate; Si hay un solo objeto = Pérdida).

2. Sistema de Puntuación: Programar la asignación de puntos (1 para empate, 3 para el ganador por regla del último objeto).

3. Cierre de Partida Activa: Implementar el resumen post-partida y la pregunta para jugar de nuevo o volver al menú.

### Información y Extras
1. Módulo de Instrucciones: Redactar y mostrar las reglas del juego dentro de la Opción #2.

2. Persistencia de Estadísticas: Implementar la Opción #4 para mostrar el resumen acumulado (total de partidas y puntos por jugador) mientras el programa esté en ejecución.

3. Configuración de Partida Personalizada: (Opción #5) Definir parámetros para que el usuario elija la cantidad de filas o de objetos iniciales.


## Especificaciones
### Programa General
* Declarar variables para la partida
* Declarar variables para el ciclo DO WHILE general 
* 
* Mensaje de bienvenida
* Mostrar Menu
* Declarar opciones dentro del ciclo
* 

### Opcion #1 "Iniciar Juego" 
* Pedir nombres de jugadores dentro de la opcion de **iniciar juego** 
* Variables de fila, turnos y conteo de partidas
* ciclo para una partida activa
    * Determinar el nombre actual (para mostrar en el tablero de juego)
    * Verificar la cantida de objetos en cada fila
    * Si no hay objetos en ninguna fila
        * declarar empate
        * sumar un punto a cada jugador 
        * Declarar partida como no activa 
        * salir del ciiclo de partida actva
    * Si hay un solo objeto en total de las 3  filas 
        * declarar perdida
        * sumar 3 puntos al jugador que no le toca jugar
        * Anunciar al ganador
        * Declarar partida como no activa 
        * salir del ciiclo de partida actva
    * Mostrar turno
    * Mostrar tablero (filas y cantidad de objetos en cada una)
    * Pedir al jugador actual que elija una fila y la cantidad de objetos a retirar
    * Validar que el movimiento sea valido
    * Si el movimiento es valido
        * Restar la cantidad de objetos de la fila elegida
        * Si el jugador retira el ultimo objeto
            * Indicar que el jugador acual pierde
            * Sumar 3 puntos al otro jugador 
            * Declarar partida como no activa
        * sino 
            * pasar al siguiente turno 
    * Sino 
        * Indicar como movimiento invalido 

*(Fuera de el ciclo de una partida activa)*
* Mostrar puntos acumulados para cada jugador 
* Pedir al usuario si desea jugar otra partida 
* si la respuesta es negativa
    * Mostrar el resumen final 
        - Mostrar el total de paridas 
        - Mostrar puntos totales del jugador 1 
        - Mostrar puntos totales del jugador 2 
    * salir del programa 


### Opcion #2 "Instrucciones" 
* Mostrar instrucciones dentro de la opcion 2 

### Opcion #3 "Salir" 
* Salir del diclo del programa 

### Opcion #4 "Resumen de Partidas" 
* Mostrar resumen actual 
    - Mostrar el total de paridas 
    - Mostrar puntos totales del jugador 1 
    - Mostrar puntos totales del jugador 2 

### Opcion #5 "Partida Perzonalizada" 
* 
