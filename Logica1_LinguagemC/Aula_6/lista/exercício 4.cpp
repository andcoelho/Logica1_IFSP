#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
/*
Ex 4: Fa�a um programa que leia uma quantidade indeterminada de n�meros positivos 
e conte quantos deles est�o nos seguintes intervalos: [0-25], [26-50], [51-75], [76-100].
A entrada de dados dever� terminar quando for lido um n�mero negativo. (utilize enquanto)
*/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	
	num = 0;
	while(num >= 0)
	{
		printf("\n Digite o n�mero: ");
		scanf("%i", &num);
		if(num >0 && num <=25)
		{
			printf("\n%i = [0-25]\n", num);
		}
		if(num >25 && num <= 50)
		{
			printf("\n%i = [26-50]", num);
		}
		if(num > 50 && num <= 75)
		{
			printf("\n%i = [51-75]", num);
		}
		if(num >75 && num <= 100)
		{
			printf("\n%i = [76-100]", num);
		}
		if(num > 100)
		{
			printf("op��o inv�lida");
		}
	}	
	
	system("pause");
	
}
