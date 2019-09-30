#include <stdio.h>
#include <stdlib.h>

#include <locale.h>


int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int mes;
	
	printf("Escolha o mês: ");
	scanf("%d", &mes);
	
	switch(mes){
		case 1: 
			printf("janeiro");
		break;
		
		case 2: 
			printf("fevereiro");
		break;
		
		case 3: 
			printf("março");
		break;
		
		default:
			printf("Mês inválido ou não adicionado.");
		break;
	}
	
	return 0;
}
