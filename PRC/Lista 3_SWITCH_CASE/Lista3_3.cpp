#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include <locale.h>


int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	char letra;
	
	printf("Informe uma letra: ");
	scanf("%c", &letra);
	
	
	switch(tolower(letra)){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				printf("\n A letra escolhida é uma vogal");
				break;
			
			default:
				printf("\n A letra escolhida é uma consoante");
				break;
	}
	
	return 0;
}
