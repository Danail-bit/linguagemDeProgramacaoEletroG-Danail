#include<stdio.h>
int main (){
    printf("Informe a quantidade de bytes");
    float bytes;
    scanf("%f", &bytes);
    printf("Informe a velocidade");
    float velocidade;
    scanf("%f", &velocidade);
     float tempo = bytes / velocidade;
    printf("%f", tempo );
    }