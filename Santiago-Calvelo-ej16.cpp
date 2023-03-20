#include <stdio.h>

int main (void) {
    double p, c;

    printf("Ingrese el monto en pesos: ");
    scanf("%lf", &p);

    printf("Ingrese el precio del dolar: ");
    scanf("%lf", &c);

    printf("Los dolares totales serian: %.2f", p / c);
}