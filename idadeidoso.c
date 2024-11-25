#include <stdio.h>
int main() {
 printf("Quantos pacientes?:");
 int pac;
 scanf("%d", &pac);
 int cont;
 int idadepac = 0;
int idademaior = 0 ;
 for(cont = 1; cont <=pac; cont++){
 printf("Idade do %dº paciente: ", cont);
 scanf("%d", &idadepac);
 if(idadepac > idademaior){
    idademaior = idadepac;
 }
 }

printf("A idade do paciente mais velho e = %d", idademaior);
 

}