#include <stdio.h>
#include <stdlib.h>

#include <locale.h>

void soma(float n1, float n2){
	float result = n1+n2;
	printf("%.2f", result);
}

float subtracao(float n1, float n2){
	float result = n1-n2;
	return result;
}

void multiplicacao(float n1, float n2){
	float result = n1*n2;
	printf("%.2f", result);
}

void divisao(float n1, float n2){
	float result = n1/n2;
	printf("%.2f", result);
}

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	char codOperacao;
	float n1, n2;
		
	printf("Informe a opera��o (+,-,*,/): ");
	scanf("%c", &codOperacao);
	
	
	printf("\nInforme o valor do primeiro n�mero: ");
	scanf("%f", &n1);
	
		printf("\nInforme o valor do segundo n�mero: ");
	scanf("%f", &n2);
	
	switch(codOperacao){
		
		case '+':
			soma(n1,n2);
			break;
		
		case '-':
			printf("%.2f", subtracao(n1, n2));
					break;
		case '*':
			multiplicacao(n1, n2);
				break;
		case '/':
			divisao(n1, n2);
			break;
		
		default:
			printf("C�digo da opera��o inv�lido!");
			break;
	}
	
	
	
	return 0;
}
