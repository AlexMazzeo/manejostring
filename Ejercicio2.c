#include <stdio.h>

int main()
{
    //Declaracion de variables
    char a[20];
    char b;
    int con = 0;
    
    //Se le pide al usuario la palabra
    printf("Ingrese una palabra: ");
    scanf("%s", a);
    
    //se calcula la longitud del string
    for(int i = 0; i < 20 && a[i]!='\0'; i++){
        con++;
    }
    
    //Se le resta 1 a la cantidad de letras ya que el string comienza en la letra numero 0
    con--;
    
    //Se recorre el string
    for(int i = 0; i <= (con/2); i++){ //se almacena la letra numero i temporalmente
        b = a[i];

        a[i] = a[con-i];

        a[con-i] = b;
    }
    
    printf("\nLa palabra al reves es: %s", a);
    
    return 0;
}