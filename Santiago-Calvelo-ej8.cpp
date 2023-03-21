#include <stdio.h>

int main(void) {
	double n;
	
	printf("Escriba el monto que quiere ingresar: ");
	scanf("%lf", &n);
	
	printf("Pasado un mes, su dinero seria: %.2f", n + n * 0.02);
}
