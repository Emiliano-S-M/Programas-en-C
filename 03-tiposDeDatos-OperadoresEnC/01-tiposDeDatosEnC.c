#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("En el lenguje C, tenemos algunos tipos de datos, estos tipos de datos incluyen:\n");
    printf("Datos de tipo entero o \"int\"\n");
    printf("Datos de tipo flotante o \"float\"\n");
    printf("Datos de largo alcance o \"long\"\n");
    printf("Datos reales de doble precision o \"double\"\n");
    printf("Datos de tipo caracter o \"char\"\n");
    printf("\v\v");
    printf("Creacion de variables: \n");
    //FORMATO DE ESCRITURA DE LAS VARIABLES
    // %u Escribe enteros sin signo de 2 bytes
    // %d %i Escribe enteros de 2 bytes
    // /ld Escribe enteros de largo alcance
    // %f Escribe reales de 4 bytes
    // %e Imprime de forma exponencial
    // %g Imprime en %f o %e en funcion del tamaño del numero
    // %c Escribe un caracter de un byte
    // %s Escribe una cadena de caracteres, que termina con '\0'

    // Variables para ejemplos
    unsigned short unsignedShortVar = 65535; // Entero sin signo de 2 bytes
    short shortVar = -32768; // Entero de 2 bytes
    int intVar = -2147483648; // Entero de 4 bytes
    long longVar = 123456789012345; // Entero de largo alcance
    long long longLongVar = 1234567890123456; // Entero de doble largo alcance
    float floatVar = 3.14159; // Real de 4 bytes
    double doubleVar = 1.234567e-10; // Real de doble precisión en notación exponencial
    char charVar = 'A'; // Carácter de un byte
    char stringVar[] = "Hola"; // Cadena de caracteres

    // Imprimir variables con los diferentes formatos
    printf("unsignedShortVar: %u\n", unsignedShortVar);
    printf("shortVar: %d\n", shortVar);
    printf("intVar: %d\n", intVar);
    printf("longVar: %ld\n", longVar);
    printf("longLongVar: %lld\n", longLongVar);
    printf("floatVar: %f\n", floatVar);
    printf("doubleVar (notación exponencial): %e\n", doubleVar);
    printf("doubleVar (automático %f o %e): %g\n", doubleVar, doubleVar, doubleVar);
    printf("charVar: %c\n", charVar);
    printf("stringVar: %s\n", stringVar);
    return 0;
}