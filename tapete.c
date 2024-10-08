#include<stdio.h>
int main (){
    printf("Informe o comprimento da sala");
    float comprimento;
    scanf("%f", &comprimento);
    printf("Informe a largura da sala:");
    float largura;
    scanf("%f", &largura);
    printf("Informe o preco");
     float preco;
     scanf("%f", &preco);
     float precot = (comprimento * largura) * preco;
    printf("%f", precot) ;
    }