#include <stdio.h>
#include <stdlib.h>

#include <locale.h>


int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int codCargo;
	float salario, salarioNovo;
	
	printf("Informe o c�digo do cargo do funcion�rio: ");
	scanf("%d", &codCargo);
	
//	fflush(stdin);
	
	printf("\nInforme o sal�rio do funcion�rio: R$ ");
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
	
	printf("\nSal�rio antigo: R$ %.2f", salario);
	printf("\nSal�rio novo: R$ %.2f", salarioNovo);
	printf("\nDiferen�a: R$ %.2f", salarioNovo - salario);
	
	
	return 0;
}
