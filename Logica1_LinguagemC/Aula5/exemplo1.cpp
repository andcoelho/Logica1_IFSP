#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Portuguese");
	char operacao;
	float num1, num2, resultado;
	
	printf("\nDigite o tipo de opera��o desejada: ");
	fflush(stdin);
	scanf("%c", &operacao);
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &num1);
	printf("Digite o segundo n�mero: ");
	scanf("%f", &num2);
	
	switch(operacao)
	{
		case '+':	resultado = num1 + num2;
					printf("A soma de %f com %f � %f\n\n", num1, num2, resultado);
					break;
		case '-':	resultado = num1 - num2;
					printf("A subtra��o de %f por %f � %f\n\n", num1, num2, resultado);
					break;
		case '*':	resultado = num1*num2;
					printf("A multiplica��o de %f por %f � %f\n\n", num1, num2, resultado);
					break;
		case '/':	resultado = num1/num2;
					printf("A divis�o de %f por %f � %f\n\n", num1, num2, resultado);
					break;
		default :	printf("Opera��o inv�lida\n\n");			
	}
	
	
		
	
	
	
	/*
	if(operacao == '+')
	{
		resultado = num1 + num2;
		printf("A soma de %f com %f � %f\n\n", num1, num2, resultado);
	}
	if(operacao == '-')
	{
		resultado = num1 - num2;
		printf("A subtra��o de %f por %f � %f\n\n", num1, num2, resultado);
	}
	if(operacao == '*')
	{
		resultado = num1*num2;
		printf("A multiplica��o de %f por %f � %f\n\n", num1, num2, resultado);
	}
	if(operacao == '/')
	{
		resultado = num1/num2;
		printf("A divis�o de %f por %f � %f\n\n", num1, num2, resultado);
	}
	*/
	
	system("pause");
	
}
