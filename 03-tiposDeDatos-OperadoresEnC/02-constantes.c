/*
Las constantes son un tipo de datos que no cambiaran durante la ejecucion de un programa,
y que no pueden ser modificadas por los usuarios alo largo del programa, por ejemplo
pi, universalemente es sabido que vale 3.1415...etc, mientras que por ejemplo, si se desea
calcular por ejemplo el resultado de sumar dos numeros, el resultado es variable en funcion
de los datos a sumar.

Existen constantes de todos los tipos de datos, y deben de ser definidas antes de comenzar 
el programa principal, existen dos formas diferentes de nombrar o crear constantes
*/

#include <stdio.h>
#include <stdlib.h>

const int num1 = 20;  /*Estamos creando una constante de tipo entero, cuyo valor siempre sera 20*/
const float rel1 = 4.1; /*Estamos creando una constante de tipo real*/
const char ca1 = 'a'; /*Creamos una constante de tipo caracter*/

#define nu2 25 /*Estamos creando otra constante de tipo entero*/
#define rel2 5.5
#define ca2 'b'

int main()
{
    printf("Ambas obciones son validas, tanto %i, como %i \n", num1, nu2);
    printf("Lo mismo para los datos float, tanto el primero %f, como el segundo %f \n", rel1, rel2);
    printf("E igual para los char, tanto %c, como %c \n", ca1, ca2);
    return 0;
}

