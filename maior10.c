#include <stdio.h>

int main()
{

    int numero;

    printf("Digite um numero\n");
    scanf("%i", &numero);

    if (numero > 10)
    {

        printf("%i , numero maior que 10", numero);
    }
    else if (numero == 10)
    {

        printf("%i numero igual a 10", numero);
    }
    else
    {

        printf("%i numero menor que 10 ", numero);
    }

    return 0;
}