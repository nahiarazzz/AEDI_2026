#include <stdio.h>
#include <string.h>

#define MAX 5 //hasta donde va la i

/*ingresar edades sumarlas y promediarlas*/
int i, sumarVector, edadMayor=0;
int edad[5];
float promedio;

void generarVector();
void calcularPromedio();
void calcularMayorEdad();
void calcularMenorEdad();
int main (){
	
	generarVector();
	calcularPromedio();
	calcularMayorEdad();
	calcularMenorEdad();
	return 0;
}

void generarVector(){
	i=0;
	for (i=0; i<MAX; i++){
		printf("Ingresar la edad\n");	
		scanf("%d", &edad[i]);	
	}
};
void calcularPromedio(){
	i=0;
	for (i=0; i<MAX; i++){
		sumarVector=sumarVector+ edad[i];
	}
	printf("La suma de las edades es de %d \n",sumarVector);
	promedio=(float)sumarVector/i;
	printf("El promedio de los edades es de %2.f \n", promedio);
};

void calcularMayorEdad(){
	int posicionMayor;
	i=0;
	for (i=0; i<MAX; i++){
		if (edad[i]> edadMayor){
			edadMayor=edad[i];
			posicionMayor=i;
			//para detectar mayor sigue la logica inversa quiero detectar mayor entonces arranco con el mayor
		}
	
	}
	printf("La persona %d es la mayor con: %d  años \n", posicionMayor+1, edadMayor);
	
};

void calcularMenorEdad(){
	i=0;
	int edadMenor=150, posicionMenor;
	for (i=0; i<MAX; i++){
		if (edad[i]< edadMenor){
			edadMenor=edad[i];
			posicionMenor=i+1;
		}
	}
	printf("La persona %d es la de menor edad  con %d anios", posicionMenor, edadMenor);
};
	
	

