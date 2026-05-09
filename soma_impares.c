#include<stdio.h>


int main()
{


int i,cont=0;

for(i=1;i<=10;i++){

    if(i % 2 ==1){
        cont=cont+1;
        printf("%d\n", i);
        
    }
}   

printf("\n Total de numeros impares = %d\n",cont);






return 0;   
}