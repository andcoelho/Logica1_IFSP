#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Ex.3 Fa�a um algoritmo que leia e imprima todos os valores (0 a 9) da tabuada solicitada pelo usu�rio.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num1, x, tab;
	printf("\n\nDigite a tabuada desejada: ");
	scanf("%i", &num1);
	
	for (x = 0; x < 10; x++)     //x � o m�ltiplicador do n�mero digitado pelo usu�rio
	{
		tab = num1*x;
		printf("\n%i X %i = %i\n", num1, x, tab);
	}
	
	
	
}
