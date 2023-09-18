#include <stdio.h>
#include <math.h>

int main(){
    int x = 0, y = 0, z = 0, numero = 0, contador = 100;
    printf("Ingrese un numero: \n");
    scanf("%d", &numero);
    if (numero < 100 || numero > 999){
        printf("El numero no es de 3 digitos\n");
        return 0;
    }
    x = numero / 100;
    y = (numero % 100) / 10;
    z = numero % 10;
    while (contador <= 999){
        if (contador == x * pow(10, 2) + y * pow(10, 1) + z * pow(10, 0)){
            printf("%d\n", contador);
        }
        else if (contador == x * pow(10, 2) + z * pow(10, 1) + y * pow(10, 0)){
            printf("%d\n", contador);
        }
        else if (contador == y * pow(10, 2) + x * pow(10, 1) + z * pow(10, 0)){
            printf("%d\n", contador);
        }
        else if (contador == y * pow(10, 2) + z * pow(10, 1) + x * pow(10, 0)){
            printf("%d\n", contador);
        }
        else if (contador == z * pow(10, 2) + x * pow(10, 1) + y * pow(10, 0)){
            printf("%d\n", contador);
        }
        else if (contador == z * pow(10, 2) + y * pow(10, 1) + x * pow(10, 0)){
            printf("%d\n", contador);
        }
        contador++;
    }
    return 0;
}