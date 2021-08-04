#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num1;
	float alt, pi;
	
	printf("Se você for do sexo masculino, digite 1\nSe você for do sexo feminino digite 2\n");
	scanf("%i", &num1);
	
	printf("Digite sua altura: \n");
	scanf("%f", &alt);
	
	if (num1 == 1)
	{
		pi = 72.7*alt - 58;
		printf("Seu peso ideal é %.2f kg\n\n", pi);
	}
	else
	{
		pi = 62.1*alt - 44.7;
		printf("Seu peso ideal é %.2f kg\n\n", pi);
	}
	
	system("pause");
	
}
