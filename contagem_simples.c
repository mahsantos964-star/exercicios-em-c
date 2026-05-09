#include<stdio.h>

int main(){

int n,contador=1;

printf("Digite um numero:\n");
scanf("%d",&n);

while(contador<=n){

    printf("contador %d\n",contador);
    contador++;
}


return  0;  
}