#include <stdio.h>

int main()
{

    int tentativa, numerosecreto = 10;
    printf("Jogo de adivinhacao iniciado!\n");


    printf("Digite um numero:\n");
    scanf("%d",&tentativa);


    while (tentativa != numerosecreto){
   

        printf("Erro tente novamente:\n");

        if (tentativa < numerosecreto){
        
            printf("O numero secreto e maior:\n");
            printf("Digite outro numero:\n");
            scanf("%d",&tentativa);
        }
        else{
        

            printf("O numero secreto e menor:\n");
            printf("Digite outro numero:\n");
            scanf("%d", &tentativa);
        }
    }

    printf("Parabens! Voce acertou!\n");

    return 0;
}