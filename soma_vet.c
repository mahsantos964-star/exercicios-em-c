#include<stdio.h>

int main(){

int n,i;
int  A [9];
int  B [9];
int  C [9];

printf("Quanto numeros voce vai digitar?:\n");
scanf("%i",&n);

for(i=0;i<n;i++){
printf("Digite o valor de A:\n");
scanf("%i",&A[i]);

}


for(i=0;i<n;i++){
printf("Digite o valor de B:\n");
scanf("%i",&B[i]);

}

for(i=0;i<n;i++){
C[i] = A [i]+B[i] ;
printf("VETOR RESULTANTE :%i\n",C[i]);

}























return 0;    
}