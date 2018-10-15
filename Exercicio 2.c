#include <stdio.h>

int matri;
float nota1;
float nota2;
float mediafinal;
int num;
int main(void) {
 do {
 printf("Ola caro aluno da Universidade Tiradentes, por favor insira sua matricula :\n");
 scanf("%i", &matri);
 printf("Tudo bem , agora por favor digite sua nota da primeira unidade :\n");
 scanf("%f", &nota1);
 printf("Ok , agora por favor digite sua nota da segunda unidade :\n");
 scanf("%f", &nota2);
 mediafinal = (nota1 * 0.4) + (nota2 * 0.6);

 if(mediafinal < 4){
 printf("Ok %i nao foi dessa vez, sua media e %.2f logo voce esta reprovado \n", matri, mediafinal);
 }
 if(mediafinal > 4 && mediafinal < 6){
 printf("Ok %i voce consegue, sua media e %.2f logo voce esta de recuperacao final \n", matri, mediafinal);
 }
 if(mediafinal > 6){
 printf("Ok %i voce conseguiu, sua media e %.2f logo voce esta aprovado :) \n", matri, mediafinal);
 printf("\n");
 printf("\n");
 printf("Deseja verificar a situacao de mais algum aluno ? Digite 1 para Sim e 3 para Nao \n");
 scanf("%i", &num);
 }
} while(num <2 );
getchar();
 return 0;
}
