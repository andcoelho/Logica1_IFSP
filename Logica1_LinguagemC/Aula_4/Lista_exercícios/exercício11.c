#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float hx, hf, h;
	
	printf("\n\nDigite o n�mero de horas extras: ");
	scanf("%f", &hx);
	printf("Digite o n�mero de horas faltadas: ");
	scanf("%f", &hf);
	
	h = hx - (hf*2/3);	
	printf("Seu saldo de horas � %.2f\n\n", h);
	
	if(h < 600)
	{
		printf("Nesse natal, sua gratifica��o � de 100 REAIS!\n\n");		
	}
	else if(h >= 600 && h <= 1200)
	{
		printf("Nesse natal, sua gratifica��o � de 200 REAIS!\n\n");
	}
	else if(h > 1200 & h <= 1800)
	{
		printf("Nesse natal, sua gratifica��o � de 300 REAIS!\n\n");
	}
	else if(h > 1800 & h <= 2400)
	{
		printf("Nesse natal, sua gratifica��o � de 400 REAIS\n\n");
	}
	else if(h > 2400)
	{
		printf("Nesse natal, sua gratifica��o � de 500 REAIS\n\n");
	}
	
	
	system("pause");
	
}
