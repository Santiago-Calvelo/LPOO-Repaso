#include <stdio.h>

int main(void) {
    int s, h, m;

    printf("Ingrese los segundos: ");
    scanf("%d", &s);

    h = s/3600;
    s -= 3600 * h;
    m = s/60;
    s -= 60 * m;

    printf("Horas: %d Minutos: %d Segundos: %d", h, m, s); 
}
