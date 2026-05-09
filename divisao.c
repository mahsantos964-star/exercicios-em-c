#include<stdio.h>

int main(){


int i,n;
double x, y, resultado;

printf("Quantos casos voce vai digitar?:\n");
scanf("%i",&n);


for(i=1;i<=n;i++){

printf("Entre com o numerador:\n");
scanf("%lf",&x);

printf("Entre com o denominador:\n");
scanf("%lf",&y);

if (y==0){

    printf("DIVISAO IMPOSSIVEL\n");



}
else{

    resultado = x/y;
    printf("Resultado = %.2lf \n" , resultado);
}



}
























return 0 ;    
}