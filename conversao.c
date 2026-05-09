#include<stdio.h>


int main()
{

double reais, reaisParaDolar, reaisParaEuro;



printf("Digite um valor em reais:\n");
scanf("%lf",&reais);

const double TAXA_DOLAR = 5.24;
const double TAXA_EURO = 6.19;


if (scanf("%lf", &reais) != 1) {
    printf("Entrada invalida!\n");
    return 1;
}

reaisParaDolar = reais / TAXA_DOLAR;
reaisParaEuro = reais / TAXA_EURO;

printf("R$ %.2lf equivale a:\n", reais);
printf("US$ %.2lf (dolar)\n", reaisParaDolar);
printf("€ %.2lf (euro)\n", reaisParaEuro);


return 0 ;   
}