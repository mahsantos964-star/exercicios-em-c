#include<stdio.h>

int main()
{


int x =1,soma;


while(x!=0){

    printf("digite um numero:\n");
    scanf("%i",&x);

    if ( x == 0){


    }
    else if(x % 2 == 0){

    soma=x + x+2+ x+4 + x+6 + x+8;
    printf("soma = %i\n" ,soma );

    }
    else{

        x= x + 1;
      soma= x + x+2+ x+4 + x+6 + x+8;
        printf(" soma = %i\n" ,soma );
    }


}
















return 0 ;    
}