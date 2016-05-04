# dado-c
Librería para generar aleatorios cómodamente con funciones del sistema d20.

Dado contiene un programa <<roll>> pensado para usarse mediante un modulo del sistema o el alias zsh:
 alias roll="~/./<ruta_al_repositorio>/dado-c/roll"

El programa roll requiere parámetros para saber que dado tirar.

Ejemplo:
    $> roll d20
    

ATENCIÓN:
  Para poder generar aleatorios es necesario inicializar una semilla.
  Antes de usar cualquier funcion de "dado" debes inicializar en tu programa una semilla.
  "dado" contiene una función "inicializarSemilla" que poseis usar.
  
	Gracias por usar dado
