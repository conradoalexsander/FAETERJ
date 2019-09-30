#include <stdio.h>

int main()
{
	float valorPago, precoGasolina, litrosGasolina;
	
	printf("Insira o valor pago: ");
	scanf("%f", &valorPago);
	
	printf("Insira o preco da gasolina: ");
	scanf("%f", &precoGasolina);
	
	litrosGasolina= valorPago/precoGasolina;
	
	printf("Quantidade gasolina e: %.2f\n", litrosGasolina);
	return 0;
}