#include <stdio.h>

int main() {
    //Constantes y variables
    float pulgadas = 0.0;
    const float PULGADAS_CM = 2.54;
    float PI = 3.14159;

    //DATOS DE ENTRADA
    printf("Ingrese las pulgadas: \n");
    scanf("%f", &pulgadas);

    //PROCESO PARA TRASNFORMAR DE PULGADAS A CM
    float cm = pulgadas * PULGADAS_CM;

    //EVALUACIÓN CM > 0
    if(cm > 0){
        float resultado = cm * PI;

        printf("%.2f pulgadas equivalen a %.2f cm\n", pulgadas, cm);
        printf("El producto del resultado por PI es: %.2f\n", resultado);
        printf("Tipo de operacion realizada: Conversion de pulgadas a cm y producto por PI.\n");
    } else {
        printf("Error: La medida ingresada debe ser mayor a 0.\n");
    
    
}


    return 0;
}