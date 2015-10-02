/* Bibliotecas que utiliza el programa */
#include <stdio.h>

/* Punto de inicio del programa */
int main(int argc, char * argv []){

    /* Declaracion de variables (Ya lo veremos mas adelante */
    int caras=6;
    int resultado;

    /* Inicializacion de la funcion random (sin importancia por el momento)*/
    srand((int)time(NULL));

    /* Obtenemos el resultado (Efectivamente, aun no sabemos nada de funciones) */
    resultado=(rand()%caras)+1;

    /* Mostramos el resultado por pantalla */
    printf("Resultado: %d\n", resultado);

    /* Acaba la ejecucion del programa */
    return 0;
}


