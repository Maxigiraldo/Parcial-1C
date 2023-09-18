#include <stdio.h>
int main(){
    int op;
    float CA = 0, CO = 0, H = 0, cos = 0, sen = 0, tan = 0;
    printf("Ingrese el cateto adyacente: \n");
    scanf("%f", &CA);
    printf("Ingrese el cateto opuesto: \n");
    scanf("%f", &CO);
    printf("Ingrese la hipotenusa: \n");
    scanf("%f", &H);
    printf ("Que desea calcular?\n");
    printf ("1. Coseno\n");
    printf ("2. Seno\n");
    printf ("3. Tangente\n");
    scanf ("%d", &op);
    switch (op){
        case 1:
            cos = (CA / H)*1.0;
            printf ("El coseno es: %.2f\n", cos);
            break;
        case 2:
            sen = (CO / H)*1.0;
            printf ("El seno es: %.2f\n", sen);
            break;
        case 3:
            tan = (CO / CA)*1.0;
            printf ("La tangente es: %.2f\n", tan);
            break;
        default:
            printf ("Opcion invalida\n");
            break;
    }
    printf("Desea hallar otra funcion?\n");
    printf("1. Si\n");
    printf("2. No\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        main();
        break;
    }
    printf("\t  \t*\n");
    printf("\t  \t**\n");
    printf("\t  \t* *\n");
    printf("\t%.0f\t*  *\t%.0f\n", CO, H);
    printf("\t  \t*   *\n");
    printf("\t  \t*   θ*\n");
    printf("\t  \t*******\n");
    printf("\t  \t%.0f\t\n", CA);

    switch (sen != 0 || cos != 0 || tan != 0)
    {
    case 1:
        if (sen != 0){
            printf("El seno es: %.2f\n", sen);
        };
        if (cos != 0){
            printf("El coseno es: %.2f\n", cos);
        };
        if (tan != 0){
            printf("La tangente es: %.2f\n", tan);
        }
        break;
    
    default:
        printf("No se ha calculado ninguna funcion\n");
        break;
    }
    return 0;

}