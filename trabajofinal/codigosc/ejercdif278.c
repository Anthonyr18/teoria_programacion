
#include <stdio.h>

int main() {

    // Constantes simbolicas
    const float PRECIO_M2_B = 1.0;
    const float PRECIO_M2_P = 2.0;
    const float PRECIO_M2_E = 3.0;

    const float DESC_SEMANAL = 0.10;
    const float DESC_MENSUAL = 0.20;

    // Variables
    float metros, precio, costo, descuento, total;
    char tipo, frecuencia;
    int habitaciones, extras, resto;

    // Datos de entrada
    printf("Ingrese los metros cuadrados: ");
    scanf("%f", &metros);

    printf("Tipo de limpieza (B/P/E): ");
    scanf(" %c", &tipo);

    printf("Frecuencia (U/S/M): ");
    scanf(" %c", &frecuencia);

    printf("Numero de habitaciones: ");
    scanf("%d", &habitaciones);

    printf("Servicios extra: ");
    scanf("%d", &extras);

    // Determinar precio
    if (tipo == 'B') {
        precio = PRECIO_M2_B;
    } else if (tipo == 'P') {
        precio = PRECIO_M2_P;
    } else {
        precio = PRECIO_M2_E;
    }

    // Calcular costo
    costo = metros * precio;

    // Calcular descuento
    descuento = 0;

    if (frecuencia == 'S') {
        descuento = costo * DESC_SEMANAL;
    } else if (frecuencia == 'M') {
        descuento = costo * DESC_MENSUAL;
    }

    // Calcular total
    total = costo - descuento
          + (habitaciones * 2)
          + (extras * 5);

    // Division adicional
    resto = extras % 2;

    // Mostrar resultados
    printf("\n--- DETALLE DE LIMPIEZA ---\n");
    printf("Metros cuadrados: %.2f\n", metros);
    printf("Tipo de limpieza: %c\n", tipo);
    printf("Frecuencia: %c\n", frecuencia);
    printf("Habitaciones: %d\n", habitaciones);
    printf("Servicios extra: %d\n", extras);
    printf("Costo base: %.2f\n", costo);
    printf("Descuento: %.2f\n", descuento);
    printf("Costo total: %.2f\n", total);
    printf("Resto de la division: %d\n", resto);

    return 0;
}
