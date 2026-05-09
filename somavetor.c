#include<stdio.h>


int main()
{

int N,i;
double media ,soma =0;



printf("Quantos numeros voce vai digitar?:\n");
scanf("%i",&N);

double vet [N];

for (int i = 0; i < N; i++) {
    printf("Digite um numero:");
    scanf("%lf",&vet[i]);
    soma = soma + vet[i];
   
}
printf ("\nValores:");
for (int i = 0; i < N; i++) {
    printf("%.1lf  ",vet[i]);
   
}
printf("\n");

media = soma / N ;
printf("Soma = %.2lf\n", soma);
printf("Media = %.2lf\n", media);

return 0 ;    
}