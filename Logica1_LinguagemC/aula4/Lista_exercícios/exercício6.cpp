#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float a, b, c;
	
	printf("Digite o comprimento A do triângulo: ");
	scanf("%f", &a);
	printf("Digite o comprimeito B do triângulo: ");
	scanf("%f", &b);
	printf("Digite o comprimeito C do triângulo: ");
	scanf("%f", &c);
	
	if(a >= b && b >= c)
	{
		if(a > (b+c))
		{
			printf("Esses comrpimentos não formam um triângulo\n\n");
		}
		else if(a == b & b == c)
		{
			printf("Triângulo equilátero\n\n");
		}
		else if(a == b || b == c || a == c)
		{
			printf("Triângulo isósceles\n\n");
		}
		else
		{
			printf("Não é equilátero nem isósceles\n\n");
		}
	}

	system("pause");
	
}
