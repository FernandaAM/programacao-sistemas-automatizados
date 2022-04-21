/* 2) Crie um programa que peça os dados da conta bancária de um cliente (agência, número de conta, número do cartão, número do cliente no banco, etc), e que escreva
posteriormente estes dados na tela de forma organizada. Utilize printf() e scanf() para realizar as operações de entrada e saída de dados. */

#include <stdio.h>
#include<locale.h>

int main() 
{
	setlocale(LC_ALL, "Portuguese");

	unsigned long int agencia, numConta, numCartao, numCliente;
	char digito;

	printf (" ===================== Olá cliente, seja bem-vindo(a) ao banco NandaCoin! =====================");
	printf("\n\nPara começar, insira o número de sua agência: ");
	scanf("%ld", &agencia);
	printf("Agora o número da conta sem o dígito: ");
	scanf("%ld", &numConta);
	printf("Digite o dígito e, se não houver, digite X: ");
	scanf("%s", &digito);
	printf("O número do seu cartão: ");
	scanf("%ld", &numCartao);
	printf("E por fim, o número do cliente: ");
	scanf("%ld", &numCliente);
	printf("\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");
	printf("\nPor favor, confira abaixo se todos os dados que você inseriu estão corretos. \n\n");
	printf("Número da agência: %ld \nNúmero da conta: %ld-%c \nNúmero do cartão: %ld \nNúmero do cliente: %ld", agencia, numConta, digito, numCartao, numCliente);

}
