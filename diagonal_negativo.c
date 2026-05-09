#include<stdio.h>



int main()
{


int N, i, j,contador=0;

printf("Qual a ordem da matriz?\n");
scanf("%d",&N);

int mat[N][N];


for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
        printf("Elemento [%d][%d]:",i,j);
        scanf("%d", &mat[i][j]);
    }
}

printf("Diagonal Principal:\n");
for (i = 0; i < N; i++) {
    printf("%d ", mat[i][i]);

}


for(i = 0; i< N; i++){
    for(j = 0; j < N;j++){   
        if( mat [i][j] < 0){
            contador=contador+1;

        }
    }
}
printf("\nNumeros negativos %d\n ", contador);


return 0;    
}