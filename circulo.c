#include <stdio.h>

int main()
{

    double raio, area;
    const double pi = 3.14159;

    printf("Digite o valor do raio do circulo:\n");
    scanf("%lf", &raio);

    area = pi * raio * raio;

    printf("AREA = %lf", area);

    return 0 ;
}