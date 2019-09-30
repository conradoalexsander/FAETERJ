#include <stdio.h>

int main()
{
	float base, altura, area;
	
	printf("Insira a base do triangulo: ");
	scanf("%f", &base);
	
	printf("Insira a base do triangulo: ");
	scanf("%f", &altura);
	
	area= (base*altura)/2;
	
	printf("Area do quadrado e: %.2f\n", area);
	return 0;
}