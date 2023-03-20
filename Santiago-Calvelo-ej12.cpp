#include <stdio.h>

int main(void) {
    double s, v, c;

    printf("Ingrese el sueldo: ");
    scanf("%lf", &s);

    for (int i = 1; i <= 3; i++) {
        printf("Venta %d: ", i);
        scanf("%lf", &v);
        c += v;
    }
    s += c * 0.10;
    printf("El sueldo final es de: %.2f", s);
}