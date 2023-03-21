#include <stdio.h>

int main (void) {
	int n;
	
	printf("Ingrese la nota: ");
	scanf("%d", &n);
	
	if (n >= 6) {
		if (n >=8) printf("Aprobado, felicitaciones");
		else 	   printf("Aprobado");
	}
	else {
		if (n == 1) printf("Desaprobado, debes esforzarte mas");
		else 		printf("Desaprobado");
	}
}
