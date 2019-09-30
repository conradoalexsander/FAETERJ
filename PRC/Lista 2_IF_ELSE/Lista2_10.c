#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
 	setlocale(LC_ALL, "Portuguese");
	
	int peso;
	float altura;
	

	
	printf("Informe o peso do atleta: ");
	scanf("%d", &peso);
	
	printf("Informe a altura do atleta: ");
	scanf("%f", &altura);
	
	
	if(peso >= 45 && peso < 50 && altura <1.60){
		
		printf("\nCategoria: novato");
			
	} else {
		
		if(peso >= 50 && peso <= 60 && altura <1.70){
				
				printf("\nCategoria: profissional");
			}
			
			else{
				printf("\nCategoria: amador");
			}
		}
			
	return 0;
}
