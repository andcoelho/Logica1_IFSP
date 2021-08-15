#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*****
Fa�a um c�digo que leia um n�mero e informe qual � o maior


*****/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%i", &num1);
	printf("Digite o segundo n�mero: ");
	scanf("%i", num2);
	if(num1 > num2)
	{
		printf("O n�mero %i � maior que o n�mero %i", num1, num2);
	}
	else
	{
		printf("O n�mero %i � maior que o n�mero %i", num2, num1);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*
	int num;
	
	printf("Digite um n�mero: ");
	scanf("%i", &num);
	
	if(num%2 == 0)
	{
		printf("\n\nO n�mero %i � par\n\n", num);
	}
	else
	{
		printf("\n\nO n�mero %i � impar\n\n", num);
	}
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*
	FILE *arquivoTeste;
	int A;
	
	arquivoTeste = fopen("arquivo_16122020.txt", "w");
	
	if(arquivoTeste == NULL)
	{
		printf("\nArquivo n�o existe/erro no diret�rio\n\n");
	}
	else
	{
		printf("\nArquivo aberto/criado com sucesso\n");
		A = 2020;
		fprintf(arquivoTeste, "Valor da vari�vel A = %i", A);
		fclose(arquivoTeste); //se n�o o programa fica aberto e pode sobrecarregar, dependendo do tamanho do arquivo
	}
	// colocar aqui a manipula��o de arquivos
	//  fprintf - impress�o em arquivo
	//  fscanf  - leitura a partir de um arquivo
	//  read    - leitura a partir de arquivo
	//  write   - escrita/impress�o em arquivo
	
	fclose(arquivoTeste);
	*/
	
	
	
	system("pause");
}
