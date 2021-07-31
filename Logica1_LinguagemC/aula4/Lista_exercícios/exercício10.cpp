#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float a, b, c;
	
	printf("Digite a opção 1 para imprimir em ordem crescente\nDigite Opção 2 para imprimir em ordem decrescente: ");
	scanf("%i", &i);
	printf("Digite o valor de A: ");
	scanf("%f", &a);
	printf("Digite o valor de B: ");
	scanf("%f", &b);
	printf("Digite o valor de C: ");
	scanf("%f", &c);
	
	if(i == 1)
	{
		if(a >= b && b >= c)
		{
			printf("Ordem crescente: %.2f, %.2f, %.2f\n\n", c, b, a);
		}
		else if(a >= c && c >= b)
		{
			printf("Ordem crescente: %.2f, %.2f, %.2f\n\n", b, c, a);
		}
		else if(b >= a && a >= c)
		{
			printf("Ordem crescente: %.2f, %.2f, %.2f\n\n", c, a, b);
		}
		else if(b >= c && c >= a)
		{
			printf("Ordem crescente: %.2f, %.2f, %.2f\n\n", a, c, b);
		}
		else if(c >= a && a >= b)
		{
			printf("Ordem crescente: %.2f, %.2f, %.2f\n\n", b, a, c);
		}
		else if(c >= b && b >= a)
		{
			printf("Ordem crescente: %.2f, %.2f, %.2f\n\n", a, b, c);
		}
	}
	if(i == 2)
	{
		if(a >= b && b >= c)
		{
			printf("Ordem decrescente: %.2f, %.2f, %.2f\n\n", a, b, c);
		}
		else if(a >= c && c >= b)
		{
			printf("Ordem decrescente: %.2f, %.2f, %.2f\n\n", a, c, b);
		}
		else if(b >= a && a >= c)
		{
			printf("Ordem decrescente: %.2f, %.2f, %.2f\n\n", b, a, c);
		}
		else if(b >= c && c >= a)
		{
			printf("Ordem decrescente: %.2f, %.2f, %.2f\n\n", b, c, a);
		}
		else if(c >= a && a >= b)
		{
			printf("Ordem decrescente: %.2f, %.2f, %.2f\n\n", c, a, b);
		}
		else if(c >= b && b >= a)
		{
			printf("Ordem decrescente: %.2f, %.2f, %.2f\n\n", c, b, a);
		}
	}
	
	
	
	
	system("pause");
	
}
