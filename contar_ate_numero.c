#include <stdio.h>

int main()
{

    int numero;
    int contador = 0;

    printf("Digite um numero inteiro\n");
    scanf("%i", & numero);


    while (contador<=numero){
        printf("%i\n", contador);
        contador ++;
    }

    return 0;
}