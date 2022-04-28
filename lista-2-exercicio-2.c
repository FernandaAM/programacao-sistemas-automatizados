/* 2) Crie um programa que desenhe um tabuleiro de xadrez na tela (utilizando laços e tomada de decisão).
Você pode escolher que caracteres devem ser usados para representar as casas brancas e pretas a partir da tabela ASCII.*/

#include <stdio.h>

main()

{
	int branco, preto;

	for(branco = 1; branco < 9; branco++)
	{
		for(preto = 1; preto < 9; preto++)
		{
			if((branco + preto) % 2 == 0)
			{
				printf("\xDB\xDB");
			}

			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
