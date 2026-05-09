#include <stdio.h>

int main() {

    int N, i;
    char nome[N][50];
    int idade[N];
    double altura[N],porcentagem, menor = 0, soma = 0, media;
     
    printf("Quantas pessoas serao digitadas? ");
    scanf("%i",&N);

    for (int i = 0; i < N; i++) {

    printf("\nDados da %d pessoa:\n", i + 1);

    printf("Nome: ");
    getchar(); 
    fgets(nome[i], 50, stdin);

    printf("Idade: ");
    scanf("%i", &idade[i]);

    printf("Altura: ");
    scanf("%lf", &altura[i]);
    }
    
    for(int i = 0; i <N;i++){
        soma = soma + altura[i];
    }
    media = soma / N;

    for( int i =0; i < N; i++){
        if (idade[i] < 16) {
        menor = menor + 1;
        }
    }
    
    porcentagem = menor*100.0/N;

    printf("\nMedia das alturas: %.2lf\n", media);
    printf("Porcentagem de pessoas com menos de 16 anos: %.1lf%%\n", porcentagem);


    for (int i = 0; i < N;i++){
        if(idade[i] < 16){
        printf("%s",nome[i]) ;
        }
    }

    return 0;
}