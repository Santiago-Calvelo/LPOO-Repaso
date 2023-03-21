#include <stdio.h>

int main(void) {
	int a, b, c;
	printf("Ingrese sus tres numeros: ");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	printf("Su promedio es: %d", (a+b+c)/3);
}
