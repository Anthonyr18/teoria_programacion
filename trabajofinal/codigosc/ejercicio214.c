#include <stdio.h>
#include <stdbool.h>

int main() {
    char a;                    
    float inverso = 0.0; 

    printf("Ingrese un caracter: ");
    scanf(" %c", &a);

    bool es_digito = (a >= '0' && a <= '9');

    if (es_digito) {
        printf("El caracter %c SI es un digito.\n", a);
    } else {
        printf("El caracter %c NO es un digito.\n", a);
    }

    if (es_digito && a != '0') {
        int valor_numerico = a - '0'; 
        inverso = 1.0 / valor_numerico;
        printf("El inverso multiplicativo del digito es: %.4f\n", inverso);
    } else if (!es_digito) {
        printf("No se calcula inverso multiplicativo (el caracter ingresado no es un digito numerico).\n");
    } else {
        printf("El digito es '0', por lo que no se puede calcular el inverso (division entre cero).\n");
    }

    printf("\n--- RESUMEN DE DATOS ---\n");
    printf("Caracter ingresado (tipo char): '%c'\n", a);
    printf("Resultado logico es_digito (tipo bool): %s\n", es_digito ? "verdadero (true)" : "falso (false)");
    printf("------------------------\n");

    return 0;
}