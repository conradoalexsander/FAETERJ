#include<stdio.h>

void main(){
	int n;
	printf("Entre com n: ");
	scanf("%d", &n);
	
	if(n%10 == 0){
		printf("O numero é divisível por 2 e por 5.");
	} else if(n%2==0){
		printf("Divisível somente por 2!\n");
	} else if(n%5 == 0) {
		printf("Divisível somente por 5\n");
	} else {
		printf("O número não é divisível nem por 2, nem por 5");
	}
}
	

