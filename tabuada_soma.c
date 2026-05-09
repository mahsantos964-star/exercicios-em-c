#include<stdio.h>


int main()
{



int i,numero,produto,soma=0;

printf("Digite um numero inteiro");
scanf("%d",&numero);

for(i=1;i<=10; i++){
produto= numero * i; 
soma=soma+produto;   
printf("%d x %d = %d\n",numero,i,produto);

}

printf("%d",soma);
return 0;    
}