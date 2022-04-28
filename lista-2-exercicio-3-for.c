/*3) Crie um programa que requisite ao usuário a entrada de um número inteiro e imprima na tela o fatorial deste número.
Implemente uma solução através de um laço for e outra através de um laço while.*/


// Esta solução é com o laço for.

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, numero;
	double fatorial = 1;

	printf("Digite um número para calcular o fatorial: ");
  	scanf("%d", &numero);

  	for(i = 1; i <= numero; i++)
      	fatorial *= i;

  	printf("\nO fatorial de %d é: %.0lf", numero, fatorial);
  	return 0;
}
