#include<stdio.h>


int main(){

int n,i,j;
double matvetor[9][9];
double soma=0;


printf("Qual a ordem da matriz?\n");
scanf("%d",&n);

for(i =0 ; i < n;i++){
        for (j =0 ; j <n;j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%lf",&matvetor[i][j]);
        }

    }

for(i =0 ; i < n;i++){
        for (j =0 ; j <n;j++)
        {
            if(j>i)
            soma=soma+matvetor[i][j];
        }

    }


printf("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %.1lf" , soma);









return 0; 
}