#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float a, b, c;
	
	printf("Digite o comprimento A do tri�ngulo: ");
	scanf("%f", &a);
	printf("Digite o comprimeito B do tri�ngulo: ");
	scanf("%f", &b);
	printf("Digite o comprimeito C do tri�ngulo: ");
	scanf("%f", &c);
	
	if(a >= b && b >= c)
	{
		if(a > (b+c))
		{
			printf("Esses comrpimentos n�o formam um tri�ngulo\n\n");
		}
		else if(a == b & b == c)
		{
			printf("Tri�ngulo equil�tero\n\n");
		}
		else if(a == b || b == c || a == c)
		{
			printf("Tri�ngulo is�sceles\n\n");
		}
		else
		{
			printf("N�o � equil�tero nem is�sceles\n\n");
		}
	}

	system("pause");
	
}
