#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Escreva um algoritmo que gere o números de 1000 a 1999 e escreva aqueles que dividido por 11 dão resto igual a 5.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int x;
	
	for (x = 1000; x < 2000; x++)
	{
		if(x%11 == 5)
		{
			printf("%i\n", x);
		}
	}
}
