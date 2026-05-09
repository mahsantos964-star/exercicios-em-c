#include<stdio.h>

int main()

{

double temperatura;


printf("Digite a temperatura\n");
scanf("%lf",&temperatura);



if (temperatura >= 30) {
    printf("Esta muito quente!\n");
}
else if (temperatura >= 20) {
    printf("Esta agradavel !\n");
}
else {
    printf("Esta frio !\n");
}






return 0;   
}