#include <stdio.h>
#include <math.h>

int main() {
    // CONSTANTES Y VARIABLES
    const float NOTA_MIN = 7.0;
    float nota1 = 0.0;
    float nota2 = 0.0;
    float nota3 = 0.0;
    char nombre_del_estudiante[50];

    // DATOS DE ENTRADA
    printf("Ingrese el nombre del estudiante: \n");
    scanf("%s", nombre_del_estudiante);

    printf("Por favor Ingresa nota1: \n");
    scanf("%f", &nota1);

    printf("Por favor Ingresa nota2: \n");
    scanf("%f", &nota2);

    printf("Por favor Ingresa nota3: \n");
    scanf("%f", &nota3);

    // Proceso: 
    float promedio = (nota1 + nota2 + nota3) / 3.0;

    // SALIDA 
    printf("El Nombre del estudiante es: %s\n", nombre_del_estudiante);
    printf("El promedio del estudiante es: %.2f\n", promedio);

    // EVALUACIÓN DE LA CONDICIÓN 
    if (promedio >= NOTA_MIN) {
        float coseno_resultado = cos(promedio);
        printf("Estado: EL ESTUDIANTE APROBO EL EXAMEN\n");
        printf("Coseno del resultado: %.2f\n", coseno_resultado);
        printf("Tipo de operacion realizada: Evaluacion de rendimiento academico y trigonometria\n");
    } else {
        printf("Estado: EL ESTUDIANTE REPROBO EL EXAMEN\n");
        printf("Tipo de operacion realizada: Evaluacion de rendimiento academico\n");
    }

    return 0;
}