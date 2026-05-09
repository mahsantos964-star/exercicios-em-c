#include <stdio.h>
#include <string.h>

int main()
{

    int idade;
    char nome[50];

    printf("Digite seu nome ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite a idade \n");
    scanf("%i", &idade);

    if (idade >= 18)
    {
        printf("%s, ja atingiu a maioridade: %i\n",nome, idade);
    }
    else
    {

        printf("%s, ainda e menor de idade: %i\n",nome , idade);
    }

    return 0;
}
