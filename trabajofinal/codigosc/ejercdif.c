#include <stdio.h>
#include <math.h> // Necesario para la función log10

int main() {
    // Definición de Constantes Simbólicas
    const float TARIFA_BASICA = 5.0;
    const float CONSUMO_MIN = 10.0;
    const float TARIFA_EXCESO = 0.5;
    const float DESCUENTO_FAMILIAR = 0.10;

    // Declaración e Inicialización estricta de Variables
    float lectura_anterior = 0.0;
    float lectura_actual = 0.0;
    float consumo_total = 0.0;
    float costo_total = 0.0;
    float log_resultado = 0.0;
    int num_personas = 1;
    int excede_minimo = 0;
    int familia_numerosa = 0;

    // Lectura de Datos de Entrada
    printf("Ingrese la lectura anterior (real): ");
    scanf("%f", &lectura_anterior);
    
    printf("Ingrese la lectura actual (real): ");
    scanf("%f", &lectura_actual);
    
    printf("Ingrese el numero de personas (entero): ");
    scanf("%d", &num_personas);

    // Procesos y Expresiones Aritméticas/Lógicas
    consumo_total = lectura_actual - lectura_anterior;
    
    excede_minimo = (consumo_total > CONSUMO_MIN);
    familia_numerosa = (num_personas >= 4);

    if (excede_minimo) {
        costo_total = TARIFA_BASICA + ((consumo_total - CONSUMO_MIN) * TARIFA_EXCESO);
    } else {
        costo_total = TARIFA_BASICA;
    }

    if (familia_numerosa) {
        costo_total = costo_total - (costo_total * DESCUENTO_FAMILIAR);
    }

    log_resultado = log10(costo_total + 1.0);

    // Salida por pantalla
    printf("=========================================\n");
    printf("Consumo Total (m3): %.2f\n", consumo_total);
    printf("Costo Total Final ($): %.2f\n", costo_total);
    printf("Logaritmo Base 10 del Resultado: %.4f\n", log_resultado);
    printf("=========================================\n");

    return 0;
}