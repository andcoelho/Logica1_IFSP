#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float num1, num2, num3;
	
	printf("\n\nDigite o primeiro número: ");
	scanf("%f", &num1);
	printf("Digite o segundo número: ");
	scanf("%f", &num2);
	printf("Digite o terceiro número: ");
	scanf("%f", &num3);
	
	printf("A: %.2f\nB: %.2f\nC: %.2f\n\n", num1, num2, num3);
	
	if(num1 >= num2 && num1 >= num3)
	{
		printf("%.2f É o maior número\n\n", num1);
	}
	else if(num2 >= num1 && num2 >= num3)
	{
		printf("%.2f É o maior número\n\n", num2);
	}
	else if(num3 >= num1 && num3 >= num2)
	{
		printf("%.2f É o maior número\n\n", num3);
	}
	
	system("pause");
	
}
