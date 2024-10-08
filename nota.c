#include <stdio.h>
int main() {
 printf("Nota do primeiro bimestre:");
 float N1;
 scanf("%f", &N1);
printf("Nota do segundo bimestre:");
 float N2;
 scanf("%f", &N2);
printf("Nota do terceiro bimestre:");
 float N3;
 scanf("%f", &N3);
printf("Nota do quarto bimestre:");
 float N4;
 scanf("%f", &N4);
float media;
media = N1 + N2 + N3 + N4;

 if( media < 16 ){
    printf("Aluno Reprovado");
 }
 if( media>= 16  && media < 28 ){
    printf("Recuperacao Final\n");
 }
 if(media >= 28){
    printf("Aprovado");
 }
 
}