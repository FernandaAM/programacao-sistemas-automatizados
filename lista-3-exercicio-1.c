/* 1) Crie um programa que toque um sinal sonoro toda vez que o usuário digitar a tecla espaço (valor decimal 32) do teclado.
Para isto, crie uma função que execute o sinal sonoro (\a). */

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");

    int i;
    char get_str = 0;

	while(get_str != 32)
	{
		printf("\nDigite um caractere: ");
    	get_str = getch();

        printf("\n\nVocê digitou o caractere \"%c\". Aumente o volume e experimente digitar a tecla espaço na próxima vez!\n", get_str);
	}
	if(get_str == 32)
		alertaSonoro();

    return 0;
}

alertaSonoro(get_str)
{
	printf("\n\nAqui vai o barulhinho do Windows ao finalizar uma tarefa. Se prepare! \a\n");
}
