#include <stdio.h>

int main()
{
    //Declaracion de variables
    char a[20];
    int con = 0;

    //Se pide al usuario la palabra
    printf("Ingrese una palabra: ");
    scanf("%s", a);

    //Se recorre el string sumando 1 a la variable colectora por cada letra
    for(int i = 0; i < 20 && a[i]!='\0'; i++)
    {
        con++;
    }

    //Se imprime la cantidad de letras
    printf("\nCantidad de letras: %d", con);
    return 0;
}