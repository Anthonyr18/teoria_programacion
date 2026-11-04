#include <stdio.h>

int main() {
    float lado1 = 0.0;
    float lado2 = 0.0;
    float lado3 = 0.0;
    float perimetro = 0.0;
    
    int divisor, dividendo, resto = 0;


    //DATOS DE ENTRADA
    printf("Ingrese el lado 1 del triangulo: ");
    scanf("%f", &lado1);
    
    printf("Ingrese el lado 2 del triangulo: ");
    scanf("%f", &lado2);
    
    printf("Ingrese el lado 3 del triangulo: ");
    scanf("%f", &lado3);

    printf("Ingrese el dividendo (entero) para la division: ");
    scanf("%d", &dividendo);
    
    printf("Ingrese el divisor (entero diferente de 0): ");
    scanf("%d", &divisor);

    // 2. Procesos y cálculos
    perimetro = lado1 + lado2 + lado3;
    
    if (divisor != 0) {
         resto = dividendo % divisor;
    }
    
    // 3. Mostrar resultados y validaciones
    if (lado1 > 0.0f && lado2 > 0.0f && lado3 > 0.0f) {
        printf("Estado: Lados validos (todos mayores a 0).\n");
    } else {
        printf("Estado: Alerta, al menos un lado no es positivo.\n");
    }

    printf(" El Perimetro del triangulo: %.2f\n", perimetro);
    
    if (divisor != 0) {
        printf("Resto de la division es: %d\n", resto);
    } else {
        printf("Resto de la division: Error (division por cero).\n");
    }

    // 4. Mensaje de confirmación final
    printf("\nOperacion finalizada con exito.\n");

    return 0;
}