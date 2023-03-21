#include <stdio.h>

int main(void) {
	int n;
	printf("Ingrese el numero: ");
	scanf("%d", &n);
	
	if (n > 0) {
		if (n % 2 == 0) printf("El numero es par");
		else			printf("El numero es impar");
	}
	else printf("El numero debe ser mayor que 0");
}
