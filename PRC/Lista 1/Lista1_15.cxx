#include <stdio.h>

int main()
{
	float raioBase, altura, volumeLata;
	
	printf("Insira o raio da base da lata ");
	scanf("%f", &raioBase);
	
	printf("Insira a altura da lata ");
	scanf("%f", &altura);
	
	volumeLata = (3.14*raioBase*raioBase)*altura;
	
	printf("O volume da lata e: %.2f: ", volumeLata);
	
	return 0;
}