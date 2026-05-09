#include<stdio.h>

int main()
{


float largura,comprimento,volume,altura;


printf("Digite a largura\n");
scanf("%f",&largura);


printf("Digite o comprimento\n");
scanf("%f",&comprimento);


printf("Digite a altura\n");
scanf("%f",&altura);

volume = largura * comprimento * altura;

printf("o volume da caixa e : %.2f\n",volume);




return 0;    
}