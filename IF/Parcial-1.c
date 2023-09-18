#include <stdio.h>

int main(){
    int dia, cantidad;
    char clave;
    float precio, total;
    printf("Bienvenido al supermercado LA REBAJA\n");
    printf("Ingrese el dia de la semana: \n");
    printf("1. Lunes\n");
    printf("2. Martes\n");
    printf("3. Miercoles\n");
    printf("4. Jueves\n");
    printf("5. Viernes\n");
    printf("6. Sabado\n");
    printf("7. Domingo\n");
    scanf("%d", &dia);
    printf("┌───────────────┬───────────────────────┐\n");
    printf("│\tClave\t│\tProducto\t│\n");
    printf("├───────────────┼───────────────────────┤\n");
    printf("│\tF\t│\tFrutas\t\t│\n");
    printf("├───────────────┼───────────────────────┤\n");
    printf("│\tV\t│\tVerduras\t│\n");
    printf("├───────────────┼───────────────────────┤\n");
    printf("│\tJ\t│\tJugueteria\t│\n");
    printf("├───────────────┼───────────────────────┤\n");
    printf("│\tL\t│\tLacteos\t\t│\n");
    printf("├───────────────┼───────────────────────┤\n");
    printf("│\tO\t│\tOtros\t\t│\n");
    printf("└───────────────┴───────────────────────┘\n");
    printf("Ingrese la clave del producto: \n");
    scanf(" %c", &clave);
    if (clave == 'F' || clave == 'f'){
        printf("Ingrese el precio de las frutas: \n");
        scanf("%f", &precio);
        printf("Ingrese la cantidad de productos: \n");
        scanf("%d", &cantidad);
        if (dia == 2){
            total = (precio * cantidad) - ((precio * cantidad) * 0.20);
        }
        else{
            total = precio * cantidad;
        }
    }
    else if (clave == 'V' || clave == 'v'){
        printf("Ingrese el precio de las verduras: \n");
        scanf("%f", &precio);
        printf("Ingrese la cantidad de productos: \n");
        scanf("%d", &cantidad);
        if (dia == 2){
            total = (precio * cantidad) - ((precio * cantidad) * 0.20);
        }
        else{
            total = precio * cantidad;
        }
    }
    else if (clave == 'J' || clave == 'j'){
        printf("Ingrese el precio de los juguetes: \n");
        scanf("%f", &precio);
        printf("Ingrese la cantidad de productos: \n");
        scanf("%d", &cantidad);
        if (dia == 6 || dia == 7){
            total = (precio * cantidad) - ((precio * cantidad) * 0.05);
        }
        else{
            total = precio * cantidad;
        }
    }
    else if (clave == 'L' || clave == 'l'){
        printf("Ingrese el precio de los lacteos: \n");
        scanf("%f", &precio);
        printf("Ingrese la cantidad de productos: \n");
        scanf("%d", &cantidad);
        if (dia == 1){
            total = (precio * cantidad) - ((precio * cantidad) * 0.10);
        }
        else{
            total = precio * cantidad;
        }
    }
    else if (clave == 'O' || clave == 'o'){
        printf("Ingrese el precio de los otros productos: \n");
        scanf("%f", &precio);
        printf("Ingrese la cantidad de productos: \n");
        scanf("%d", &cantidad);
        if (dia == 3){
            total = (precio * cantidad) - ((precio * cantidad) * 0.10);
        }
        else{
            total = precio * cantidad;
        }
    }
    else{
        printf("La clave ingresada no es valida\n");
        return 0;
    }
    printf("Desea añadir otro producto?\n");
    printf("1. Si\n");
    printf("2. No\n");
    scanf("%d", &dia); // Reutilizo la variable dia para no crear otra
    if (dia == 1){
        main();
    };
    printf("El total a pagar es: %.0f\n", total);
    return 0;
}