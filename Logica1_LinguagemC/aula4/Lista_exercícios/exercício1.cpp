#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//Exercício 1
	float n1, n2, n3, med;
	
	printf("\n\n\nExercício 1\nDigite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	med = (n1 + n2 + n3)/3;
	
	if(med >= 7)
	{
		printf("Sua média é %.2f\nParabéns, você foi APROVADO\n\n\n", med);
	}
	else if(med >= 5 && med < 7)
	{
		printf("Sua média é %.2f\nVocê está de recuperação\n\n\n", med);
	}
	else if(med < 5)
	{
		printf("Sua média é %.2f\nVocê está reprovado\n\n\n", med);
	}
	
	system("pause");
	
}
