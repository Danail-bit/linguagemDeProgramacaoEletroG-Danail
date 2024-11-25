#include <stdio.h>
int main() {
 printf("Quantos alunos?:");
 int alunos;
 scanf("%d", &alunos);
 int cont;
 int notas;
 float soma = 0;
 float media;
 for(cont = 1; cont <=alunos; cont++){
 printf("%d nota: ", cont);
 scanf("%d", &notas);
 soma += notas; 
 }
media = soma / alunos;
printf("media é = %.2f", media);
 
 
}