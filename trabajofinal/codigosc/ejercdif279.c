
#include <stdio.h>

int main() {

    // Constantes simbolicas
    const float HORAS_MIN_ADULTO = 7.0;
    const float HORAS_MIN_NINO = 9.0;
    const int DESPERTARES_MAX = 3;
    const float REM_MIN = 90;
    const float PROFUNDA_MIN = 60;

    // Variables inicializadas
    float horas = 0, rem = 0, profunda = 0;
    int despertares = 0, edad = 0;
    int calidad_sueno = 0, resto = 0;

    // Datos de entrada
    printf("Ingrese las horas dormidas: ");
    scanf("%f", &horas);

    printf("Ingrese las veces que se desperto: ");
    scanf("%d", &despertares);

    printf("Ingrese los minutos de fase REM: ");
    scanf("%f", &rem);

    printf("Ingrese los minutos de fase profunda: ");
    scanf("%f", &profunda);

    printf("Ingrese la edad: ");
    scanf("%d", &edad);

    // Evaluar calidad del sueno
    if (edad < 18) {

        if (horas >= HORAS_MIN_NINO &&
            despertares <= DESPERTARES_MAX &&
            rem >= REM_MIN &&
            profunda >= PROFUNDA_MIN) {

            calidad_sueno = 1;
        } else {
            calidad_sueno = 0;
        }

    } else {

        if (horas >= HORAS_MIN_ADULTO &&
            despertares <= DESPERTARES_MAX &&
            rem >= REM_MIN &&
            profunda >= PROFUNDA_MIN) {

            calidad_sueno = 1;
        } else {
            calidad_sueno = 0;
        }
    }

    // Calcular resto
    resto = despertares % 2;

    // Presentar resultados
    printf("\n--- CALIDAD DEL SUENO ---\n");

    printf("Horas dormidas: %.2f\n", horas);
    printf("Veces que se desperto: %d\n", despertares);
    printf("Fase REM: %.2f minutos\n", rem);
    printf("Fase profunda: %.2f minutos\n", profunda);
    printf("Edad: %d\n", edad);

    if (calidad_sueno == 1) {
        printf("Calidad del sueno: BUENA\n");
    } else {
        printf("Calidad del sueno: BAJA\n");
    }

    printf("Resto de la division: %d\n", resto);

    return 0;
}