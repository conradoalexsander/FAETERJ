#include <stdio.h>

int main() {
  int contador = 1, num = 1000, i = 1000;    
  int x;
     

	
	while(contador <= 5){
		i++;
    	if(i%11 == 5){
    	num = i;
    	printf("numero %d: %d", contador, num);
    	printf(" \ resto: %d\n", i%11);
    
    	contador++;
    		
		}
		

}
	printf("O quinto número é: %d", num);
  return 0;
}
