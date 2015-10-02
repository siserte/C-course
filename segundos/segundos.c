/* Bibliotecas que utiliza el programa */
#include <stdio.h>

/* Punto de inicio del programa */
int main(int argc, char * argv []){

    /* Declaracion de variables (Ya lo veremos mas adelante */
    int total_segundos=661;
    printf("%d segundos son: ",total_segundos);
    int horas, minutos, segundos;
    
    horas=total_segundos/3600;
    total_segundos=total_segundos%3600;

    minutos=total_segundos/60;
    total_segundos=total_segundos%60;

    segundos=total_segundos;
    
    /* Mostramos el resultado por pantalla */
    printf("%d horas, %d minutos y %d segundos\n", horas, minutos, segundos);

    /* Acaba la ejecucion del programa */
    return 0;
}


