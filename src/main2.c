/* main2.c */

#include <stdio.h>
#include "vector.h"

Vector v1 = {1, 2};
Vector v2 = {3, 4};
Vector v3;
Vector v4;
int main()
{
	printf("v1 = [%d %d]\n", v1.x, v1.y);
	printf("v2 = [%d %d]\n", v2.x, v2.y);
	addvec(&v1, &v2, &v3);
	multvec(&v1, &v2, &v4);
	printf("Uso de la fuunción addvec:\n");
	printf("v3 =[%d %d]\n", v3.x, v3.y);
	printf("\n");
	printf("Uso de la función multvec: \n");
	printf("v4 = [%d %d]\n", v4.x, v4.y);
	return 0;
}
