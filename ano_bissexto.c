#include <stdio.h>

int main()
{

    int ano;

    printf("Digite o ano ");
    scanf("%i", &ano);

    if (ano % 4 == 0)
    {

        printf("Ano %i pode ser bissexto\n", ano);
    }
    else
    {
        printf("Ano %i nao pode ser bissexto\n", ano);
    }

    return 0;
}