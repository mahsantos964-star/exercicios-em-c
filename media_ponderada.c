#include<stdio.h>


int main(){

int i, n;
double media,nota1,nota2,nota3;

printf("Quantos casos voce vai digitar:\n");
scanf("%i",&n);

for(i=1;i<=n;i++){

    printf("Digite tres numeros:\n");
    scanf("%lf %lf %lf",&nota1,&nota2,&nota3);

    media =((nota1*2) + (nota2 *3) + (nota3*5)) /10;
    printf("Media = %.1lf\n", media);


}




return 0;
}

