#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/****

Elabore 
receba um s�mbolo de opera��o (+, -, / ou *) e dois n�meros reais
O programa deve retornar o resultado da opera��o recebida
sobre estes dois n�meros.

*********/

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
	
	system("pause");
	
}
