#include <stdio.h>

int main(void) {
	int n;
	printf("Ingrese su numero: ");
	scanf("%d", &n);
	int a = 0;
	int i = 0;
	int c = 0;
	
	while (i != 1) {
		if (a + (a+1) + (a+2) == n) {
			c = a;
			i++;
		}
		a++;
	}
	printf("%d %d %d", c, c+1, c+2);
	
}
