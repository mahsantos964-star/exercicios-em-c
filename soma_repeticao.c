#include <stdio.h>

int main()
{

    int i, numero;

    printf("Digite um numero inteiro\n");
    scanf("%i", &numero);

    for (i = 1; i <= 10; i++)
    {

        printf("%i + %i = %i\n", numero, i, numero + i);
    }

    return 0;
}