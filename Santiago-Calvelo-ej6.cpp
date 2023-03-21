#include <stdio.h>

int main(void) {
	int a;
	int impuesto = 0;
	
	printf("Ingrese su alquiler: ");
	scanf("%d", &a);
	
	if (a <= 202) {
		impuesto = a * 0;
		printf("El impuesto por concepto de alquiler es de %d", impuesto);
	} else if (202 < a <= 607) {
		impuesto = a * 0.05;
		printf("El impuesto por concepto de alquiler es de %d", impuesto);
	} else if (607 < a <= 1013) {
		impuesto = a * 0.10;
		printf("El impuesto por concepto de alquiler es de %d", impuesto);
	} else if (1013 < a <= 1418) {
		impuesto = a * 0.15;
		printf("El impuesto por concepto de alquiler es de %d", impuesto);
	} else if (1418 < a) {
		impuesto = a * 0.25;
		printf("El impuesto por concepto de alquiler es de %d", impuesto);
	}
}
