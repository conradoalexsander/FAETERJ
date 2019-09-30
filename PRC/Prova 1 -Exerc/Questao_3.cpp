#include<stdio.h>
#include<conio.h>

	
float valorTotal(int quantidade, float valorProduto){
return quantidade*valorProduto;
}

int main(){
	int codigo;
	int quantidade;
	printf("Informe o codigo do produto: ");
	scanf("%d", &codigo);
	
	printf("Informe a quantidade do produto: ");
	scanf("%d", &quantidade);
	

	
	switch (codigo){
		case 11:
			printf("Valor total devido: R$ %.2f", valorTotal(quantidade, 5.30));
			break;
		
		case 12:
			printf("Valor total devido: R$ %.2f", valorTotal(quantidade, 7.50));
			break;
			
		case 13:
			printf("Valor total devido: R$ %.2f", valorTotal(quantidade, 2.70));
			break;
			
		case 14:
			printf("Valor total devido: R$ %.2f", valorTotal(quantidade, 9.90));
			break;
	}
	
	return 0;
}

