#include <stdio.h>

int main(void) {
 float idadesCriancas[20] = {7,10,12,13,7,8,9,15,14,12,13,11,11,11,10,9,9,10,12,13}, media, soma;
 int i;
 printf("Para facilitar o trabalho do Instituto Irradiar , desenvolvemos esse algoritimo que entrega de forma rapida e pratica a media de idades dos alunos do instituto :)\n \n");
  for( i = 0 ; i <= 19; i++){
 soma = soma + idadesCriancas[i];
 media = soma / 20 ;
 }
 printf(" Essa e a media das idades do nosso atual quadro de alunos : %2.f\n", media);
 
 return 0;
}
