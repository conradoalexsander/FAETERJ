#include <stdio.h>

int main()
{
	int diaAno, mesAno, dias, ano;
	
	printf("Insira o dia do mes desejado: ");
	scanf("%d", &diaAno);
	
 	printf("\n");
	
	printf("Insira o mes desejado: ");
	scanf("%d", &mesAno);
	
		printf("\n");
	
	printf("Insira o ano:  ");
 	scanf("%d", &ano);
		printf("\n");
		
	dias = diaAno + 30*mesAno +365*ano;
	
	printf("Quantidade de dias e: %.2d\n", dias);
	return 0;
}