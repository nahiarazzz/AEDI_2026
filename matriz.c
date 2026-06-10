/*.Un supermercado cuenta con el importe total facturado en cada mes del año 2023 en sus 6 sucursales.
Desea conocer el mayor monto de venta y a qué sucursal corresponde.
*Nota:
- Utilizar una matriz para almacenar los totales facturados para luego obtener lo requerido.
2.2.Modifique el programa del punto anterior para generar un vector cuyos elementos sean la suma de
ventas mensuales de cada sucursal, a fin de obtener la venta anual por sucursal.
Mostrar en pantalla las ventas de cada sucursal en cada mes, junto al total anual de la sucursal. 
*/

#include <stdio.h>
#include <string.h>

#define IMAX 2
#define JMAX 3
void cargarMatriz();
void calcularMayorMontoVenta();
void calcularVentas();
void mostrarMatriz();
void mostrarMes();
float matriz[IMAX] [JMAX];
float ventas[IMAX];
typedef char string[12];
string meses[12]={"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
int i, j;
int main (){
	cargarMatriz();
	mostrarMatriz();
	calcularMayorMontoVenta();
	calcularVentas();
	

	return 0;
}

void cargarMatriz(){
		i=0; j=0;
	printf("importe total facturado en cada mes del año 2023 \n");
	/*printf("\n sucursales");
		for(j = 0; j < JMAX; j++) {
        printf("%-15s", meses[j]);
    }*/
    
	for (i=0; i<IMAX; i++){
		printf("\n Suc %d      \n ", i + 1);
		for (j=0; j<JMAX; j++){
			printf("\n  %-10s $",meses[j]);
			scanf("%f", &matriz[i][j]);
			
		}
	}
};

void calcularMayorMontoVenta(){
	float montoMax=0;
	int iPosicion, jPosicion;
	i=0; j=0;
	for (i=0;i<IMAX; i++){
		for (j=0; j<JMAX; j++){
			if (matriz[i][j]>montoMax){
				montoMax=matriz[i][j];
				iPosicion=i+1;
				jPosicion=j;
			}
		}
	}
	printf("\n El monto maximo fue de %.2f en el mes %s, en la sucursar %d", montoMax,meses[jPosicion] , iPosicion);
};
void mostrarMatriz(){
	i=0; j=0;
	printf("%-10s", "Sucursal");
	for(j = 0; j < JMAX; j++) {
        printf("%-15s", meses[j]);
    }
	for (i=0;i<IMAX; i++){
		printf("\n Suc %d      ", i + 1);
		for (j=0; j<JMAX; j++){
			
			printf("%-12.2f  $",matriz[i][j]);
		//	printf("",matriz[i][j]);
			
		};
	}
};

void calcularVentas(){
	for (i=0; i<IMAX;i++){
		for (j=0; j<JMAX;j++){
			ventas[i]=ventas[i]+matriz[i][j];
		}
		printf("\n El total de la venta en la sucursal %d fue de %.2f \n", i+1,ventas[i]);
	}
};

