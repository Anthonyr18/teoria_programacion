#include <stdio.h>

int main () {
    int cant_doc, cant_imag, cant_videos, cant_prog = 0;
    float tam_doc, tam_imag, tam_videos, tam_prog = 0.0;
    int capacidad_del_disco = 0;

    printf("Ingrese la cantidad y tamano de documentos: ");
    scanf("%d %f", &cant_doc, &tam_doc);

    printf("Ingrese la cantidad y tamano de imagenes: ");
    scanf("%d %f", &cant_imag, &tam_imag);

    printf("Ingrese la cantidad y tamano de videos: ");
    scanf("%d %f", &cant_videos, &tam_videos);

    printf("Ingrese la cantidad y tamano de programas: ");
    scanf("%d %f", &cant_prog, &tam_prog);

    printf("Ingrese la capacidad del disco: ");
    scanf("%d", &capacidad_del_disco);

    float esp_doc = cant_doc * tam_doc;
    float esp_imag = cant_imag * tam_imag;
    float esp_videos = cant_videos * tam_videos;
    float esp_prog = cant_prog * tam_prog;

    float esp_total = esp_doc + esp_imag + esp_videos + esp_prog;
    float GB_total = esp_total / 1024.0;
    float porcentaje_ocupado = (esp_total / capacidad_del_disco) * 100.0;

    printf("El espacio ocupado por cada tipo de archivo es: \n");
    printf("Documentos: %.2f MB\n", esp_doc);
    printf("Imágenes: %.2f MB\n", esp_imag);
    printf("Videos: %.2f MB\n", esp_videos);
    printf("Programas: %.2f MB\n", esp_prog);

    printf("Espacio total ocupado: %.2f MB\n", esp_total);
    printf("Espacio total ocupado en GB: %.2f GB\n", GB_total);
    printf("Porcentaje de espacio ocupado: %.2f%%\n", porcentaje_ocupado);

    return 0;
}
