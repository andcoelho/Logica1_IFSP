#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Fa�a um algoritmo que imprima na tela todos os m�ltiplos de 3 entre 0 e 100.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("\nTodos os m�ltiplos de 3 entre 0 e 100\n\n\n");
	int x;
	
	for (x = 0; x <= 100; x++) //FOR: inicia com x = 0 e roda at� x atingir 100
	{                          //x++ soma +1 a x, enquanto x for igual menor que 100, o sistema roda novamente.
		if(x%3 == 0)           // '%' = resto da divis�o. se o resto da divis�o por 3 for 0, ent�o X � m�ltiplo de 3.
		{
			printf("%i\n", x); //'IF', s� imprime o valor caso o n�mero seja m�ltiplo de 3.
		}
	}
}
