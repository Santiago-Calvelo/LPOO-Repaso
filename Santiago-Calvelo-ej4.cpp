#include <stdio.h>

int main(void) {
	int p1,p2,p3,nt;
	printf("Ingrese la nota de sus pruebas: ");
	scanf("%d", &p1);
	scanf("%d", &p2);
	scanf("%d", &p3);
	
	printf("Ingrese la nota de su tarea: ");
	scanf("%d", &nt);
	
	int prom = (p1+p2+p3+nt)/4;
	
	if (prom >= 6) printf("El alumno aprobo");
	else		   printf("El alumno desaprobo");
}
