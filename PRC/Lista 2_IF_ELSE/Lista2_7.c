#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Portuguese");
	int numero;
	
	printf("Informe um numero: ");
	scanf("%d", &numero);
	
	if(numero%2==0 && numero%3 == 0){
		printf("O numero � divis�vel por 2 e por 3");
	} else {
		if(numero%3 == 0){
			printf("O numero � divis�vel por 3");
		} else {
			if (numero%2 == 0) {
				printf("O numero � divis�vel por 2");
			} else {
				printf("O n�mero n�o � divis�vel por 2 nem por 3");
			}
		}
	}
	
	
	
	
	
	
	return 0;
}
