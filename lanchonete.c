#include <stdio.h>

int main()

{

    int codigo, quantidade;
    double valor;

    printf("Digite o codigo do produto:\n ");
    scanf("%i", &codigo);

    printf("Digite a quantidade do produto: \n");
    scanf("%i", &quantidade);

    if (codigo == 1)
    {
        valor = 5.0 * quantidade;
    }
    else if (codigo == 2)
    {
        valor = 3.50 * quantidade;
    }
    else if (codigo == 3)
    {

        valor = 4.80 * quantidade;
    }
    else if (codigo == 4)
    {
        valor = 8.90 * quantidade;
    }
    else if (codigo == 5)
    {

        valor = 7.32 * quantidade;
    }

    printf("valor a pagar :  %.2lf \nR$ ", valor);

    return 0;
}