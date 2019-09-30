#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	int n1;
	int n2;

	
	printf ("Insira o primeiro numero: ");
	scanf ("%d", &n1);
	
	printf ("Insira o segundo numero: ");
	scanf ("%d", &n2);
	
	
	
	if (n1<n2){
		printf ("%d %d\n", n1, n2);
		} else {
		printf ("%d %d\n", n2, n1);
		}
	return 1;
}
