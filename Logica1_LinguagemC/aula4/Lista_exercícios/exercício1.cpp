#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//Exerc�cio 1
	float n1, n2, n3, med;
	
	printf("\n\n\nExerc�cio 1\nDigite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	med = (n1 + n2 + n3)/3;
	
	if(med >= 7)
	{
		printf("Sua m�dia � %.2f\nParab�ns, voc� foi APROVADO\n\n\n", med);
	}
	else if(med >= 5 && med < 7)
	{
		printf("Sua m�dia � %.2f\nVoc� est� de recupera��o\n\n\n", med);
	}
	else if(med < 5)
	{
		printf("Sua m�dia � %.2f\nVoc� est� reprovado\n\n\n", med);
	}
	
	system("pause");
	
}
