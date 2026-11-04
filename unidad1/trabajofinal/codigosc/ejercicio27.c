#include <stdio.h>
#include <math.h>

int main() {
    float x1 = 0.0, y1 = 0.0;
    float x2 = 0.0, y2 = 0.0;
    
    printf("Ingrese la coordenada x1 y y1: \n");
    scanf("%f %f", &x1, &y1);

    printf("Ingrese la coordenada x2 y y2: \n");
    scanf("%f %f", &x2, &y2);

    float distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (distancia > 0) {
        float cuadrado_distancia = pow(distancia, 2);
        
        printf("\nLa distancia euclidiana es: %.2f\n", distancia);
        printf("El cuadrado de la distancia es: %.2f\n", cuadrado_distancia);

        printf("\n--- Variables Auxiliares ---\n");
        printf("x1 = %.2f\n", x1);
        printf("y1 = %.2f\n", y1);
        printf("x2 = %.2f\n", x2);
        printf("y2 = %.2f\n", y2);
        printf("distancia = %.2f\n", distancia);
        printf("cuadrado_distancia = %.2f\n", cuadrado_distancia);
    } else {
        printf("\nERROR: La distancia es 0\n");
    }

    return 0;

}