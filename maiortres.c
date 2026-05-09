#include <stdio.h>

int main()
{

    int numero1, numero2, numero3;

    printf("Digite o primeiro numero\n");
    scanf("%i", &numero1);

    printf("Digite o segundo  numero\n");
    scanf("%i", &numero2);

    printf("Digite o terceiro  numero\n");
    scanf("%i", &numero3);

    if (numero1 > numero2 && numero1 > numero3)
    {

        printf("O maior numero e: %i\n", numero1);
    }
    else if (numero2 > numero1 && numero2 > numero3)
    {

        printf("O maior numero e: %i\n", numero2);
    }
    else

        printf("O maior numero e: %i\n", numero3);

    return 0;
}
