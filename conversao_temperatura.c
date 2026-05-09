#include<stdio.h>
int main()
{

double celsius, kelvin, rankine;


printf("Digite uma temperatura em celsius :\n");
scanf("%lf",&celsius);

kelvin = celsius + 273.15;
rankine = (kelvin * 9/5);


printf("voce digitou em celsius %.2lf\n" ,celsius );
printf("voce digitou em kelvin %.2lf\n" ,kelvin );
printf("voce digitou em Rankine %.2lf\n" ,rankine );


return 0 ;    
}