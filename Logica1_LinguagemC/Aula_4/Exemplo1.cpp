#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*****
Faça um código que leia um número e informe qual é o maior


*****/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	
	printf("Digite o primeiro número: ");
	scanf("%i", &num1);
	printf("Digite o segundo número: ");
	scanf("%i", num2);
	if(num1 > num2)
	{
		printf("O número %i é maior que o número %i", num1, num2);
	}
	else
	{
		printf("O número %i é maior que o número %i", num2, num1);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*
	int num;
	
	printf("Digite um número: ");
	scanf("%i", &num);
	
	if(num%2 == 0)
	{
		printf("\n\nO número %i é par\n\n", num);
	}
	else
	{
		printf("\n\nO número %i é impar\n\n", num);
	}
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*
	FILE *arquivoTeste;
	int A;
	
	arquivoTeste = fopen("arquivo_16122020.txt", "w");
	
	if(arquivoTeste == NULL)
	{
		printf("\nArquivo não existe/erro no diretório\n\n");
	}
	else
	{
		printf("\nArquivo aberto/criado com sucesso\n");
		A = 2020;
		fprintf(arquivoTeste, "Valor da variável A = %i", A);
		fclose(arquivoTeste); //se não o programa fica aberto e pode sobrecarregar, dependendo do tamanho do arquivo
	}
	// colocar aqui a manipulação de arquivos
	//  fprintf - impressão em arquivo
	//  fscanf  - leitura a partir de um arquivo
	//  read    - leitura a partir de arquivo
	//  write   - escrita/impressão em arquivo
	
	fclose(arquivoTeste);
	*/
	
	
	
	system("pause");
}
