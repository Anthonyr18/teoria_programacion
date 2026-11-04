#include <stdio.h>

int main() {
    // Declaración de todas las variables y constantes al inicio
    float peso = 0.0;
    float distancia = 0.0;
    float costo = 0.0;
    
    
    const float TARIFA_BASE = 5.0;
    const float COSTO_KM = 0.50;


    //ENTRADA DE DATOS
    printf("Ingrese el peso del paquete (kg): ");
    scanf("%f", &peso);
    
    printf("Ingrese la distancia de envio (km): ");
    scanf("%f", &distancia);

    // 2. Procesos y cálculos principales
    costo = TARIFA_BASE + (peso * 2.0f) + (distancia * COSTO_KM);

    // 3. Mostrar resultados y validación
    if (peso > 0 && distancia > 0) {
        printf("Estado: Datos de entrada validos.\n");
    } else {
        printf("Estado: peso o distancia no son positivos.\n");
    }
    printf("Costo de envio calculado: $%.2f\n", costo);

    // 4. Cálculo del triple si el resultado es positivo
    if (costo > 0) {
        float costo_triple = costo * 3;
        printf("El triple del costo de envio es: $%.2f\n", costo_triple);
    } else {
        printf("El costo no es positivo, no se calcula el triple.\n");
    }

    return 0;
}