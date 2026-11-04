#include <stdio.h>

int main() {
    int z;
    const int DOS = 2;
    int es_negativo_par;
    float promedio, diferencia;

    printf("Ingrese un numero entero: ");
    scanf("%d", &z);

    es_negativo_par = (z < 0) && (z % DOS == 0);

    if (es_negativo_par == 1) {
        printf("El numero es negativo y par\n");
    } else {
        printf("El numero no es negativo y par\n");
    }

    promedio = (z + DOS) / 2.0;
    diferencia = z - promedio;

    printf("El promedio es: %.2f\n", promedio);
    printf("La diferencia es: %.2f\n", diferencia);

    return 0;
}