#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int somatorio(int numero){
	int soma = 0, i;
	for(i = 1; i <= numero;i++){
		soma+=i;
	}
	
	return soma;
}

int fatorial(int n){
	int fat = 1;
	while(n>1){
		fat*=n;
		n--;
		
	}
		return fat;
}

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	int opcao, numero, resultado;
	
	printf("Informe o tipo de operação (1 - somatório/ 2- fatorial): ");
	scanf("%d", &opcao);
	
	while (opcao != 0){
	
	switch (opcao){
		
		case 1:
			printf("\nInforme o número desejado: \n");
			scanf("%d", &numero);
			resultado = somatorio(numero);
			printf("Resultado: %d", resultado);
			break;
		
		case 2:
			printf("Informe o número desejado: ");
			scanf("%d", &numero);
			resultado = fatorial(numero);
			printf("\nResultado: %d", resultado);
			break;
		
		case 3:
			break;
			
		default:
			printf("Não válido!");
			break;
	}
}
	
   return 0;

 
}

