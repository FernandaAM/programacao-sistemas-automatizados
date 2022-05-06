/* 2) Crie um programa que contenha uma função que receba um caractere de entrada do usuário e que retorne este caractere
em maiúsculo (caso esteja em minúsculo) e imprima-o na tela. */

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");

    //int i;
    char get_str = 0;

	while(get_str != 27)
	{
		printf("\nDigite uma letra minúscula para transformá-la em maiúscula: ");
    	get_str = getche();
    	letraMaiuscula(get_str);

	}
	if(get_str == 27)
    	printf("Programa encerrado.");
		return 0;
}

 void letraMaiuscula(char letra)
{
	//char letra;
	//letra = letra + ('A'-'a');
	letra = toupper(letra);
	printf("\n\nA letra que você digitou em maiúsculo é: %c \n\n", letra);
}
