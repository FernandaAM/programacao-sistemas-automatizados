/* 1) Crie um programa que declare todos os tipos de variáveis básicas do C (char, int, float, double), juntamente com todos os possíveis modificadores a serem aplicados
(signed, unsigned, short, long). Inicialize as variáveis com valores coerentes e mande-as imprimir na tela (com printf()). Mande imprimir ainda o tamanho em bytes ocupado
por cada uma destas variáveis. Dica: utilize o operador sizeof() para requisitar o tamanho de uma variável em bytes. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	signed char primeiraLetra = 'g';
	unsigned char segundaLetra = 'h';
	short signed int numero1 = -32767;
	short unsigned int numero2 = 65535;
	signed long int numero3 = -2140000005;
	unsigned long int numero4 = 1000000008;
	float numero5 = 23.895;
	double numero6 = -26987423000000012;
	//long double numero7 = 1000000000000000000000000007; // Dev C++ não roda long double

	printf("\nA primeira letra é %c e o tamanho ocupado é de %lu byte.", primeiraLetra, sizeof(primeiraLetra));
	printf("\nA segunda letra é %c e o tamanho ocupado é de %lu byte.", segundaLetra, sizeof(segundaLetra));
	printf("\nO primeiro número é %d e o tamanho ocupado é de %lu bytes.", numero1, sizeof(numero1));
	printf("\nO segundo número é %d e o tamanho ocupado é de %lu bytes.", numero2, sizeof(numero2));
	printf("\nO terceiro número é %ld e o tamanho ocupado é de %lu bytes.", numero3, sizeof(numero3));
	printf("\nO quarto número é %ld e o tamanho ocupado é de %lu bytes.", numero4, sizeof(numero4));
	printf("\nO quinto número é %f e o tamanho ocupado é de %lu bytes.", numero5, sizeof(numero5));
	printf("\nO sexto número é %.0lf e o tamanho ocupado é de %lu bytes.", numero6, sizeof(numero6));
	//printf("\nO sétimo número é %Lf e o tamanho ocupado é de %lu bytes", numero7, sizeof(numero7));

	return 0;
}
