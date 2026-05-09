#include<stdio.h>


int main()

{

int i,numero,produto;


printf("Digite um numero inteiro\n");
scanf("%d",&numero);


for(i=1;i<=10;i++)
{
    produto= numero * i; 
    if(produto % 2==0){
    printf("%d x %d = %d\n",numero,i,produto);
    }
} 






return 0;
}
