/* Bibliotecas que utiliza el programa */
#include <stdio.h>

/* Punto de inicio del programa */
int main(int argc, char * argv []){

    /* Declaracion de variables (Ya lo veremos mas adelante */
    float pi = 3.141592;
    float radio,area;

    radio=2;
    
    /* area= PI * R² */
    
    area = pi * radio * radio;

    /* Mostramos el resultado por pantalla */
    printf("Area del circulo con radio %f es %f\n", radio, area);

    /* Acaba la ejecucion del programa */
    return 0;
}


