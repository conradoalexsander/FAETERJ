#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Portuguese");
	float anosServico;
	float salario;
	float novoSalario;
	float diferenca;
	int dependentes;
	
	printf("Informe quantos anos de servi�o o funcion�rio possui: ");
	scanf("%f", &anosServico);
	
	printf("Informe o numero de dependentes do funcion�rio: ");
	scanf("%d", &dependentes);
	
	printf("Informe o sal�rio do funcion�rio: R$ ");
	scanf("%f", &salario);
	
	
	if(anosServico > 4.00 && dependentes > 3 && salario < 500.00){
		printf("\nO funcion�rio possui direito a aumento!");
			
		printf("\nSalario antigo: %.2f", salario);
		
		novoSalario = salario * (1+0.4);
			
		printf("\nNovo salario: R$ %.2f", novoSalario);

		
		printf("\nDiferen�a entre o sal�rio novo e antigo: %.2f\n", novoSalario-salario);
	
	
	} else {			
				printf("O funcion�rio n�o possui direito a um aumento de sal�rio");
			}
			
	return 0;
}
