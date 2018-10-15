#include <stdio.h>

int main(void) {
 float num1, num2, soma, sub, div, mult;
 char operacao;
 printf("Ola , Bem vindo(a)\n");
 printf("Essa é a calculadora, por favor digite o primeiro numero inteiro a ser operado :");
 scanf("%f", &num1);
 printf("Tudo bem , agora só me diz qual a operacao desejada ? (+ - / *) \n");
 scanf(" %c", &operacao);
 printf("Por favor digite o segundo numero inteiro a ser operado :\n");
 scanf("%f", &num2);
 soma = num1 + num2;
sub = num1 - num2;
div = num1 / num2;
mult = num1 * num2;
 switch(operacao){
   case '+' : printf("O resultado e : %2.f", soma) ;
    break;
   case '-' : printf("O resultado e : %2.f", sub) ;
   break;
   case '/': printf("O resultado e : %2.f", div) ;
   break;
   case '*' : printf("O resultado e : %2.f", mult) ;
   break;
   default:
      printf("Voce digitou uma operacao incorreta!");
 }

 return 0;
}
