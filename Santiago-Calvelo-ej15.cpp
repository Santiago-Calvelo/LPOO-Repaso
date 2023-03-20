#include <stdio.h>

int main(void) {
    int n, h, m;

    printf("Ingrese cuantos estudiantes tiene el grupo: ");
    scanf("%d", &n);

    printf("Ingrese cuantos son hombres: ");
    scanf("%d", &h);

    printf("Ingrese cuantas son mujeres: ");
    scanf("%d", &m);

    if (h+ m == n) {
        int porcentaje_h = (h*100)/n;
        int porcentaje_m = (m*100)/n;

        printf("El porcentaje de hombres es de %d%% y el de mujeres %d%%", porcentaje_h, porcentaje_m);
    } else {
        printf("La suma de hombres y mujeres debe ser la misma que la cantidad de alumnos");
        return 0;
    }
}