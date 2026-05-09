#include<stdio.h>


int main()
{

int quantidade;
double preco,dinheiro,troco;


printf("Digite o preco unitario do produto:\n");
scanf("%lf",&preco);

printf("Digite a quantidade comprada:\n");
scanf("%i",&quantidade);

printf("Dinheiro recebido:\n");
scanf("%lf",&dinheiro);

troco = dinheiro - (preco * quantidade);

if(troco > -0.0001 && troco < 0.0001){

  printf("Pagamento exato nao tem troco");
}
else if (troco >0)
{
    printf("troco R$ : %.2lf\n",troco);
}
else
{
    troco = troco * -1;
    printf("Falta dinheiro: R$ %.2lf\n", troco);
}







return 0;
}