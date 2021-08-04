#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Portuguese");
	char operacao;
	float num1, num2, resultado;
	
	printf("\nDigite o tipo de operação desejada: ");
	fflush(stdin);
	scanf("%c", &operacao);
	printf("Digite o primeiro número: ");
	scanf("%f", &num1);
	printf("Digite o segundo número: ");
	scanf("%f", &num2);
	
	switch(operacao)
	{
		case '+':	resultado = num1 + num2;
					printf("A soma de %f com %f é %f\n\n", num1, num2, resultado);
					break;
		case '-':	resultado = num1 - num2;
					printf("A subtração de %f por %f é %f\n\n", num1, num2, resultado);
					break;
		case '*':	resultado = num1*num2;
					printf("A multiplicação de %f por %f é %f\n\n", num1, num2, resultado);
					break;
		case '/':	resultado = num1/num2;
					printf("A divisão de %f por %f é %f\n\n", num1, num2, resultado);
					break;
		default :	printf("Operação inválida\n\n");			
	}
	
	
		
	
	
	
	/*
	if(operacao == '+')
	{
		resultado = num1 + num2;
		printf("A soma de %f com %f é %f\n\n", num1, num2, resultado);
	}
	if(operacao == '-')
	{
		resultado = num1 - num2;
		printf("A subtração de %f por %f é %f\n\n", num1, num2, resultado);
	}
	if(operacao == '*')
	{
		resultado = num1*num2;
		printf("A multiplicação de %f por %f é %f\n\n", num1, num2, resultado);
	}
	if(operacao == '/')
	{
		resultado = num1/num2;
		printf("A divisão de %f por %f é %f\n\n", num1, num2, resultado);
	}
	*/
	
	system("pause");
	
}
