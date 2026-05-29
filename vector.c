#include <stdio.h>
#include <string.h>

void generaVector();
void mostrarVector();

int i;
int edad[5];
int main(){
	generaVector();
	mostrarVector();
	return 0;
}
void generaVector(){
	i=0;
	printf("ingreso edad \n");
	for(i=0; i<5; i++){
		scanf("%d", &edad[i]);
		printf("edad del alumno %d: %d", i+1, edad[i]);
		printf("\n \n ingreso edad \n\n");
	}
};

void mostrarVector(){
	i=0;
	printf("alumno nro- edad----\n");
	for (i=0; i<5; i++){
		
		printf("    %d     -   %d \n", i+1, edad[i]);
	};
};
