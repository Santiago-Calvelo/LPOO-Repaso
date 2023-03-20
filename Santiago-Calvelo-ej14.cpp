#include <stdio.h>

int main(void) {
    int n;

    printf("Ingrese su numero: ");
    scanf("%d", &n);

    printf("Valor absoluto %d", n < 0 ? -n : n);
}

