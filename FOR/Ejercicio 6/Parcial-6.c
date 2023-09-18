#include <stdio.h>

int main(){
    int columna = 0, filas = 0, contador = 0, letras = 0;
    char letra = 'A';
    printf("Ingrese el numero de filas: \n");
    scanf("%d", &filas);
    if (filas < 1 || filas > 26){
        printf("El numero de filas no es valido\n");
        return 0;
    }
    for (contador = 0; contador < filas; contador++){
        for (columna = 0; columna <=  filas - contador - 1; columna++){
            printf(" ");
        }
        for (letras = 0; letras < contador * 2 + 1; letras++){
            printf("%c", letra);
        }
        printf("\n");
        letra++;
    }
    return 0;
}