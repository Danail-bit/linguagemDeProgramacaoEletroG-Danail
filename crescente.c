#include <stdio.h>

int main() {
    printf("Digite o primeiro numero: ");
    float num1;
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    float num2;
    scanf("%f", &num2);
    printf("Digite o terceiro numero: ");
    float num3;
    scanf("%f", &num3);
    float x1;
    float x2;
    float x3;
    
if(num1 < num2 && num1 < num3){
x1 = num1;
}
if(num2 < num1 && num2 < num3){
    x1 = num2;
}
if(num3 < num1 && num3 < num2 ){
    x1 = num3;
}

if(num1 > num2 && num1 < num3 || num1 > num3 && num1 <num2 ){
x2 = num1;
}
if(num2 > num1 && num2 < num3 || num2 > num3 && num2 <num1){
    x2 = num2;
}
if(num3 > num1 && num3 < num2 || num3 > num2 && num3 < num1){
    x2 = num3;
}
if(num1 > num2 && num1 > num3){
x3 = num1;
}
if(num2 > num1 && num2 > num3){
    x3 = num2;
}
if(num3 > num1 && num3 > num2 ){
    x3 = num3;
}
printf("Os numeros em ordem crescente sao: %f, %f, %f\n", x1, x2, x3);

}