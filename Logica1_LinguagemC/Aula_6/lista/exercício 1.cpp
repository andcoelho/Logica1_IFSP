#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Faça um algoritmo que imprima na tela todos os múltiplos de 3 entre 0 e 100.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("\nTodos os múltiplos de 3 entre 0 e 100\n\n\n");
	int x;
	
	for (x = 0; x <= 100; x++) //FOR: inicia com x = 0 e roda até x atingir 100
	{                          //x++ soma +1 a x, enquanto x for igual menor que 100, o sistema roda novamente.
		if(x%3 == 0)           // '%' = resto da divisão. se o resto da divisão por 3 for 0, então X é múltiplo de 3.
		{
			printf("%i\n", x); //'IF', só imprime o valor caso o número seja múltiplo de 3.
		}
	}
}
