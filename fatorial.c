#include<stdio.h>

int main(){

int i, n, multiplicacao=1;
printf("Digite o valor de N:\n");
scanf("%i",&n);

for(i=1;i<=n;i++){

multiplicacao= i*multiplicacao;





}


printf("Resultado = %i\n" , multiplicacao);


return 0;    
}