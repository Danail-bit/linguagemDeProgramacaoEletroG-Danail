#include<stdio.h>
#include<math.h>
int main (){
    printf("Informe um capital: ");
    float C;
    scanf("%f", &C);
    printf("Informe a taxa de juros mensal: ");
    float J;
    scanf("%f", &J);
    printf("Informe um periodo em meses: ");
     float t;
     scanf("%f", &t);
     int cont;
     for(cont = 1; cont <= t; cont++){
    float G = pow(1 + J / 100, cont);
     float M = C * G;
    printf("%dº mes = %.2f\n",cont,M ) ;

     }
     
    }
    