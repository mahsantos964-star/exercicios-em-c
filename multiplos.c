#include <stdio.h>

int main()
{

    int x, y;

    printf("Digite dois numeros inteiros :\n");
    scanf("%i%i", &x,&y);

    if (x % y == 0 || y % x == 0)
    {

        printf("sao multiplos");
    }
    else
    {
        printf("nao sao multiplos");
    }

    return 0;
}