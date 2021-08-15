#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Portuguese");
	int x;
	
	for(x = 0; x <100; x++)
	{
		printf("%i\n", x);
	}
}
