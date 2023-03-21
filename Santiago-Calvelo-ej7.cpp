#include <stdio.h>

int main(void) {
	int h;
	int m;
	printf("Ingrese la hora en formato 24, sin los minutos: ");
	scanf("%d", &h);
	printf("Ingrese los minutos: ");
	scanf("%d", &m);
	
	if(h <= 24 && h >= 0) {
		if (h >= 12) {
			if (h != 12) {
				h -= 12;
				printf("Son las %d:%d pm", h, m);				
			}
			else printf("Son las %d:%d pm", h, m);
		}
		else printf("Son las %d:%d am", h, m);
	}
	
}
