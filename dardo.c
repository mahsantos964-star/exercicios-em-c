#include<stdio.h>

int main()
{


double distancia1,distancia2,distancia3,maiordistancia;

printf("Digite a primeira distancia\n");
scanf("%lf",&distancia1);

printf("Digite a segunda distancia\n");
scanf("%lf",&distancia2);

printf("Digite a terceira distancia\n");
scanf("%lf",&distancia3);

if(distancia1 < distancia2 && distancia1 <distancia3)
{
    maiordistancia = distancia1;
}
else if (distancia2 >distancia3)
{
    maiordistancia = distancia2;
}
else
{
    maiordistancia =  distancia3;

}

printf("Maior distancia = %.2lf", maiordistancia);















return 0 ;    
}