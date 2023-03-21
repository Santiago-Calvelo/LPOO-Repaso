#include <stdio.h>

int main(void) {
	int p = 50;
	int h = 20;
	int c;
	while (p != h*2) {
		p++;
		h++;
		c++;
	}
	
	printf("En %d años el padre tendra el doble de la edad del hijo", c);
}
