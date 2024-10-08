#include<stdio.h>
int main (){
    printf("Informe a distancia em km:");
    float Distancia;
    scanf("%f", &Distancia);
    printf("Informe a quantidade de gasolina em L:");
    float Litros;
    scanf("%f", &Litros);
     float consumo = Distancia / (Litros);
    printf("%f", consumo );
    }