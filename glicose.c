#include<stdio.h>


int main()
{

double medida;


printf("Digite a medida da glicose:\n");
scanf("%lf",&medida);

if (medida <=100) {
    printf("Normal");
}
else if (medida >= 101 && medida <= 139)  {
    printf("Elevado");
}
else {
    printf("Diabetes");
}






return 0;    
}