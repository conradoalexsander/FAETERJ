#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	int numero;

	
	printf ("Insira um numero: ");
	scanf ("%d", &numero);
	
	
	
	if (numero%2 == 1){
		printf ("O numero é ímpar %d\n", numero);
		} else {
		printf ("O numero é par %d\n", numero);
		}
	return 1;
}
