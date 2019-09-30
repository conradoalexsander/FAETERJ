#include <stdio.h>

int main() {
  int num,       
      aux,        
      meliante,
	  aux2; 


  printf("Digite um natural: ");
  scanf("%d", &num);

  aux = num;
  meliante = 0;

  while (aux >= 171) {
  	
    meliante = meliante * 10 + aux % 1000; 
	printf("%d\n", aux%10); 
	 if (aux%1000 == 171){
      	aux2 == aux;
	  }
    aux = aux /1000; 
     
	                     
  }
	
  if (aux2 == 171)
    printf("%d e' meliante\n", num);
  else
    printf("%d nao e' meliante\n", meliante);
	 
  return 0;
}

