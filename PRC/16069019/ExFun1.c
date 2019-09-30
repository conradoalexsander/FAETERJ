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
	
	printf("Informe o tipo de opera��o (1 - somat�rio/ 2- fatorial): ");
	scanf("%d", &opcao);
	
	while (opcao != 0){
	
	switch (opcao){
		
		case 1:
			printf("\nInforme o n�mero desejado: \n");
			scanf("%d", &numero);
			resultado = somatorio(numero);
			printf("Resultado: %d", resultado);
			break;
		
		case 2:
			printf("Informe o n�mero desejado: ");
			scanf("%d", &numero);
			resultado = fatorial(numero);
			printf("\nResultado: %d", resultado);
			break;
		
		case 3:
			break;
			
		default:
			printf("N�o v�lido!");
			break;
	}
}
	
   return 0;

 
}

