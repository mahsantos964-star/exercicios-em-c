#include <stdio.h>

int main()
{

    int i, n, posicao, maisvelho;
    char nome[19][50];
    int idade[19];

    printf("Quantas pessoas voce vai digitar?\n");
    scanf("%i",&n);

    for (i = 0; i < n; i++){

        printf("Digite o nome:\n");
        scanf("%s",nome[i]);

        printf("Digite a idade:\n");
        scanf("%i", &idade[i]);
    }
    maisvelho = idade[0];
    posicao = 0;

    for (i = 0; i < n; i++){
    
        if (idade[i] > maisvelho){
        
            maisvelho = idade[i];
            posicao = i;
      
        } 
      
        
    }


   printf("Pessoa mais velha: %s", nome[posicao]);

    return 0;
}