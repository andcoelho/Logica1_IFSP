#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float n, e, sal, exc;
	
	printf("\nDigite a quantidade de horas trabalhadas: ");
	scanf("%f", &n);
	
	if(n > 50)
	{
		e = n - 50;
		exc = e*20;
		printf("\nSeu salário é 500 reais somado ao excedente de %.2f reais\n\n", exc);
	}
	else
	{
		sal = n*10;
		printf("\nSeu salário é %.2f reais\n\n", sal);
	}
	system("pause");
	
}
