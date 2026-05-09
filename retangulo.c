#include <stdio.h>
#include<math.h>

int main()
{

    double base, altura, area, perimetro, diagonal;

    printf("Digite a base do retangulo\n");
    scanf("%f", &base);

    printf("Digite a altura do retangulo\n");
    scanf("%f", &altura);

    area = base * altura;

    perimetro = (2 * base) + (2 * altura);

    diagonal =  sqrt( base*base + altura*altura)

    printf("a area do retangulo e : %.4lf \n", area);
    printf("perimetro do retangulo e : %.4lf\n", perimetro);
    printf("diagonal do retangulo e  : %.4lf\n", diagonal);

    return 0;
}