#include <stdio.h>

void funcaoA(VOID);
void funcaoB(VOID);
void funcaoC(VOID);

int x = 1;

main(){
       
       int x = 5;
       printf("x local no escopo externo de main e %d\n", x);
       {
                 int x = 7;
                 printf("x local no escopo interno de main e %d\n", x); 
       }
       printf("x local no escopo externo de main e %d\n", x);
       funcaoA();
       funcaoB();
       funcaoC();       
       funcaoA();
       funcaoB();
       funcaoC();
       
       printf("x local em main e %d\n", x);
       system("PAUSE");
}

void funcaoA(void){
     int x = 25;
     printf("x local em funcaoA e %d depois de entrar em funcaoA\n", x);
     ++x;
     printf("x local em funcaoA e %d antes de sair da funcaoA\n", x);
}

void funcaoB(void){
     static int x = 50;
     printf("x local estatico e %d ao entrar em funcaoA\n", x);
     ++x;
     printf("x local estatico e %d ao sair da funcaoA\n", x);
}

void funcaoC(void){
     printf("x glocal e %d ao entrar em funcaoC\n", x);
     x *=10;
     printf("x glocal e %d ao sair da funcaoC\n", x);
 }
