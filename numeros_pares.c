#include <stdio.h>

int main()
{

    int numero;
    int contador = 0;

    printf("Digite um numero inteiro\n");
    scanf("%i", &numero);

    while (numero >= contador)
    {
        if (contador % 2 == 0)
        {
            printf("%i\n", contador);
        }
        contador++;
    }

    return 0;
}
