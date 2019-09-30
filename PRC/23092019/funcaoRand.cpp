#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
	int x;
	srand(time(NULL));
	for(x=0;x<10;x++){
		printf("Numero aleatorio %d\n", rand()%100);
	}
	
	return 0;
}
