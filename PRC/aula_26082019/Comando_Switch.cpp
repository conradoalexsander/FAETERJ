#include <stdio.h>
#include <stdlib.h>

#include <locale.h>


int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int mes;
	
	printf("Escolha o m�s: ");
	scanf("%d", &mes);
	
	switch(mes){
		case 1: 
			printf("janeiro");
		break;
		
		case 2: 
			printf("fevereiro");
		break;
		
		case 3: 
			printf("mar�o");
		break;
		
		default:
			printf("M�s inv�lido ou n�o adicionado.");
		break;
	}
	
	return 0;
}
