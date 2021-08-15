#include <conio.h>    
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	num = 1000;
	while(num >= 0)
	{
		if(num%2 == 0)
		{
			printf("%i\n", num);
			
		}
		num--;
	}
}
