#include<stdio.h>

int main()
{

int codigo, alcool = 0 , gasolina = 0, diesel = 0;

while (codigo!= 4)
{

    printf("informe o codigo:\n");
    printf("1 para alcool:\n");
    printf("2 para gasolina:\n");
    printf("3 para diesel:\n");
    printf("4 para sair:\n");
    scanf("%i",&codigo);

    if (codigo == 1){
    
        alcool = alcool + 1;
        printf("alcool: %i\n" , alcool);

    }
    else if (codigo == 2){
    

        gasolina = gasolina + 1;
        printf("gasolina:%i\n " , gasolina);
    }
    
    else if(codigo == 3){
    

        diesel = diesel + 1;
        printf("diesel: %i \n" , diesel);

    }
    else{
    

        printf("opcao invalida\n");
    }




}


printf("\nmuito obrigado\n");
printf("alcool: %i\n" , alcool);
printf("gasolina:%i\n " , gasolina);
printf("diesel: %i \n" , diesel);






















return 0 ;    
}