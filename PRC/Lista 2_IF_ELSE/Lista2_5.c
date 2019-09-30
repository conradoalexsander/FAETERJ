#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float n1;
	float n2;
	float n3;
	float media;
	
	printf ("Insira a primeira nota: ");
	scanf ("%f", &n1);
	
	printf ("Insira o segunda nota: ");
	scanf ("%f", &n2);
	
	printf ("Insira a terceira nota: ");
	scanf ("%f", &n3);
	
	media = (n1+n2+n3)/3;
	
	if (media < 4){
		
		printf ("Você está reprovado. Nota: %.2f", media);
		
		} else if (media >= 4 && media < 6){
			
			printf ("Você está na prova final. Nota: %.2f", media);
			
		} else {
			
			printf ("Você está aprovado. Nota: %.2f", media);
			
		}
	return 1;
}
