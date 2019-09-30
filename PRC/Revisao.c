#include <stdio.h>

int main(){
	
	int res = 1, n;
	printf("informe o valor: ");
	scanf("%d", &n);
	
	while (n > 1){
		
		res = res * n;
		n--;
	}
	
	printf("Fatorial e: %d", res);
	return 0;

}
