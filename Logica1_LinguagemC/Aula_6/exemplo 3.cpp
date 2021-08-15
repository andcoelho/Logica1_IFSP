#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char resposta;
	do
	{
		printf("Deseja continuar?\n");
		resposta = getch(); //nao usar getche nesse exemplo, ele aparece 'S' antes do printf.
	}while(resposta == 's');
}
