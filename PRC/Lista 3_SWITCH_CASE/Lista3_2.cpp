#include <stdio.h>
#include <stdlib.h>

#include <locale.h>


int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int codCargo;
	float salario, salarioNovo;
	
	printf("Informe o código do cargo do funcionário: ");
	scanf("%d", &codCargo);
	
//	fflush(stdin);
	
	printf("\nInforme o salário do funcionário: R$ ");
	scanf("%f", &salario);
	

	
	switch(codCargo){
		
		case 101:
			salarioNovo = salario + salario*0.05;
			break;
		
		case 102:
			salarioNovo = salario+ salario*0.075;
			break;
		
		case 103:
			salarioNovo = salario+ salario*0.1;
			break;
		
		default:
			salarioNovo = salario+ salario*0.15;
			break;
	}
	
	printf("\nSalário antigo: R$ %.2f", salario);
	printf("\nSalário novo: R$ %.2f", salarioNovo);
	printf("\nDiferença: R$ %.2f", salarioNovo - salario);
	
	
	return 0;
}
