#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	
	printf("\n\nDigite o primeiro n�mero: ");
	scanf("%i", &num1);
	printf("Digite o segundo n�mero: ");
	scanf("%i", &num2);
	
	if( num1%num2 == 0 || num2%num1 == 0)
	{
		printf("\n%i e %i s�o m�ltiplos \n\n", num1, num2);
	}
	else
	{
		printf("\n%i e %i n�o s�o m�ltiplos\n\n", num1, num2);
	}
	
	system("pause");
	
}
