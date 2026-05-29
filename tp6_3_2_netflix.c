#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*Declarar una estructura compuesta que permita modelar un registro de películas y series que serán
utilizados por NETFLIX para llevar el control sobre el interés de los clientes (No más de 7 campos). 
Luego: - Determinar el tipo y el tamaño de cada campo - 
Calcular la longitud del registro - 
Asignarle valores, y mostrar por pantalla. */

typedef char string[30];
typedef float tNumeroReal;
typedef int tEntero;
typedef struct {
	string tipo;
	string genero;
	string nombre;
	string duracion;
	string puntuacion;
	string clasificacion;
	string anio;
	}tRegistro;
	
tRegistro registro;
void ingresarDatos();
void determinarTipoTamanio();
void calcularLongitudRegistro();
void mostrarDatos(tRegistro);

//void tipoTamañoCampo();
//int longitudRegistro();
int main(){
	bool salir=1;
	while (salir!=0){
		ingresarDatos();
		calcularLongitudRegistro();
		determinarTipoTamanio();
		printf("ingrese 0 para salir 1 para seguir cargando: \n");
		scanf("%d", &salir);
	};
	
	
	mostrarDatos(registro);
	return 0;
}

void ingresarDatos(){
	printf("Ingrese el Tipo: serie/pelicula: \n");
	gets(registro.tipo);
	printf("Ingrese el genero: \n");
	gets(registro.genero);
	printf("ingrsar el nombre: \n");
	gets(registro.nombre);
	printf("ingrese la duracion: \n");
	gets(registro.duracion);
	printf("Ingrese la puntuacion: \n");
	gets(registro.puntuacion);
	printf("ingrese la clasificacion: \n");
	gets(registro.clasificacion);
	printf("ingrese el año de estreno: \n");
	gets(registro.anio);
};

void mostrarDatos(tRegistro pRegistro){
	printf("Registro de pelicula/serie \n");
	printf("Tipo  - genero   -nombre   -duracion   -puntuacion -  clasificacion -año estreno \n");
	printf(" %s   - %s       - %s       - %s       - %s     - %s      - %s      -  ",
	 pRegistro.tipo,
	 pRegistro.genero,
	 pRegistro.nombre,
	 pRegistro.duracion,
	 pRegistro.puntuacion,
	 pRegistro.clasificacion,
	 pRegistro.anio);
	
};
void calcularLongitudRegistro(){
	int longitudTotal;
	longitudTotal=longitudTotal+strlen(registro.tipo)+
	strlen(registro.genero)+
	strlen(registro.nombre)+
	strlen(registro.duracion)+
	strlen(registro.puntuacion)+
	strlen(registro.clasificacion)+
	strlen(registro.anio);
	
	printf("\n ---------------------");
	printf("\nLongitud del registro es de : %d", longitudTotal);
	printf("\n ---------------------");
	

};

void determinarTipoTamanio(){
	printf("\n Identificador: Tipo");
	printf("\n Tipo de dato: char");
	printf("\n Tamaño del campo %zu", sizeof(registro.tipo));

	
	printf("\n Identificador: Genero");
	printf("\n Tipo de dato: char");
	printf("\n Tamaño del campo %zu", sizeof(registro.genero));	
	
	printf("\n Identificador: Nombre");
	printf("\n Tipo de dato: char");
	printf("\n Tamaño del campo %zu", sizeof(registro.nombre));
	
	printf("\n Identificador: duracion");
	printf("\n Tipo de dato: float");
	printf("\n Tamaño del campo %zu", sizeof(registro.duracion));
	
	printf("\n Identificador: puntuacion");
	printf("\n Tipo de dato: int");
	printf("\n Tamaño del campo %zu", sizeof(registro.puntuacion));
	
	printf("\n Identificador: clasificacion");
	printf("\n Tipo de dato: char");
	printf("\n Tamaño del campo %zu", sizeof(registro.clasificacion));
	
	printf("\n Identificador: anio");
	printf("\n Tipo de dato: char");
	printf("\n Tamaño del campo %zu", sizeof(registro.anio));
};
