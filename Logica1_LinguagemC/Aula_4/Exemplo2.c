#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%i", &num1);
	printf("Digite o segundo n�mero: ");
	scanf("%i", num2);
	if(num1 > num2)
	{
		printf("O n�mero %i � maior que o n�mero %i", num1, num2);
	}
	else
	{
		printf("O n�mero %i � maior que o n�mero %i", num2, num1);
	}
	
	system("pause");
}
	
