#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char pes;
	float kg, cm, idade, geb;
	
	printf("Se você for homem, tecle h, se for mulher, tecle m: ");
	pes = getche();
	printf("\nDigite seu peso em kg: ");
	scanf("%f", &kg);
	printf("digite sua altura em cm: ");
	scanf("%f", &cm);
	printf("Digite sua idade em anos: ");
	scanf("%f", &idade);
	
	if(pes == 'h')
	{
		geb = 66.47 + (13.75*kg) + (5*cm) - (6.76*idade);
		printf("Homem\nSeu gasto energético basal é %.2f kcal\n\n\n", geb);
	}
	if (pes == 'm')
	{
		geb = 655.1 + (9.56*kg) + (1.85*cm) - (4.67*idade);
		printf("Mulher\nSeu gasto energético basal é %.2f kcal\n\n\n", geb);
	}
	
	system("pause");
	
}
