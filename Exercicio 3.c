#include <stdio.h>

int main(void) {
 int num2;
 printf("Ola meu caro, bem vindo ao jogo do infinito para jogar voce deve digiar um desses numeros (1, 2,3):\n");
for (;;){

   printf("Tudo bem, agora digite um desses numeros (1,2 ou 3): \n");
   scanf("%i", &num2);
   if(num2 != 1 && num2 != 2 && num2 != 3 ){

     break;
   }

 }
 printf("Voce é chato nao seguiu as regras, PERDEEU");
 return 0;
}


