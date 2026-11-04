#include <stdio.h>

int main() {
    // Declaración de todas las variables y constantes al inicio
    float cuenta = 0.0f;
    float propina = 0.0f;
    float monto_propina = 0.0f;
    float total = 0.0f;
    int propina_valida = 0;
    int total_entero = 0;
    const int LITERAL_CIEN = 100;

    // 1. Lectura de datos por teclado
    printf("Ingrese el monto de la cuenta: ");
    scanf("%f", &cuenta);
    
    printf("Ingrese el porcentaje de propina: ");
    scanf("%f", &propina);
    
    // 2. Procesos y cálculos
    monto_propina = (cuenta * propina) / LITERAL_CIEN;
    total = cuenta + monto_propina;
    
    // Validación de rango (0% a 30%)
    propina_valida = (propina >= 0.0f && propina <= 30.0f);

    // 3. Mostrar resultados y desglose en pantalla
    printf("\n--- DESGLOSE ---\n");
    printf("Propina: $%.2f\n", monto_propina);
    printf("Total a pagar: $%.2f\n", total);
    
    if (propina_valida) {
        printf("Estado: Propina dentro del rango normal.\n");
    } else {
        printf("Estado: Alerta, propina fuera del rango habitual.\n");
    }
    
    // 4. Conversión y verificación de paridad del total entero
    total_entero = (int)total;
    if (total_entero % 2 == 0) {
        printf("El total entero ($%d) es un numero PAR.\n", total_entero);
    } else {
        printf("El total entero ($%d) es un numero IMPAR.\n", total_entero);
    }

    return 0;
}