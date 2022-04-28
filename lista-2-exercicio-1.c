/* 1) Crie um programa que, através de um laço while, solicite ao usuário para digitar caracteres e imprima o código decimal
e hexadecimal do caractere digitado. O programa deve terminar quando o usuário pressionar a tecla ESC (valor decimal 27). */

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");

    int i;
    char get_str = 0;

	while(get_str != 27)
	{
		printf("\nDigite um caractere: ");
    	get_str = getch();

        printf("\n\nO valor decimal de \"%c\" é %d.\nE em hexadecimal é %X.\n", get_str, get_str, get_str);
	}
	if(get_str == 27)
		printf("\nComo você apertou a tecla ESC então o programa foi encerrado com sucesso!");

    return 0;
}
