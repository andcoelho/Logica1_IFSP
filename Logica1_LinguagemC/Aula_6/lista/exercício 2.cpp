#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Ex 2: Fa�a um algoritmo que imprima o quadrado de todos os n�meros inteiros entre 15 e 200.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int x, x1;
	
	for (x = 15; x <= 200; x++)
	{
		x1 = x*x;
		printf("%i ao quadrado �: %i\n\n", x, x1);
	}
	
}
