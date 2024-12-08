#include <stdio.h>
int main() {
 int num , soma, resto, div, posic;
 posic = 1;
 printf("Numero? ");
 scanf("%d", &num);
 soma = 0;
 while( num > 0 ) {
 resto = num % 10;
 num /= 10;
 soma += resto * posic;
 posic++;
 }
 div = soma % 10;
 printf("O digito verificador é  = %d\n", div);
} 