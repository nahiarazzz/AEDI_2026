/*typedef int tEntero;
tEntero len, maxlen; 
EJERCICIOS
1.1. Escribir un programa que disponga de la declaración de un tipo de dato tNumeroReal 
que permita renombrar al tipo de dato float. Declarar una variable del tipo tNumeroReal,
 asignarle un valor e imprimir por pantalla su contenido. 
*/

#include <stdio.h>

typedef float tNumeroReal;

tNumeroReal numReal;

int main(){
	printf("ingrese un num real: \n");
	scanf("%f",&numReal);
	printf("el numer es %f", numReal);
	return 0;
}
