#include<stdio.h>
#include<math.h>

int main()
{

int totalSegundos,horas,minutos,segundos, resto;
  
printf("Digite a duracao em segundos:\n ");
scanf("%i",&totalSegundos);

horas = totalSegundos / 3600;

resto = totalSegundos % 3600;

minutos = resto / 60;

segundos = resto % 60;

printf("Duracao : horas , minutos , segundos %i, %i ,%i", horas,minutos,segundos);



return 0;
}


























