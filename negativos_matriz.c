#include <stdio.h>

int main()
{

    int m, n, i, j;
    int matvetor[9][9];

    printf("Qual a quantidade de linhas da matriz?:\n");
    scanf("%d", &m);
    printf("Qual a quantidade de colunas da matriz?: \n");
    scanf("%d",&n);
    

    for(i= 0; i< m;i++){
        for (j = 0; j <n;j++)
        {
        printf("Elemento [%d][%d]:",i,j);
        scanf("%d", &matvetor[i][j]);
        }
        
    }

    printf("Valores negativos:\n");
    for(i= 0; i< m;i++){
        for (j = 0; j <n;j++){

           if (matvetor[i][j]<0) 
           printf("%d\n",matvetor[i][j]);
        }

    }



    return 0;
}