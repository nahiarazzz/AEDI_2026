/*Desarrollar un programa que permita a las maestras cargar canciones infantiles en forma de versos.
El programa deberá permitir ingresar el título de la canción, el autor y los versos.
Luego, deberá mostrar el título y el autor en mayúsculas,
imprimir los versos dejando una línea de separación entre cada uno, 
calcular la cantidad total de caracteres del texto e informar la cantidad de versos ingresados.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void ingresarDatos();
void mostrarDatos();
void convertirAMayuscula();
typedef char tString[300];
typedef struct {
	char titulo[30];
	char autor[30];
	tString verso;
} tRegistro;

tRegistro registro;

int main (){
	ingresarDatos();
	convertirAMayuscula();
	mostrarDatos();

	return 0;
};

void ingresarDatos(){
	printf("Ingrese el título de la canción \n");
	gets(registro.titulo);
	printf("Ingrese el autor \n");
	gets(registro.autor);
	printf("Ingrese el verso \n");
	gets(registro.verso);
};
void convertirAMayuscula() {
    int i = 0;
    while (registro.titulo[i] != '\0') {
        registro.titulo[i] = toupper(registro.titulo[i]);
        i++;
    }
    i = 0; 
    while (registro.autor[i] != '\0') {
        registro.autor[i] = toupper(registro.autor[i]);
        i++;
    }
}


void mostrarDatos(){
	printf("\n===================================\n");
    printf("TITULO: %s\n", registro.titulo);
    printf("AUTOR: %s\n", registro.autor);
    printf("===================================\n");
    
	printf("Versos:\n");
    int i = 0;
    int totalCaracteres = 0;
    int cantVersos = 1; 
    
    while (registro.verso[i] != '\0') {
        printf("%c", registro.verso[i]); //imprime los caract del verso 1por1 y si termina la linea saltea el renlglon
        if (registro.verso[i] == '.' || registro.verso[i] == ',') {
            printf("\n\n");
            if (registro.verso[i+1] != '\0' && registro.verso[i+1] != ' ') {
                cantVersos++;
            }
        }
        if (registro.verso[i] != ' ') {
            totalCaracteres++; //cuenta los caracteres que no sean espacios
        }
        i++;
    }
    
    printf("\n-----------------------------------\n");
    printf("Cantidad total de caracteres del texto: %d\n",totalCaracteres);
    printf("Cantidad de versos informados: %d\n", cantVersos);

};
