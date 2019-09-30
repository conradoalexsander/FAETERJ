#include <stdio.h>
#include <locale.h>

int main() {
  int genero, contm = 0, contf = 0, form= 3, i = 0;
  
  
  
  float altura, alturaM =0.0, alturaF=0.0, maiorAltura = 0.0, menorAltura = 0.0;
  
  	setlocale(LC_ALL, "Portuguese");
	    
	
	for(i = 1; i <= form; i++){
		
		printf("Informe o genero: \n");
		scanf("%d", &genero);
		
		printf("Informe o altura: \n");
		scanf("%f", &altura);
		
		
		
		if(altura > maiorAltura){
				maiorAltura = altura;
			}
		
		if(menorAltura == 0 || altura < menorAltura){
				menorAltura = altura;
		}
			
		if (genero == 0){
			contm++;
			printf("Homens: %d\n", contm);
			alturaM+=altura;
			}
		
		if (genero == 1){
			contf++;
			alturaF+=altura;
		}		
	}
	
	double mediaAltura = (alturaF+alturaM)/form;
	float percentHomem = ((float) contm/form);	
	
	
	printf("A maior altura é: %.2f\n", maiorAltura);
	printf("A menor altura é: %.2f\n", menorAltura);
	printf("A média da altura feminina é: %.2f\n", alturaF/contf);
	printf("A média da altura da população é: %.2f\n", mediaAltura);
	printf("O percentual de homens é: %.2f", percentHomem);

			
  	return 0;
}
