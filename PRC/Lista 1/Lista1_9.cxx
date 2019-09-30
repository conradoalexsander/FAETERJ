#include <stdio.h>

int main()
{
	float valor, valorDesconto;
	
	printf("Insira o valor para receber o desconto de 10%: ");
	scanf("%f", &valor);
	
	
	valorDesconto= valor - valor*0.1;
	
	printf("Valor com desconto e %.2f\n", valorDesconto);
	return 0;
}