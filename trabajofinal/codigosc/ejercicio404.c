#include <stdio.h>

int main() {
    float capital = 0.0;
    float interes_anual = 0.0;
    int tiempo = 0;

    // Lectura de datos 
    printf("Ingrese el capital (real): ");
    scanf("%f", &capital);
    printf("Ingrese el interes anual (real): ");
    scanf("%f", &interes_anual);
    printf("Ingrese el tiempo en anos (entero): ");
    scanf("%d", &tiempo);

    // Proceso 
    float interes_generado = (capital * interes_anual * tiempo) / 100.0f;
    float monto_total = capital + interes_generado;

    // Salida y Desglose
    printf("\n--- SALIDA Y DESGLOSE ---\n");
    printf("El interes generado es: %.2f\n", interes_generado);
    printf("El monto_total es: %.2f\n", monto_total);
    printf("Capital es: %.2f\n", capital);
    printf("Interes es: %.2f\n", interes_anual);
    printf("Tiempo es: %d\n", tiempo);

    //Condición
    if ((int)monto_total % 2 == 0) {
        printf("El monto_total es par\n");
    } else {
        printf("El monto_total es impar\n");
    }

    return 0;
}