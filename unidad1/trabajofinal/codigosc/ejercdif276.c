#include <stdio.h>

const float FACTOR_FACIL = 0.9;
const float FACTOR_MEDIO = 1.0;
const float FACTOR_DIFICIL = 1.3;
const float FACTOR_PRINCIPIANTE = 1.5;
const float FACTOR_INTERMEDIO = 1.0;
const float FACTOR_AVANZADO = 0.8;

int main() {
    int paginas, palabras_por_pagina, ppm;
    char dificultad, nivel;
    float factor_d = FACTOR_MEDIO;
    float factor_n = FACTOR_INTERMEDIO;
    
    printf("Ingrese el numero de paginas: ");
    scanf("%d", &paginas);
    
    printf("Ingrese las palabras por pagina: ");
    scanf("%d", &palabras_por_pagina);
    
    printf("Ingrese la velocidad de lectura (palabras/minuto): ");
    scanf("%d", &ppm);
    
    printf("Ingrese la dificultad ('F' Facil, 'M' Media, 'D' Dificil): ");
    scanf(" %c", &dificultad);
    
    printf("Ingrese el nivel del lector ('B' Principiante, 'I' Intermedio, 'A' Avanzado): ");
    scanf(" %c", &nivel);

    /* Asignación de factor por dificultad */
    if (dificultad == 'F' || dificultad == 'f') {
        factor_d = FACTOR_FACIL;
    } else if (dificultad == 'D' || dificultad == 'd') {
        factor_d = FACTOR_DIFICIL;
    } else {
        factor_d = FACTOR_MEDIO;
    }

    /* Asignación de factor por nivel del lector */
    if (nivel == 'B' || nivel == 'b') {
        factor_n = FACTOR_PRINCIPIANTE;
    } else if (nivel == 'A' || nivel == 'a') {
        factor_n = FACTOR_AVANZADO;
    } else {
        factor_n = FACTOR_INTERMEDIO;
    }

    /* Cálculos mediante expresiones aritméticas */
    int total_palabras = paginas * palabras_por_pagina;
    float tiempo_base = (float)total_palabras / ppm;
    float tiempo_estimado = tiempo_base * factor_d * factor_n;
    
    //Resto
    int resto_palabras = total_palabras % ppm;

    /* Resultados */
    printf("\nEl tiempo estimado de lectura es: %.2f minutos\n", tiempo_estimado);
    printf("Resto de palabras excedentes de la division base: %d palabras\n", resto_palabras);

    /* Resumen final */
    printf("\n--- RESUMEN DE DATOS --- \n");
    printf("Paginas: %d\n", paginas);
    printf("Palabras por pagina: %d\n", palabras_por_pagina);
    printf("Total de palabras: %d\n", total_palabras);
    printf("Velocidad: %d palabras/minuto\n", ppm);
    printf("Dificultad seleccionada: %c\n", dificultad);
    printf("Nivel de lector: %c\n", nivel);
    printf("------------------------\n");

    return 0;
}