#include<stdio.h>

int main()
{

double x,y;


printf("Digite o valor de x : \n");
scanf("%lf",&x);
printf("Digite o valor de y : \n");
scanf("%lf",&y);




 

while ((x != 0 && y != 0))
{
    if (x > 0 && y > 0 )
    {

    printf("Voce esta no Q1:\n");
    }
    else if (x < 0 && y > 0)
    {

        printf("Voce esta no Q2:\n");
    }

    else if ( x < 0 && y < 0)
    {
        printf("Voce esta no Q3:\n");
    }

    else
    {

        printf("Voce esta no Q4:\n");
  
    }
    
    printf("Digite o valor de x : \n");
    scanf("%lf",&x);
    printf("Digite o valor de y : \n");
    scanf("%lf",&y);

}




    




















return 0 ;    
}