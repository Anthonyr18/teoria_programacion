#include <stdio.h>

int main () {
    char nombre_persona1[50];
    char nombre_persona2[50];
    char nombre_persona3[50];
    int nacimiento1 = 0;
    int nacimiento2 = 0;
    int nacimiento3 = 0;
    int anio_actual = 0;
    float media_aritmetrica = 0.0;
    const int MAYORIA_EDAD = 18;

    printf("Ingrese el anio actual: ");
    scanf("%d", &anio_actual);

    printf("Ingrese el Nombre de la persona1: \n");
    scanf("%s", nombre_persona1);
    printf("Ingrese anio de nacimiento: \n");
    scanf("%d", &nacimiento1);

    printf("Ingrese el Nombre de la persona2: \n");
    scanf("%s", nombre_persona2);
    printf("Ingrese anio de nacimiento: \n");
    scanf("%d", &nacimiento2);

    printf("Ingrese el Nombre de la persona3: \n");
    scanf("%s", nombre_persona3);
    printf("Ingrese anio de nacimiento: \n");
    scanf("%d", &nacimiento3);

    int edad1 = anio_actual - nacimiento1;
    int edad2 = anio_actual - nacimiento2;
    int edad3 = anio_actual - nacimiento3;
     media_aritmetrica = (edad1 + edad2 + edad3) / 3.0;

    printf("          RESULTADOS        \n");
    printf("========================================\n");

    if (edad1 >= MAYORIA_EDAD) {
        printf("%s, tiene %d anios y es MAYOR DE EDAD \n", nombre_persona1, edad1);
    } else {
        printf("%s, tiene %d anios y es MENOR DE EDAD \n", nombre_persona1, edad1);
    }

    if (edad2 >= MAYORIA_EDAD) {
        printf("%s, tiene %d anios y es MAYOR DE EDAD \n", nombre_persona2, edad2);
    } else {
        printf("%s, tiene %d anios y es MENOR DE EDAD \n", nombre_persona2, edad2);
    }

    if (edad3 >= MAYORIA_EDAD) {
        printf("%s tiene %d anios y es MAYOR DE EDAD \n", nombre_persona3, edad3);
    } else {
        printf("%s tiene %d anios y es MENOR DE EDAD \n", nombre_persona3, edad3);
    }

    printf("Media aritmetica: %.2f\n",media_aritmetrica);
    printf("========================================\n");

    return 0;

}