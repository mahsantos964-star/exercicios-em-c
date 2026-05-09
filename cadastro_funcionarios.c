#include<stdio.h>


int main(){


char nome[19][50],cargo[19][50];
double salario[19],menorsalario,somasalario,maiorsalario,media;
int n=0,i,contador_acima;



printf("Quantos funcionarios serao cadastrados:\n"); 
scanf("%d",&n);
   
while(n<1 ||n >19){
    printf("ERRO! Valor invalido.\n");
    printf("Digite um numero entre 1 e 19:\n");
    scanf("%d",&n);
   
}   

    

somasalario=0;



printf("Inicio do cadastro:\n");
for(i=0;i<n;i++){

    printf("Digite o nome:\n");
    scanf("%s",nome[i]);

    printf("Digite o salario:\n");
    scanf("%lf",&salario[i]);
    somasalario=somasalario+salario[i];
    if(i==0){
        maiorsalario=salario[i];
        menorsalario=salario[i];
    }
    if(salario[i]>maiorsalario){
        maiorsalario=salario[i];
    }
    if(salario[i]<menorsalario){
        menorsalario=salario[i];
    }
    printf("Digite o cargo:\n");
    scanf("%s",cargo[i]);



}
media=somasalario/n;
contador_acima=0;
    
printf("Processamento dos dados:\n");
printf("Funcionarios acima da media:\n");
for(i=0;i<n;i++){
    if(salario[i]>media){
        contador_acima=contador_acima+1;
        printf("  %s\n",nome[i]);
    }
}


printf("RELATORIO GERAL :\n");
printf("=======================================================\n");
printf("Maior salario = %lf\n",maiorsalario);
printf("Menor salario = %lf\n",menorsalario);
printf("Media salarial = %lf\n", media);
printf("Quantidade de pessoas que recebem acima da media = %d\n",contador_acima);

















return 0;    
}