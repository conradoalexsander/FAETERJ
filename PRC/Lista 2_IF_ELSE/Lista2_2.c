#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float temperatura;

	
	printf ("Insira a sua temperatura: ");
	scanf ("%f", &temperatura);
	
	
	
	if (temperatura < 36.5){
		printf ("Você está normal. Sua temperatura: %.2f\n", temperatura);
		} else {
		printf ("Você está com febre . Sua temperatura: %.2f\n", temperatura);
		}
	return 0;
}
