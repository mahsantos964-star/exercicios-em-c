#include<stdio.h>

int main()
{



int inicial , final , duracao;

printf("Hora inicial:\n");
scanf("%i",&inicial);

printf("Hora final:\n");
scanf("%i",&final);


if (final == inicial)
{
    printf("o jogo durou 24 horas");
}
else if (final < inicial)
{
    duracao = 24 - inicial + final;
   printf("o jogo durou %d horas\n", duracao);

}
else
{
    duracao = final - inicial;
    printf("o jogo durou %d horas\n", duracao);
}




return 0;   
}