#include <stdio.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}
void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
   
}

int main()
{

    char nome[50];
    double valorhora, horastrabalhadas, pagamento;

    printf("Digite o nome do funcionario ");
    ler_texto(nome, 50);
    limpar_entrada;

    printf("Valor por hora:");
    scanf("%lf", &valorhora);
    limpar_entrada;

    printf("Horas trabalhadas:");
    scanf("%lf", &valorhora);

    pagamento = valorhora * valorhora;

    printf("A funcionaria %s  deve receber = %.2lf", nome, pagamento);

    return 0;
}