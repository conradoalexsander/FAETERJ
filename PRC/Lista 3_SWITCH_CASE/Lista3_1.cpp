#include <stdio.h>
#include <stdlib.h>

#include <locale.h>


int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n1;
	int n2;
	int n3;
	int aux;
	
	int primeiro, segundo, terceiro;
	char ordem;
	
	printf("Informe o primeiro número: ");
	scanf("%d", &n1);
	
	printf("Informe o segundo número: ");
	scanf("%d", &n2);
	
	printf("Informe o terceiro número: ");
	scanf("%d", &n3);
	
	
	
	if(n1>n2){
	aux = n1;
	n1=n2;
	n2=aux;
	}
	
	if(n2>n3){
	aux = n2;
	n2=n3;
	n3=aux;
	}
	
	if(n1>n2){
	aux = n1;
	n1=n2;
	n2=aux;
	}
	//__fpurge(stdin); //limpa teclado linux	
	fflush(stdin); //limpa teclado windows
	
	printf("Informe se deseja visualizar os números em ordem crescente (c) ou decrescente (d): ");
	scanf("%c", &ordem);
	
	switch(ordem){
		case 'c': 
		
			printf("Números em ordem crescente: %d, %d, %d", n1, n2, n3);
		break;
		
		case 'd': 
			printf("Números em ordem crescente: %d, %d, %d", n3, n2, n1);
		break;
		
		
	}
	
	return 0;
}
