#include <stdio.h>

int main(void) {
    int p1, p2, p3, e, tp;

    printf("Ingrese la calificacion de sus parciales: ");
    scanf("%d", &p1);
    scanf("%d", &p2);
    scanf("%d", &p3);

    printf("Ingrese la calificacion de su examen: ");
    scanf("%d", &e);

    printf("Ingrese la calificacion de su tp: ");
    scanf("%d", &tp);

    double ctp = (p1 + p2 + p3) / 3;
    double nota = ctp * 0.55 + e * 0.30 + tp * 0.15;

    printf("Tu calificacion final en la materia de algoritmos es: %.2f", nota);
}