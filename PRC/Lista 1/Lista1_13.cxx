#include <stdio.h>

int main()
{
	int segundosTotal, hora, minutos, segundos;
	
	printf("Insira quantos segundos: ");
	scanf("%d", &segundosTotal);
	
   hora = segundosTotal/3600;
   segundos = segundos%3600;
   minutos = segundos/60;
   segundos = segundos%60;
	
	printf("Conversao hh: mm:ss = %d : %d : %d \n", hora, minutos, segundos);
	
	return 0;
}