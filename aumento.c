#include<stdio.h>


int main()
{


double salario, novosalario,porcentagem, aumento;

printf("Digite o salario da pessoa:\n");
scanf("%lf",&salario);

if (salario <=1000)
{
    porcentagem = 20;
    
}
else if(salario <=3000 )
{
    porcentagem = 15;
    
}

else if (salario <=8000)
{
    porcentagem = 10;
}

else
{
    porcentagem = 5;
    

}


aumento = salario * porcentagem / 100;
novosalario = salario + aumento;

printf("novo salario e:%.2lf \n" , novosalario);
printf("Aumento: R$ %.2lf\n",aumento);
printf("porcentagem: %.0lf%%\n", porcentagem);

return 0;    
}