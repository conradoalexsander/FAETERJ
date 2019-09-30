#include <stdio.h>

int main()
{
	float massaKg, massaGrama;
	
	printf("Insira a massa em kg: ");
	scanf("%f", &massaKg);
	
	massaGrama = massaKg*1000;
	
	printf("Valor em grama: %.2f g", massaGrama);
	return 0;
}