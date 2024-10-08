#include<stdio.h>
#include<math.h>
int main (){
    printf("Informe um capital");
    float C;
    scanf("%f", &C);
    printf("Informe a taxa de juros mensal:");
    float J;
    scanf("%f", &J);
    printf("Informe um periodo em meses");
     float M;
     scanf("%f", &M);
     float G = pow(1 + J / 100, M);
     float F = C * G;
    printf("%f", F) ;
    }
    