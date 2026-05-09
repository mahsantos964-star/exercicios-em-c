#include <stdio.h>

int main()

{

	int senha = 12345;
	int numero;

	printf("Digite sua senha\n");
	scanf("%i", &numero);

	while (numero != senha)

	{
		printf("Acesso negado !");
		scanf("%i",& numero);
	}

	printf("Acesso permitido !");

	return 0 ;
}
