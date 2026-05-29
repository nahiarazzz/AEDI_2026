#include <stdio.h>
#include <string.h>
/*char nombre [20];
printf ("Introduzca un nombre (max 20 letras): ");
 scanf("%s", nombre);
printf ("\nEl nombre ingresado es: %s\n", nombre);*/

char nombre[20];
void ingresarNombre();
void mostrarNombre();

int main(){
	ingresarNombre();
	mostrarNombre();
}

void ingresarNombre(){
	printf ("Introduzca un nombre (max 20 letras): ");
 	scanf("%[^\n]", nombre);
};
void mostrarNombre(){
	printf ("\nEl nombre ingresado es: %s\n", nombre);
}
