#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char si;
	float num1, num2, op;
	
	printf("Digite o s�mbolo da opera��o desejada: ");
	si = getche();
	printf("\nDigite o primeiro n�mero: ");
	scanf("%f", &num1);
	printf("Digite o segundo n�mero: ");
	scanf("%f", &num2);
	
	if(si == '+')
	{
		op = num1 + num2;
		printf("A soma de %.2f com %.2f � %.2f\n\n", num1, num2, op);
	}
	if(si == '-')
	{
		op = num1 - num2;
		printf("A subtra��o de %.2f por %.2f � %.2f\n\n", num1, num2, op);
	}
	if(si == '*')
	{
		op = num1 * num2;
		printf("A multiplica��o de %.2f com %.2f � %.2f\n\n", num1, num2, op);
	}
	if(si == '/')
	{
		op = num1/num2;
		printf("A divis�o de %.2f por %.2f � %.2f\n\n", num1, num2, op);
	}
	
	system("pause");
	
}
