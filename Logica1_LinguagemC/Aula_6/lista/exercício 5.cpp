#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


//Ex 5: Fa�a um algoritmo que leia a base e o expoente e calcule a pot�ncia de um n�mero inteiro.

int main()
{
	int base, expo, pot;
	setlocale(LC_ALL, "Portuguese");
	printf("\nDigite o valor da base: ");
	scanf("%i", &base);
	printf("Digite o valor do expoente: ");
	scanf("%i", &expo);
	
	pot = base * expo;
	printf("\n%i elevado a %i � igual a: %i\n\n", base, expo, pot);
	
	system("pause");
	
}
