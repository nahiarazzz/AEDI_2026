/*Para emitir los certificados de aprobación de un curso de Python, se dispone de una planilla en la que se
informan en columnas diferentes el nombre y el apellido de los participantes. Escribir un programa que
lea dos datos correspondientes al nombre y apellido, respectivamente. Utilice una función que reciba
como parámetro el nombre y el apellido y concatene en una sola cadena el apellido y nombre, separados
por coma. Mostrar en pantalla la nueva cadena cno el apellido en MAYUSC y el nombre en minusc
 y la longitud de esta. El programa termina cuando el
usuario indique una condición de fin de ingreso de datos. 
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char nombre[30];
char apellido[30];
int i=0;

char nomYApe[60];
int main(){
	//strcat( <cadena_destino>, cadena_fuente> ) 
	printf("Ingrese el nombre: \n");
	fgets(nombre, sizeof(nombre), stdin); 
	while (nombre[i]) {
 	nombre[i] = tolower(nombre[i]);
 	i++;
 	}
	//tolower(nombre);
	strcat(nomYApe, nombre);
	printf("Ingrese el apellido: \n");	
	fgets(apellido, sizeof(apellido), stdin);
	while (apellido[i]) {
 	apellido[i] = toupper(apellido[i]);
 	i++;
 	}
	//toupper(apellido);
	strcat(nomYApe, ",");
	strcat(nomYApe, apellido);
	printf("NOMBRE Y APELLIDO %s \n %s \n %s ",nomYApe, nombre, apellido);
	
	return 0;
}

