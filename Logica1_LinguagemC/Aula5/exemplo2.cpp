#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	
	num = 0;
	while(num != 5)
	{
		printf("Menu de op��es\n\nDigite a op��o desejada: ");
		scanf("%i", &num);
		switch(num)
		{
			case 1:		
						printf("\n\nCadastro\n\n");
						break;
			case 2: 	
						printf("\n\nListar\n\n");
						break;
			case 3:		
						printf("\n\nApagar\n\n");
						break;
			case 4:		
						printf("\n\nAtualizar\n\n");
						break;
			case 5:		
						printf("\n\nSair\n\n");
						break;
			default:	printf("\n\nop��o inv�lida\n\n");
						break;
		}
	}	
	
	system("pause");
	
}
