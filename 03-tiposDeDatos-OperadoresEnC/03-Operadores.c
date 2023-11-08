/*
Los operadores son escenciales para realizar operaciones, y podemos distinguir entre tres
tipos de operadores.
    -1 Aritmeticos
    -2 Relacionales
    -3 Logicos
Pero ademas de estos contamos con otros operadores,como los aritmeticos simplificados,
operadores de incremento y decremento, y el operador coma (,).

Los OPERADORES ARITMETICOS nos permiten realizar operaciones entre operandos(numeros, 
constantes o variables), C tiene la capacidad de distinguir entre operadores de tipo 
int y float, para poder ejemplificar las operaciones y tipos de operandos, usaremos 
dos variables, considere "a" como una variable de tipo entero (int) y "b" como una }
variable de tipo real (float).
*/


#include <stdio.h>


int main(){
    int a;
    float b;
    
    //SUMA (+)
    a =4.5 + 3; //En este caso el resultado sera 7, ya que al ser enteros solo considera estos numeros
    // pero no considera su parte decimal
    b = 4.5 +3; //En este caso el resultado sera 7.5 ya que si considera su parte decimal
    printf("Este es el resultado de una suma con una variable de tipo entero: %i \n", a);
    printf("Este es el resultado de una suma con una variable de tipo float: %f \n", b);

    //RESTA (-)
    a = 4.5 - 3; //En este caso el resultado es 1, debido a que es de tipo entero
    b = 4.5 - 3; //El resultado aqui es de 1.5 ya que es de tipo real (float)
    printf("Este es el resultado de una suma con una variable de tipo entero: %i \n", a);
    printf("Este es el resultado de una suma con una variable de tipo float: %f \n", b);

    //MUltiplicacion (*)
    a = 4.5 * 3; 
    b = 4.5 * 3;
    printf("Este es el resultado de una multiplicacion con una variable de tipo entero %i \n", a);
    printf("Este es el resultado de una multiplicacion con una variable de tipo float %f \n", b);
    b = 4 * 3;
    printf("Aun sin los decimales, float mostrara punto decimal, debido a que es de ese tipo de dato: %f\n",b);

    //DIVISION (/)
    /*
    Para este punto creo ya no es necesario explicar el por que de todos los resultados, ya que como hemos visto
    estos cambian en funcion a su tipo de dato y forma de escritura y declaracion
    */

    a = 4 / 3;
    printf("Resultado de 4/3 enteros: %i\n",a);
    a = 3.0 / 3.0;
    printf("Resultado de 4.0/3.0 flotantes en vairbale int: %i\n",a);
    b = 4 / 3;
    printf("Resultado de 4/3 enteros en variable float: %f\n",b);
    b = 4.0 / 3;
    printf("Resultado de 4.0/3 flotante y entero en variable float %f\n",b);
    b = (float) 4 / 3;
    printf("Resultado de dividir 4/3 enteros en variable float y usar casting %f\n",b);/*El casting
    }o cambio de tipo de datos se explicara mas adelante*/
    b = ( (float) 5 + 3 ) / 6;
    printf("Resultado de hacer casting al resultado de sumar 5+3 y dividir el resultado por 3 en una variable float %f", b);

    //MODULO (%(Residuo))
    a = 15 % 2;
    /*
    Sabemos que al dividir 15/2 el resultado es de 7.5, pero al ser "a" una variable de tipo
    entero, oslo mostrara 7, por lo que, si queremos saber cual es el resudio ocupamos el modulo (%)
    y nos devolvera este valor
    */
   printf("El modulo(residuo) de 15%%2 es %i\n",a); /*Esto debido a que solo se puede dividir 14%2 y da 7,
   que es el resultado mostrado, al ser 15 el numero original, 15-14=1, lo cual es el residuo*/
   b=(15%2)/2;
   printf("EL modulo de (15%%2)/2 es %f\n",b);
   b=((float)(15%2))/2;
   printf("El modulo de ((float)(15%%2))/2 es %f\n",b);
    return 0;
}