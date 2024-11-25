#include <stdio.h>
int main() {
 printf("Quantos Eleitores?:");
 int eleit;
 scanf("%d", &eleit);
 int cont;
 char voto;
 int somaA=0;
 int somaB=0;
 int somaC=0;
 int somaX=0;
 for(cont = 1; cont <=eleit; cont++){
 printf("%dº voto: (candidatos: a, b, c. nulo- qualquer letra) ", cont);
 scanf(" %c", &voto);
 if(voto == 'a'){
somaA++;
} 
else if(voto =='b'){
    somaB++;
}
 else if(voto =='c'){
somaC++;
}
 else{
    somaX++;
 }
}
printf("Candidato A = %d votos\n", somaA);
 printf("Candidato B = %d votos\n", somaB);
 printf("Candidato C = %d votos\n", somaC);
 printf("Votos Nulos = %d \n", somaX);
}