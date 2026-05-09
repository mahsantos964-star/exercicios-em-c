#include<stdio.h>

int main(){

int i,n,produto,contador_abaixo_10,contador_entre_10_20,contador_acima_20;
double lucro_total,total_venda,total_compra,porcentagem,lucro;
char nome[50][50];
double precovenda[50];
double precocompra[50];


printf("Serao digitados dados que quantos produtos?:");
scanf("%i",&n);



contador_abaixo_10 = 0;
contador_entre_10_20 = 0;
contador_acima_20 = 0;

total_compra = 0;
total_venda = 0;
lucro_total = 0;


for(i=0;i<n;i++){
   
    printf("Produto %i:\n", i + 1);
    printf("Nome: ");
    scanf("%s", nome[i]);
    printf("Preco de compra: ");
    scanf("%lf", &precocompra[i]);
    printf("Preco de venda: ");
    scanf("%lf", &precovenda[i]);


    
    lucro = precovenda[i] - precocompra[i];
    if(precocompra[i] != 0){
    porcentagem = (lucro / precocompra[i]) * 100;
    }
    else{
    porcentagem = 0;
}

    total_compra = total_compra + precocompra[i];
    total_venda = total_venda + precovenda[i];
    lucro_total = lucro_total + lucro;

    if(porcentagem <10){
        contador_abaixo_10=contador_abaixo_10+1;
    }
    
    if(porcentagem>=10&&porcentagem<=20){
        contador_entre_10_20=contador_entre_10_20+1;

    }
    if(porcentagem>20){
        contador_acima_20=contador_acima_20+1;
    }


}


printf("Valor total de compra: %.2lf\n", total_compra);
printf("Valor total de venda: %.2lf\n", total_venda);
printf("Lucro total: %.2lf\n", lucro_total);
printf("Produtos com lucro abaixo de 10: %i\n", contador_abaixo_10);
printf("Produtos com lucro entre 10 e 20: %i\n", contador_entre_10_20);
printf("Produtos com lucro acima de 20: %i\n", contador_acima_20);






















return 0;    
}