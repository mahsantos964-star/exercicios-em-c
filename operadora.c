#include<stdio.h>



int main()
{

int minutos;
double valorpago;



printf("Digite a quantidade de minutos:\n ");
scanf("%d",&minutos);


valorpago = 50.0;


if (minutos > 100){
    valorpago = valorpago + 2 * (minutos - 100);
}else{
    valorpago = 50.0;
}

printf("Valor a pagar: R$  %.2lf \n", valorpago);





return 0;    
}