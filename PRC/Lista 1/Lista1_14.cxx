#include <stdio.h>

int main()
{
	float n1, n2, n3, n4, mediaPonderada;
	
	printf("Insira a nota 1: ");
	scanf("%.2f", &n1);
	
	printf("Insira a nota 2: ");
	scanf("%.2f", &n2);
	
	printf("Insira a nota 3: ");
	scanf("%.2f", &n3);
	
	printf("Insira a nota 4: ");
	scanf("%.2f", &n4);
	
	mediaPonderada=(n1+(2*n2)+(3*n3)+(4*n4))/10;
	
   
	
	printf("A media ponderada e: %.2f: ", mediaPonderada);
	
	return 0;
}