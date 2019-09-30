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
	
	printf("Informe quantos anos de serviço o funcionário possui: ");
	scanf("%f", &anosServico);
	
	printf("Informe o numero de dependentes do funcionário: ");
	scanf("%d", &dependentes);
	
	printf("Informe o salário do funcionário: R$ ");
	scanf("%f", &salario);
	
	
	if(anosServico > 4.00 && dependentes > 3 && salario < 500.00){
		printf("\nO funcionário possui direito a aumento!");
			
		printf("\nSalario antigo: %.2f", salario);
		
		novoSalario = salario * (1+0.4);
			
		printf("\nNovo salario: R$ %.2f", novoSalario);

		
		printf("\nDiferença entre o salário novo e antigo: %.2f\n", novoSalario-salario);
	
	
	} else {			
				printf("O funcionário não possui direito a um aumento de salário");
			}
			
	return 0;
}
