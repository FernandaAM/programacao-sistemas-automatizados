/*3) Crie um programa que requisite ao usuário a entrada de um número inteiro e imprima na tela o fatorial deste número.
Implemente uma solução através de um laço for e outra através de um laço while.*/


// Esta solução é com o laço while.

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    int numero, i;
    double fatorial;

    fatorial = i = 1;

    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &numero);

    while( i <= numero)
    {
        fatorial *= i;
        i++;
    }
    printf("\nO fatorial de %d é: %.0lf", numero, fatorial);
    return 0;
}
