#include<stdio.h>

int main()
{

double x, y;

printf("Digite o valor de x:\n "),
scanf("%lf",&x);
printf("Digite o valor de y:\n ");
scanf("%lf",&y);

if ( y == 0 && x== 0)
{
    printf("voce esta no ponto de origem");
}
else if ( x == 0)
{
    printf("voce esta no eixo y");

}
else if (y == 0)
{
    printf("voce esta no eixo x");
}
else if( y > 0 && x > 0 )
{
    printf("voce esta no Q1");
}
else if (y> 0 && x< 0 )
{
 printf("voce esta no Q2");

}
else if  (y< 0 && x< 0)
{

    printf("voce esta no Q3");
}
else 
{
    printf("voce esta no Q4");
}













return 0 ;    
}