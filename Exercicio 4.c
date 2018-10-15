#include <stdio.h>

int main(void) {
 int lili[5];
 printf("Usuario digite ai 5 numeros :\n");
 for (int i = 0; i <= 4; i++){
scanf("%d", &lili[i]);
 }
 for (int i = 4; i >= 0; i--){
printf(" %d ", lili[i]);
 }
 return 0;
}
