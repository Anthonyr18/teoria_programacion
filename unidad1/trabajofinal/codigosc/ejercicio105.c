#include <stdio.h>

int main() {
    const int simbolica = 2.0;
    float calif_1 = 0.0;
    float calif_2 = 0.0; 
    float calif_3 = 0.0;

    printf("Ingrese la primera calificacion: ");
    scanf("%f", &calif_1);
    printf("Ingrese la segunda calificacion: ");
    scanf("%f", &calif_2);
    printf("Ingrese la tercera calificacion: ");
    scanf("%f", &calif_3);

    float menor = calif_1;
    if (calif_2 < menor) {
        menor = calif_2;
    }
    if (calif_3 < menor) {
        menor = calif_3;
    }

    float suma = calif_1 + calif_2  + calif_3;
    float promedio = (suma - menor) / 2;
    
    // Uso de la constante simbólica
   float resultado = promedio / simbolica;

    printf("El promedio final es: %.2f\n", promedio);
    printf("El resultado dividido es: %.2f\n", resultado);

    printf("Operacion realizada con exito\n");

    return 0;
}