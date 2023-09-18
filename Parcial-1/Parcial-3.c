#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int contador = 9;
    long long telefono = 0;
    while (contador > 0){
        if (contador == 9){
            telefono += 3 * pow(10, contador);
            contador--;
        }
        else{
            telefono += ((rand() % 10)* pow(10, contador - 1));
            contador--;
        }
    }
    printf("%lld", telefono);
    return 0;
}