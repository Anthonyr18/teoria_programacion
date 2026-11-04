#include <stdio.h>

int main() {
    int m, y, num2 = 0.0;
    int suma = 0.0;
    int producto = 0.0;
    float promedio = 0.0;

    printf("Ingrese el numero m: ");
    scanf("%d", &m);

    printf("Ingrese el numero y: ");
    scanf("%d", &y);

    printf("Ingrese el numero num2: ");
    scanf("%d", &num2);

    suma = m + y + num2;
    producto = m * y * num2;
    promedio = (m + y + num2) / 90.0;

    printf("La suma es %d, el producto es %d y el promedio es %2f\n", suma, producto, promedio);

    return 0;
}