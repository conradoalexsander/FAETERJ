#include <stdio.h>

#include <string.h>


#include <stdio.h>

int main() {
  int num,       
      aux,        
      reverso;    

  double resto;

  printf("Digite um natural: ");
  scanf("%d", &num);

  aux = num;
  reverso = 0;

  while (aux != 0) {
    reverso = reverso * 10 + aux % 10; 
    
	printf("Resto: %f", resto=aux%10);
    printf(" / Reverso: %f", reverso);
	printf("%d\n", aux); 
	
    aux = aux / 10;                     
  }
	
  if (reverso == num)
    printf("%d e' palindrome\n", num);
  else
    printf("%d nao e' palindrome\n", num);
	 
  return 0;
}
