//GUIA MANEJO STRINGS EJERCICIO 5
//El usuario ingresa una palabra.
//Mostrar en pantalla cuántas vocales minúsculas y mayúsculas contiene.

#include <stdio.h>

int main()
{
    char A[20] = {0}; //Se declara las variables
    int contador1 = 0;
    int contador2 = 0;
    
    printf("Ingrese una palabra: "); //Se solicita el ingreso de una palabra
    scanf("%s", A);
    
    for (int i = 0; i < 20; i++) //Recorro el string y sumo 1 al contador1 por cada coincidencia con el codigo ASCII, lo mismo con el contador2
    {
        if (A[i] == 97 || A[i] == 101 || A[i] == 105 || A[i] == 111 || A[i] == 117)
        {
            contador1++;
        }
        
        else if (A[i] == 65 || A[i] == 69 || A[i] == 73 || A[i] == 79 || A[i] == 85)
        
        {
            contador2++;
        }
    }
    
    printf("\nCantidad de vocales minusculas: %d", contador1); //Se muestra en pantalla la cantidad de vocales minúsculas y mayúsculas en la palabra ingresada
    puts("\n");
    printf("Cantidad de vocales mayusculas: %d", contador2);
    
    return 0;
}