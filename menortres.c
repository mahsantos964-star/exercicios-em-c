#include<stdio.h>


int main(){

int a,b,c,menor;

printf("Digite o primeiro valor:\n");
scanf("%i",&a);

printf("Digite o segundo valor:\n");
scanf("%i",&b);

printf("Digite o terceiro valor:\n");
scanf("%i",&c);

if (a< b &&  a < c) {
    menor = a;
} else if (b < c) {
    menor = b;
} else {
    menor= c;
    
}
printf("Menor %i\n",menor);
return 0;
}