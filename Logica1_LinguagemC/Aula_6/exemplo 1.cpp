#include <conio.h>    // são bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
Montar o menu de opções abaixo utilizando switch..case

1. CADASTRO
2. LISTAR
3. APAGAR
4. ATUALIZAR
5. SAIR

*/


int main()
{
	setlocale(LC_ALL, "Portuguese");  
	int opcao;
	
	opcao = 0;
	while(opcao != 5)
	{
		system("cls"); // limpa a tela.
		printf("MENU DE OPÇÕES\n\n");
		printf("1-CADASTRO\n");
		printf("2-LISTAR\n");
		printf("3-APAGAR\n");
		printf("4-ATUALIZAR\n");
		printf("5-SAIR\n");
		scanf("%i", &opcao);
		
		switch(opcao)
		{
			case 1:	
						printf("\n\nCADASTRO\n\n");
						break;
			case 2:	
						printf("\n\nLISTAR\n\n");
						break;
			case 3:	
						printf("\n\nAPAGAR\n\n");
						break;
			case 4:	
						printf("\n\nATUALIZAR\n\n");
						break;
			case 5:		
						printf("\n\nSAIR\n\n");
						break;
			default:	printf("\n\nVocê digitou uma opcao inválida\n\n");	
						break;										
		}
		system("pause");
	}

}
