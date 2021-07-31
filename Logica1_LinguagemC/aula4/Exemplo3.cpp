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
	scanf("%i", &num2);
	
	if(num1 > num2)
	{
		printf("\n\nO número %i é maior que %i\n\n", num1, num2);
	}
	else
	{
		printf("\n\nO número %i é maior que %i\n\n", num2, num1);
	}
	system("pause");
	
}
