#include <stdio.h>

int main()
{
	int idade, dias;
	
	printf("Insira quantos anos o individuo possui: ");
	scanf("%d", &idade);
	
	dias = idade*365;
	
	printf("O individuo possui: %d dias ", dias);
	return 0;
}