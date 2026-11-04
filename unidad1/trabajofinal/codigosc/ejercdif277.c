#include <stdio.h>

// Constantes simbólicas
#define PORCENTAJE_MAX_HORMIGA 0.10
#define DESC_PREVENTIVO 0.30

int main() {
    float ingreso_mensual, gasto_fijo, monto_promedio, gasto_hormiga;
    int num_compras, resto_division;
    char tipo_gasto;
    int supera_limite;

    printf("Ingrese el ingreso mensual real: ");
    scanf("%f", &ingreso_mensual);
    
    printf("Ingrese el gasto fijo real: ");
    scanf("%f", &gasto_fijo);
    
    printf("Ingrese el numero de compras pequenias (entero): ");
    scanf("%d", &num_compras);
    
    printf("Ingrese el monto promedio por compra: ");
    scanf("%f", &monto_promedio);
    
    // Espacio antes de %c para limpiar el búfer de entrada
    printf("Ingrese el tipo de gasto ('C' cafe, 'A' alimentacion, 'T' transporte, 'O' ocio): ");
    scanf(" %c", &tipo_gasto);

    // Cálculo principal del gasto hormiga total
    gasto_hormiga = ((float)num_compras * monto_promedio);

    // Evaluación lógica correctamente parentizada
    supera_limite = ((gasto_hormiga) > ((ingreso_mensual) * (PORCENTAJE_MAX_HORMIGA)));

    // Cálculo del resto de una división adicional (usando enteros para el operador módulo)
    resto_division = ((int)ingreso_mensual) % ((int)gasto_hormiga > 0 ? (int)gasto_hormiga : 1);

    // Mostrar análisis por pantalla
    printf("\n--- ANALISIS DE GASTOS HORMIGA ---\n");
    printf("Gasto hormiga total: %.2f\n", gasto_hormiga);
    printf("Tipo de gasto: %c\n", tipo_gasto);
    printf("Supera el 10%% permitido del ingreso: %s\n", supera_limite ? "SI" : "NO");
    printf("Residuo de division adicional: %d\n", resto_division);

    // Estructura de decisión basada en la evaluación lógica
    if (supera_limite) {
        printf("Alerta: Sus gastos hormiga son elevados. Se sugiere aplicar el descuento preventivo (%.0f%%).\n", DESC_PREVENTIVO * 100);
    } else {
        printf("Estado: Sus gastos hormiga se encuentran dentro del rango permitido.\n");
    }

    return 0;
}