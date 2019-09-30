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
	
	printf("Informe no nome do veículo: ");
	scanf("%s", nomeVeiculo);
	
	printf("Informe o preço de fábrica do veículo: R$ ");
	scanf("%f", &precoFabrica);
	
	valorFinal = precoFabrica*(1 + imposto + percentualVendedores);
	
	printf("Valor final é: R$ %.2f", valorFinal);
	
	return 0;
}
