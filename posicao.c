#include<stdio.h>

int main(){

int n,i,PosicaoMenor,Posicaomaiorvalor;
double vet[49];
double maiorvalor,menorvalor;



printf("Quantos numeros voce vai digitar?:\n");
scanf("%i",&n);



for(i=0;i<n;i++){

printf("Digite um numero:\n");
scanf("%lf",&vet[i]);



}   
 maiorvalor = vet[0];
 menorvalor = vet[0];

    Posicaomaiorvalor = 0;
    PosicaoMenor = 0;

for(i=0;i<n;i++){
    if(vet[i]>maiorvalor){
        maiorvalor= vet[i];
        Posicaomaiorvalor= i;
    }
    if(vet[i] < menorvalor){
        menorvalor = vet[i];
        PosicaoMenor =i;
    }

}
   
    printf("Posicao = %i\n", Posicaomaiorvalor);
    printf("Maior valor = %.2lf\n", maiorvalor);
    
    
   





return 0;    
}