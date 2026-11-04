#include <stdio.h>

#define FACTOR 0.5556
#define OFFSET 32.0

int main() {
    double fahrenheit = 0.0;
    double celsius = 0.0;
    int dividendo = 0;
    int divisor = 0;
    int resto = 0;

    printf("Ingrese la temperatura en grados Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    celsius = ((fahrenheit - OFFSET) * FACTOR);

    if (celsius > -273.15) {
        printf("%.2lf grados F equivalen a %.2lf grados C\n", fahrenheit, celsius);
    } else {
        printf("Advertencia: Temperatura por debajo de -273.15 \n");
    }

    printf("Ingrese el dividendo: ");
    scanf("%d", &dividendo);
    printf("Ingrese el divisor: ");
    scanf("%d", &divisor);

    if (divisor != 0) {
        resto = dividendo % divisor;
        printf("El resto de la division es: %d\n", resto);
    } else {
        printf("Error: Division entre cero.\n");
    }
    printf("------MENSAJE MOTIVACIONAL------\n");
    printf("¡El exito es la suma de pequenos esfuerzos repetidos dia tras dia!\n");

    return 0;
}