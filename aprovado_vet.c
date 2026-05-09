#include <stdio.h>

int main()
{

    int n, i;
    double media;
    double nota1vetor[29];
    double nota2vetor[29];
    char nome[n][50];

    printf("Quantos alunos serao digitados?:");
    scanf("%i",&n);

    for (i=0;i<n;i++){
    printf("Digite nome:\n");
    getchar(); 
    fgets(nome[i], 50, stdin);
    printf("Digite a primeira nota:\n");
    scanf("%lf",&nota1vetor[i]);
    printf("Digite a segunda nota:\n");
    scanf("%lf",&nota2vetor[i]);
    }
    for (i = 0; i <n; i++){
        media = nota1vetor[i] + nota2vetor[i];
        
        if(media>=6){
            printf(nome[i],"Aprovado!\n");
        }
    }
    





return 0;
}