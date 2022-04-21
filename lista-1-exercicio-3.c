/* 3) Crie um programa que requisite ao usuário a entrada de um ano. Escreva então uma expressão lógica que escreva na tela “Bissexto” caso o ano entrado pelo usuário seja
um ano bissexto, ou escreva “Não Bissexto” caso o ano não seja bissexto. Um ano bissexto é aquele que é divisível por 4 ou 400, mas não por 100. Dica: use o operador
ternário (?:) */


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int ano;

	printf("Digite um ano para saber se ele é bissexto ou não: ");
	scanf("%d", &ano);

	ano % 4 == 0 || ano % 400 == 0 && ano % 100 != 0? printf("\nO ano é bissexto!") : printf("\nO ano não é bissexto!");

	return 0;
}
