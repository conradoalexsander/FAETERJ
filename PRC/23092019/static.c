
#include <stdlib.h>

#include <stdio.h>

int count (void)
{
   static int num = 0;
   num++;
   return num;
}

main(){
       int i = 0;
       for(i=0;i<10;i++)    
           printf("count = %i\n", count());
           
       system("PAUSE");
}
