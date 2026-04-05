#include <stdio.h>
#include <string.h>

int main(){
    
    int opcion;
    int id;
    char nombre[50];
    int stock;
    float precio;
    float ganancias = 0.0f;

    printf("\n|----- Registro de Tienda -----|\n");

    printf("Ingrese el ID del producto:");
    scanf("%d", &id);

    printf("Ingrese el nombre del producto:");
    scanf(" ");
    fgets(nombre, sizeof(nombre), stdin);
    nombre[strcspn(nombre, "\n")] = '\0';

    printf("Ingrese la cantidad en stock:");
    scanf("%d", &stock);

    printf("Ingrese el precio unitario en dolares:");
    scanf("%f" , &precio);

    do{
        printf("\n|-----Menu del producto-----|\n");
        printf("1) Vender producto\n");
        printf("2) Reabastecer el stock\n");
        printf("3) Informacion del producto\n");
        printf("4) Ganacias acumuladas\n");
        printf("5) Salir\n");
        printf("-------------------------------\n");
        printf("Seleccione una opcion\n");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1: 
            printf("\n|-----Vender Producto-----|\n");
            break;
        case 2: 
            printf("\n|-----Reabastecer El Stock-----|\n");
            break;
        case 3: 
            printf("\n|-----Informacion del Producto-----|\n");
            break;
        case 4: 
            printf("\n|-----Ganancias Acumuladas-----|\n");
            break;
        case 5: 
            printf("\nAdios...\n");
            break;

        default:
            printf("Opcion no valida.\n");
            printf("Selecione una opcion valida\n");
            break;
        }


    }while (opcion !=5);

    return 0;
}