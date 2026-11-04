#include <stdio.h>

int main() {
    float x = 0.0;
    const float LIMITE_INF = 2.5;
    const float LIMITE_SUP = 25;
    const float PI = 3.1416;
    int en_rango = 0;

    printf("Ingrese un numero real: ");
    scanf("%f", &x);

    en_rango = (x >= LIMITE_INF && x <= LIMITE_SUP);

    if (en_rango == 1) {
        printf("El numero esta en el rango.\n");
    } else {
        printf("El numero no esta en el rango.\n");
    }

    float producto = en_rango * PI;

    printf("El producto por PI es: %.4f\n", producto);

    return 0;
}