#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	
	printf("\n\nDigite o primeiro número: ");
	scanf("%i", &num1);
	printf("Digite o segundo número: ");
	scanf("%i", &num2);
	
	if( num1%num2 == 0 || num2%num1 == 0)
	{
		printf("\n%i e %i são múltiplos \n\n", num1, num2);
	}
	else
	{
		printf("\n%i e %i não são múltiplos\n\n", num1, num2);
	}
	
	system("pause");
	
}
