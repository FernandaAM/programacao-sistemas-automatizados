/*3) Crie um programa que receba um valor inteiro de entrada do usuário e retorne o fatorial deste número na tela.
Use uma função recursiva para implementar o cálculo do fatorial.*/

#include <stdio.h>
#include <locale.h>

double fatorial (numero)
{
	if ((numero == 1) || (numero == 0))
		return 1;
   else
      return fatorial (numero - 1) * numero;
}

main ()
{
	setlocale(LC_ALL,"Portuguese");

	printf("\n\n================ CALCULADORA DE FATORIAIS ================\n\n");
	int numero = 0;

	while(numero < 170)
	{
		printf("Digite um número para saber o fatorial, ou digite 170 para encerrar o programa: ");
		scanf("%d", &numero);
		printf("\nRESULTADO: O fatorial do número %d é %.0lf.\n\n", numero, fatorial (numero));
	}
}
