#include <stdio.h>

int main()
{

    int n, i, somapares = 0, npares = 0;
    double mediapares;

    printf("Quantos elementos vai ter o vetor?:");
    scanf("%i",&n);
    int vet[29];

    for (i = 0; i < n; i++)
    {
        printf("Digite um numero:");
            scanf("%i", &vet[i]);
    }

    for (i = 0; i < n; i++)
    {

        if (vet[i] % 2 == 0)
        {
            somapares = somapares + vet[i];
            npares++;
        }
    }

    if (npares == 0)
    {
        printf("NENHUM NUMERO PAR\n");
    }
    else
    {

        mediapares= (double)somapares / npares;
        printf("MEDIA DOS PARES = %.1lf\n", mediapares);
    }

    return 0;
}