#include <stdio.h>
#include <string.h>

int main(){
    
    int id;
    char nombre;
    int stock;
    float precio;
    float ganancias = 0.0f;

    printf("\n|----- Registro de Tienda -----|\n");

    printf("Ingrese el ID del producto:");
    scanf("&d", &id);

    printf("Ingrese el nombre del producto:");
    scanf(" %[^\n]", nombre);

    printf("Ingrese la cantidad en stock:");
    scanf("%d", &stock);

    printf("Ingrese el precio unitario en dolares:");
    scanf("%f" , &precio);
    return 0;
}