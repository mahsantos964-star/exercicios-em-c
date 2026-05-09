#include<stdio.h>

int main()
{

int contador = 0,soma = 0,idade;
double media;

printf("Digite a idade\n");
scanf("%i",&idade);

while (idade >=0) {
soma = soma + idade;
contador = contador + 1;
scanf("%i",&idade);
}

if (contador == 0) {
  printf("impossivel calcular");
} else {
  media= (double) soma /contador;
printf("MEDIA = %.2lf" , media);
}



return 0;
}