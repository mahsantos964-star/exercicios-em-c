#include <stdio.h>
#include <math.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

int main()

{
    double A, B, C, QUADRADO,TRIANGULO, TRAPEZIO;

    
    printf("Digite a medida A:\n");
    scanf("%lf", &A);
    limpar_entrada();

    printf("Digite a medida B:\n");
    scanf("%lf", &B);
    limpar_entrada();

    printf("Digite a medida C:\n");
    scanf("%lf", &C);

    QUADRADO = A * A;

    TRIANGULO = A * B / 2;

    TRAPEZIO = (A + B) * C / 2;

    printf("AREA DO QUADRADO =  %.4lf\n",  QUADRADO);
    printf("AREA DO TRIANGULO = %.4lf\n",  TRIANGULO);
    printf("AREA DO TRAPEZIO =  %.4lf\n",  TRAPEZIO);

    return 0;
}

