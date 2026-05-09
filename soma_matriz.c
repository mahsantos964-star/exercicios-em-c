#include <stdio.h>

int main()
{

    int m, n, i, j;
    int Avetor[9][9];
    int Bvetor[9][9];
    int Cvetor[9][9];

    printf("Quantas linhas vai ter cada matriz? \n");
    scanf("%d",&m);
    printf("Quantas colunas vai ter cada matriz?\n");
    scanf("%d",&n);

    for(i =0 ; i < m;i++){
        for (j =0 ; j < n;j++)
        {
            printf("Elemento A[%d][%d]: ", i, j);
            scanf("%d",&Avetor[i][j]);
        }

    }


    for(i =0 ; i < m;i++){
        for (j =0 ; j < n;j++)
        {
            printf("Elemento B[%d][%d]: ", i, j);
            scanf("%d",&Bvetor[i][j]);
        }

    }
    printf("MATRIZ SOMA:\n");
    for(i =0 ; i < m;i++){
        for (j =0 ; j < n;j++)
        {    Cvetor[i][j]= Avetor[i][j] + Bvetor[i][j];
            printf("%d ",Cvetor[i][j]);
           
        }
        printf("\n");
    }

    









 return 0;
}