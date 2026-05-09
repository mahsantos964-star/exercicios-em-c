#include <stdio.h>
int main() {

float numero ;

printf("Digite um numero \n");
scanf("%f" , & numero);



if (numero < 0) {

    printf("Esse número é negativo") ;


} else if (numero > 0) {

    printf("Esse número é positivo");


} else {

    printf("Esse número é zero");

}

 return 0;


}