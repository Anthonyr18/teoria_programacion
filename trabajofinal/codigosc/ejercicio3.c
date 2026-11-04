#include <stdio.h>

void main() {
    //variables para el area del circulo
    float area = 0.0;
    const float PI = 3.14159;
    float radio = 0.0;

    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio);

    area = PI * radio * radio;

    printf("El area del circulo es: %f\n", area);

    //variables para el resto de la divison
    int dividendo = 0;
    int divisor = 0;   
    int resto = 0;

    printf("Ingrese el dividendo: ");
    scanf("%d", &dividendo); 
    
    printf("Ingrese el divisor: ");
    scanf("%d", &divisor);

    resto = dividendo % divisor;

    printf("El resto de la division es: %d\n", resto);
    printf("Las Operaciones fueron realizadas con exito\n");

    return 0;
}
