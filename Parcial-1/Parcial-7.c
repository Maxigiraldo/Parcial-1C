#include <stdio.h>

int main(){
    int numero = 0, suma = 0;
    printf("Ingrese un numero: \n");
    scanf("%d", &numero);
    for (int i = 1; i <= numero; i++){
        suma += i;
        if (suma == numero){
            printf("%d", i);
            suma = 0;
            printf("\n");
        }
        else if (suma < numero){            
            printf ("%d", i);
            printf(" + ");
            i--;            
        }
        else if (suma > numero){
            if ((numero - i) + i == numero){
                printf("%d", numero - i);
                printf("\n");
                suma = 0;
            }
            else {
                printf("%d", suma-numero);
                printf("\n");
                suma = 0;
            }
            

        }
    }
    return 0;
}