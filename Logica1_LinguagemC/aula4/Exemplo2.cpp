#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	
	printf("Digite o primeiro número: ");
	scanf("%i", &num1);
	printf("Digite o segundo número: ");
	scanf("%i", num2);
	if(num1 > num2)
	{
		printf("O número %i é maior que o número %i", num1, num2);
	}
	else
	{
		printf("O número %i é maior que o número %i", num2, num1);
	}
	
	system("pause");
}
	
