#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//Exercício 2 
	float hor, vh, sal;
	
	printf("Digite o número de horas trabalhadas: ");
	scanf("%f", &hor);
	printf("Digite o valor da hora trabalhada: ");
	scanf("%f", &vh);
	sal = hor*vh;
	
	
	if(sal < 1500)
	{
		sal = sal + 300;
		printf("Seu salário com a gratificação de R$ 300  é R$ %.2f\n\n", sal);
	}
	else
	{
		sal = sal + 500;
		printf("Seu salário com a gratificação de R$ 500 é R$ %.2f\n\n", sal);
	}
	
	system("pause");
	
}
