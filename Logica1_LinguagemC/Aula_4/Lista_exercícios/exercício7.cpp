#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char si;
	float num1, num2, op;
	
	printf("Digite o símbolo da operação desejada: ");
	si = getche();
	printf("\nDigite o primeiro número: ");
	scanf("%f", &num1);
	printf("Digite o segundo número: ");
	scanf("%f", &num2);
	
	if(si == '+')
	{
		op = num1 + num2;
		printf("A soma de %.2f com %.2f é %.2f\n\n", num1, num2, op);
	}
	if(si == '-')
	{
		op = num1 - num2;
		printf("A subtração de %.2f por %.2f é %.2f\n\n", num1, num2, op);
	}
	if(si == '*')
	{
		op = num1 * num2;
		printf("A multiplicação de %.2f com %.2f é %.2f\n\n", num1, num2, op);
	}
	if(si == '/')
	{
		op = num1/num2;
		printf("A divisão de %.2f por %.2f é %.2f\n\n", num1, num2, op);
	}
	
	system("pause");
	
}
