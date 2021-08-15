#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float kg, m, imc;
	
	printf("\n\nDigite seu peso em kg: ");
	scanf("%f", &kg);
	printf("Digite sua altura em metros: ");
	scanf("%f", &m);
	
	imc = kg/(m*m);
	printf("Seu IMC é %.2f\n", imc);
	
	if(imc < 20)
	{
		printf("Você está abaixo do peso ideal\n");
	}
	else if(imc >= 20 && imc < 25)
	{
		printf("Você está com peso normal\n");
	}
	else if(imc >= 25 && imc < 30)
	{
		printf("Você está acima do peso\n");
	}
	else if(imc >= 30 && imc <34)
	{
		printf("Você está obeso\n");
	}
	else if(imc >= 34)
	{
		printf("Você está com obesidade mórbida\n");
	}
	
	
	system("pause");
	
}
