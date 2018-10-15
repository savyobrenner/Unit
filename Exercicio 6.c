#include <stdio.h>
int choice1, choice2;
int main(void) {
 printf("Ola, somos o Instituto Irradiar, e aqui temos alguns dos nossos alunos :p \n \n \n ");
 printf("1 - Eduardo \n 2 - Mateus \n 3 - Ana Luiza \n 4 - Tiago \n 5 - Bruno \n 6 - Tais\n  \n");
 //getchar();
printf("Voce quer sair ou saber mais sobre os alunos ? (1 para sim e 0 para nao) ;) \n");
 scanf("%d", &choice2);
 printf("Selecione o numero correspondente a seus nomes e saiba um pouco mais sobre eles ;) \n");
scanf("%d", &choice1);

while(choice2 != 0) {
 switch(choice1) {
  case 1: printf("Entao voce quer saber mais sobre o Eduardo, ele tem 12 anos, ja participa a 8 meses do projeto, um otimo progamador, e tem manias de queimar leds\n") ;
  printf("\n Voce quer sair ou saber mais sobre os alunos ? (1 para sim e 0 para nao) ;) \n");
 scanf("%d", &choice2);
 if (choice2 == 0){

   break;
 }
 else {
 printf("\n Selecione o numero correspondente a seus nomes e saiba um pouco mais sobre eles ;) \n");
scanf("%d", &choice1);
continue;
 }
   case 2 : printf("Entao voce quer saber mais sobre o Mateus, ihh esse e danado, mas se da muito bem em montagem de circuitos, sempre auxilia os colegas nas praticas \n") ;
  printf("\n Voce quer sair ou saber mais sobre os alunos ? (1 para sim e 0 para nao) ;) \n");
 scanf("%d", &choice2);
 if (choice2 == 0){

   break;
 }
 else {
 printf("\n Selecione o numero correspondente a seus nomes e saiba um pouco mais sobre eles ;) \n");
scanf("%d", &choice1);
continue;
 }
   case 3 : printf("Entao voce quer saber mais sobre a Ana Luiza, ela e bastante timida , porem bem esforçada nas atividades, nunca queimou nenhum equipamento \n") ;
  printf("\n Voce quer sair ou saber mais sobre os alunos ? (1 para sim e 0 para nao) ;) \n");
 scanf("%d", &choice2);
 if (choice2 == 0){

   break;
 }
 else {
 printf("\n Selecione o numero correspondente a seus nomes e saiba um pouco mais sobre eles ;) \n");
scanf("%d", &choice1);
continue;
 }
   case 4 : printf("Entao voce quer saber mais sobre o Tiago, ele e o engracado da turma, que sempre faz susto com as descargar que leva na protoboard \n") ;
  printf("\n Voce quer sair ou saber mais sobre os alunos ? (1 para sim e 0 para nao) ;) \n");
 scanf("%d", &choice2);
 if (choice2 == 0){

   break;
 }
 else {
 printf("\n Selecione o numero correspondente a seus nomes e saiba um pouco mais sobre eles ;) \n");
scanf("%d", &choice1);
continue;
 }
   case 5 : printf("Entao voce quer saber mais sobre o Bruno, ele so foi pra duas aulas nao tem muito o que dizer \n") ;
  printf("\n Voce quer sair ou saber mais sobre os alunos ? (1 para sim e 0 para nao) ;) \n");
 scanf("%d", &choice2);
 if (choice2 == 0){

   break;
 }
 else {
 printf("\n Selecione o numero correspondente a seus nomes e saiba um pouco mais sobre eles ;) \n");
scanf("%d", &choice1);
continue;
 }
   case 6 : printf("Entao voce quer saber mais sobre a Tais, ela e irma do Bruno e tambem so foi duas aulas, caracteristicas inconclusivas \n") ;
  printf("\n Voce quer sair ou saber mais sobre os alunos ? (1 para sim e 0 para nao) ;) \n");
 scanf("%d", &choice2);
 if (choice2 == 0){

   break;
 }
 else {
 printf("\n Selecione o numero correspondente a seus nomes e saiba um pouco mais sobre eles ;) \n");
scanf("%d", &choice1);
continue;
 }
 }
}
 return 0;
}
