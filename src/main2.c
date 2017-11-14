/* main2.c */

#include <stdio.h>
#include "vector.h"

/*Crear los vectores*/
Vector v1;
Vector v2;
Vector v3;
Vector v4;
int main(){
	/*Crear los vectores*/
	Vector v1, v2, v3, v4;

	/*Pedir y asignar los valores de los vectores v1 y v2*/
	printf("Ingrese la coordenada en x del vector v1: ");
	scanf("%d", &v1.x);
	printf("Ingrese la coordenada en y del vector v1: ");
	scanf("%d", &v1.y);
	printf("Ingrese la coordenada en x del vector v2: ");
	scanf("%d", &v2.x);
	printf("Ingrese la coordenada en y del vector v2: ");
	scanf("%d", &v2.y);

	printf("\nLos vectores ingresados son: \n");
	printf("\tv1 = [%d %d]\n", v1.x, v1.y);
	printf("\tv2 = [%d %d]\n", v2.x, v2.y);

	/*uso de las funciones*/
	addvec(&v1, &v2, &v3);
	multvec(&v1, &v2, &v4);
	printf("\nUso de la función addvec:\n");
	printf("\tv3 = [%d %d]\n", v3.x, v3.y);

	printf("\nUso de la función multvec: \n");
	printf("\tv4 = [%d %d]\n", v4.x, v4.y);

	return 0;
}
