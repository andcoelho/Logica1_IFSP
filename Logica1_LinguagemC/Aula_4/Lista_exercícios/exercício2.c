#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//Exerc�cio 2 
	float hor, vh, sal;
	
	printf("Digite o n�mero de horas trabalhadas: ");
	scanf("%f", &hor);
	printf("Digite o valor da hora trabalhada: ");
	scanf("%f", &vh);
	sal = hor*vh;
	
	
	if(sal < 1500)
	{
		sal = sal + 300;
		printf("Seu sal�rio com a gratifica��o de R$ 300  � R$ %.2f\n\n", sal);
	}
	else
	{
		sal = sal + 500;
		printf("Seu sal�rio com a gratifica��o de R$ 500 � R$ %.2f\n\n", sal);
	}
	
	system("pause");
	
}
