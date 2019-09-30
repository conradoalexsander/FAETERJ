#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n1;
	int n2;
	int n3;
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &n2);
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &n3);
	
	if(n1 > n2 && n1 > n3){
		printf("O maior número é: %d\n", n1);
	} else {
		if(n2> n3 && n2>n1){
			printf("O maior número é: %d\n", n2);
		} else {
			
				printf("O maior número é: %d\n", n3);
			}
		}
	return 0;
}
