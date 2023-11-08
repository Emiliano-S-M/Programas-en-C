#include <stdio.h>
#include <unistd.h>//Esta libreria se explicara mas adelante

int main(){
    printf("\a \n"); //Este caracter de control emitira un sonido de alerta 
    printf("Este caracter es para \n crear saltos de linea \n");
    printf("Este \t crea una tabulacion horizontal \n");
    printf("Este \v crea una tabulacion vertical\n");
    printf("Este caracter creara un salto de pagina \f \n");
    sleep(6);//Es una caracteristica de la libreria unistd.h que se explicara mas adelante
    printf("Siguiente mensaje despues del salto depagina \n");
    printf("Este caracter imprime un apostrofo \' \n");
    printf("Este caracter imprime comillas \" \n");
    printf("Este caracter imprime una diagonal invertida \\ \n");
    return 0;
}