#include <stdio.h>

int main(void) {
	int p;
	printf("Ingrese el total a pagar: ");
	scanf("%d", &p);
	
	printf("Con el descuento deberá pagar: %d", p * 0.15);
}
