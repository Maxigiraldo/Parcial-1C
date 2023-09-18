#include <stdio.h>
#include <math.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int filastotales = pow(3, n); 

    for (int fila = 0; fila < filastotales; fila++) {
        for (int espacio = 0; espacio < filastotales - fila - 1; espacio++) {
            printf(" "); 
        }

        for (int columna = 0; columna <= fila; columna++) {
            if ((columna & fila) == columna) {
                printf("* "); 
            } else {
                printf("  ");
            }
        }

        if (fila == filastotales - 1) {
            for (int i = 0; i < filastotales; i++) {
                printf("* ");
            }
        }

        printf("\n");
    }

    return 0;
}

