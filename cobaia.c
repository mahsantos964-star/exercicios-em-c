#include<stdio.h>





int main()

{
char cobaia;
int quantidade, i, x, totalcobaias = 0, totalcoelhos = 0, totalratos = 0, totalsapos = 0;

double perc_coelhos =0, perc_ratos =0,perc_sapos =0;


printf("Quantos casos de teste serao digitados?:\n");
scanf("%i",&x);



for(i=1;i<=x;i++)
{

    printf("Quantidade de cobaias:\n");
    scanf("%i",&quantidade);
    if (quantidade < 0) {
    printf("Valor invalido!\n");
    return 1;
}
    printf("Tipo de cobaia:\n");
    scanf(" %c",&cobaia);


    totalcobaias= totalcobaias + quantidade;



if (cobaia=='C') {
    totalcoelhos= totalcoelhos+ quantidade;
}
else if (cobaia=='R'){
    totalratos= totalratos+ quantidade;
}
 
else{

  totalsapos= totalsapos+ quantidade;
}





}



if(totalcobaias > 0){
    perc_coelhos = (totalcoelhos/ (double)totalcobaias)*100;
    perc_ratos = (totalratos/ (double)totalcobaias)*100;
    perc_sapos = (totalsapos/ (double)totalcobaias)*100;
    

}

printf("\nRELATORIO GERAL:\n");

printf("total de cobaias: %i\n", totalcobaias);
printf("total de coelhos : %i\n" ,totalcoelhos);
printf("total de ratos : %i\n" ,totalratos);
printf("total de sapos: %i\n",totalsapos);

printf("perc_coelhos = %.2lf%%\n" ,perc_coelhos);
printf("perc_ratos = %.2lf%%\n" ,perc_ratos);
printf("perc_sapos = %.2lf%%\n" ,perc_sapos);




return 0 ; 

}