#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Portuguese");
		
	char genero;
	printf("Informe o g�nero (M/F): ");
	scanf("%c", &genero);
	
	if (genero == 'm' || genero =='M'){
		printf("Homem");
	} else{
	 	if (genero == 'f' || genero == 'F'){
			printf("Mulher");
		} else {
		printf("Letra inv�lida.");
	}
	return 0;
	}
}	
	

