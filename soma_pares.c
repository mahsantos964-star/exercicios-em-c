#include<stdio.h>


int main()
{


int i,soma=0;

for(i=1;i<=10;i++){

    if(i % 2 ==0){
        soma=soma+i;
        printf("%d\n", i);
        
    }
}   

printf("\n Soma dos numeros pares = %d\n",soma);






return 0;   
}