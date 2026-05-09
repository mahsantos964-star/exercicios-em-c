#include <stdio.h>

int main()
{

    int numero1, numero2;

    printf("Digite o primeiro numero\n");
    scanf("%i", &numero1);

    printf("Digite o segundo  numero\n");
    scanf("%i", &numero2);

    if (numero1 > numero2)
    {

        printf("O maior numero e: %i\n", numero1);
    }
    else if (numero2 > numero1)
    {

       printf("O maior numero e: %i\n", numero2);
    }
    else
    {

        printf("Os dois numeros sao iguais: %i e %i\n", numero1, numero2);
    }

    return 0;
}