#include <stdio.h>

int main(){
    int contador = 1, ntermino = 0;
    float suma = 0, termino1 = 0, termino2 = 0, termino = 0;
    printf("Ingrese el numero de terminos: \n");
    scanf("%d", &ntermino);
    while(contador < ntermino){
        termino1 = (2 * contador) - 1.0;
        termino2 = contador * contador;
        printf("%.0f/%.0f\t+\t", termino1, termino2);
        termino = termino1 / termino2;
        suma += termino;
        contador++;
        }
    termino1 = (2 * contador) - 1.0;
    termino2 = contador * contador;
    printf("%.0f/%.0f\n", termino1, termino2);
    termino = termino1 / termino2;
    suma += termino;
    printf("Total: %.3f\n", suma);
    return 0;
}