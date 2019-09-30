#include <stdio.h>
#include <stdlib.h>


#define imposto 0.45
#define percentualVendedores 0.28

#include <locale.h>


int main ()
{
	setlocale(LC_ALL, "Portuguese");
	char nomeVeiculo[25];
	float precoFabrica;
	float valorFinal;
	
	printf("Informe no nome do ve�culo: ");
	scanf("%s", nomeVeiculo);
	
	printf("Informe o pre�o de f�brica do ve�culo: R$ ");
	scanf("%f", &precoFabrica);
	
	valorFinal = precoFabrica*(1 + imposto + percentualVendedores);
	
	printf("Valor final �: R$ %.2f", valorFinal);
	
	return 0;
}
