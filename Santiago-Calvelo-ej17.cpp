#include <stdio.h>

int main(void) {
	int e;
	double p;
	char c;
	
	printf("Indique su edad: ");
	scanf("%d", &e);
	
	printf("Indique su peso: ");
	scanf("%lf", &p);
	
	printf("Indique si es hombre o mujer (h/m): ");
	scanf("%s", &c);
	
	if (c == 'h') printf("Tu FCM es: %.2f", (210 -	(0.5 * e) - (p * 0.01)) + 4);
	if (c == 'm') printf("Tu FCM es: %.2f", (210 - (0.5 * e)) - (p * 0.01));
}
