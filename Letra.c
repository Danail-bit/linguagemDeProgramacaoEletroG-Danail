#include<stdio.h>
int main(){
printf("Informe a letra: ");
char letra;
scanf("%c", &letra);
if(letra == 'S' || letra == 's'){
printf("Solteiro");
}
if(letra == 'C'|| letra == 'c'){
printf("Casado");
}
if(letra == 'D' || letra == 'd'){
printf("Divorciado");
}
if(letra == 'V'|| letra == 'v'){
printf("Viuvo");
}
}