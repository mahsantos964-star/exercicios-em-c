#include<stdio.h>

int main()
{

int N;

printf("Quantos numeros voce vai digitar ?\n");
scanf("%i",&N);

int vet [N];

for(int i = 0; i < N; i++){
    printf("Digite um numero:\n ");
    scanf("%i",&vet[i]);
}
printf("\nNUMEROS NEGATIVOS\n");

for(int i = 0 ; i < N; i++) {

    if (vet [i]< 0){
        printf("%i\n",vet[i]);
    }
    
}

return 0;
}








