#include <stdio.h>

int main()
{

    int i, n, homem, quantidade;
    double maioraltura, menoraltura, media, soma;
    char genero[19];
    double altura[19];

    printf("Quantas pessoas serao digitadas?");
    scanf("%i",&n);


    for(i=0;i<n;i++){
        printf("Digite o genero:\n");
        scanf(" %c",&genero[i]);
        printf("Digite a altura:\n");
        scanf("%lf",&altura[i]);

    }

    maioraltura = altura[0];
    menoraltura= altura[0];
    soma= 0;
    quantidade =0;
    homem=0;


    for(i=0;i<n;i++){
        if(altura[i]>maioraltura){
            maioraltura=altura[i];
        }
        if(altura[i]<menoraltura){
            menoraltura=altura[i];
        }
        if(genero[i]=='F'){
            quantidade =quantidade+1;
            soma = soma+altura[i];
        }
        if(genero[i]=='M'){
            homem = homem + 1;
        }

    }


    printf("Menor altura = %.2lf\n", menoraltura);
    printf("Maior altura = %.2lf\n", maioraltura);


    if(quantidade>0){
        media = soma/(double)quantidade;
        printf("Media das alturas das mulheres = %.2lf\n", media);
    }
    else{
        printf("Nao foi possivel calcular a media das mulheres.");

    }


    printf("Numeros de homens = %i\n",homem);







return 0;
}