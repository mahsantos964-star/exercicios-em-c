
#include <stdio.h>

int main()
{
    double nota1, nota2, media;

    printf("Digite a primeira nota:\n");
    scanf("%lf", &nota1);

    while (nota1 < 0 || nota1 > 10)
    {
        printf("nota invalida\n");
        scanf("%lf", &nota1);
    }

    printf("Digite a segunda nota:\n");
    scanf("%lf", &nota2);

    while (nota2 < 0 || nota2 > 10)
    {
        printf("nota invalida\n");
        scanf("%lf", &nota2);
    }

    media = (nota1 + nota2) / 2;

    printf("Media = %.2lf\n", media);

    return 0;
}


