#include<stdio.h>

int main()
{

    double preco ,quantidade,dinheiro, troco;
    
    printf("Preco unitario do produto:\n");
    scanf("%lf",& preco);

    printf("Quantidade comprada:\n");
    scanf("%lf",& quantidade);

    printf("Dinheiro recebido:\n");
    scanf("%lf" , & dinheiro );

    troco =  dinheiro - (preco * quantidade);

    printf("Troco =  %.2lf" , troco);

    return 0;
}