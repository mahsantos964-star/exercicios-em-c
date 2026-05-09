#include<stdio.h>

int main(){


int i, n,quantidade=0;
int vet[29];

printf("Quantos numeros voce vai digitar?\n");
scanf("%i",&n);

for(i=0;i<n;i++){
printf("Digite um numero:\n");
scanf("%i",&vet[i]);
}

printf("NUMEROS PARES:\n");



for( i=0;i<n;i++){

if(vet[i]%2==0){
printf("%i\n",vet[i]);
quantidade = quantidade + 1;


}


}

printf("Quantidade de pares = %i",quantidade);



















return 0;    
}