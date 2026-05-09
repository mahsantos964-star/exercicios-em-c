#include <stdio.h>

int main()
{

    int n, i, j, linha, coluna;
    double matvetor[9][9],soma;

    printf("Qual a ordem da matriz?\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++){
    
        for (j = 0; j < n; j++){
        

            printf("Elemento [%d][%d]: ", i, j);
            scanf("%lf", &matvetor[i][j]);
        }
    }

    soma = 0;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++){
        

            if (matvetor[i][j] > 0){
                soma = soma + matvetor[i][j];
            }
                
                
        }
    }

    printf("Soma dos positivos :%.1lf\n",soma);

    printf("escolha uma linha ( 0 ate %d):\n",n-1);
    scanf("%d",&linha);
    printf("Linha escolhida:\n");

    for (j = 0; j < n; j++){
    
        printf("%.1lf ", matvetor[linha][j]);
    }
    printf("\n");

    printf("Escolha uma coluna:\n");
    scanf("%d", &coluna);
    printf("Coluna escolhida:\n");

    for (i = 0; i < n; i++){
    
        printf("%.1lf ", matvetor[i][coluna]);
    }
    printf("\n");
    printf("DIAGONAL PRINCIPAL:\n");

    for(i=0;i<n;i++){
        printf("%.1lf ", matvetor[i][i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
       for (j=0;j<n;j++){
        if(matvetor[i][j]<0){
            matvetor[i][j]= matvetor[i][j]*matvetor[i][j];
        }
        
       }
       
    }


    printf("Matriz alterada:\n");

    for(i=0;i<n;i++){
       for (j=0;j<n;j++){
       printf("%.1lf ", matvetor[i][j]);
        
       }
       printf("\n");
    }

















    return 0;
}