#include<stdio.h>

int main()
{

int x, y;

printf("Digite o primeiro numero:\n ");
scanf("%i", &x);

printf("Digite o segundo numero:\n");
scanf("%i", &y);

while (x != y)
{
if (x < y)
{
printf("crescente\n");
}
else
{
printf("decrescente\n");
}

printf("Digite outro numero:\n");
scanf("%i", &x);

printf("Digite outro numero:\n ");
scanf("%i", &y);
}
printf("Numeros iguais. Encerrando...\n");

return 0;
}
