#include<stdio.h>


int main()
{


int dentro=0, fora=0, i, x, n;



printf("Quantos numeros voce vai digitar?:");
scanf("%i",&n);

for(i=1;i<=n;i++){
    scanf("%i",&x);

    if(x>=10 &&x<=20){
        dentro = dentro+ 1;
    }
    else{
        fora = fora+1;
    }




}
printf("dentro:%i\n",dentro);
printf("fora:%i\n",fora);
























return 0 ;    
}