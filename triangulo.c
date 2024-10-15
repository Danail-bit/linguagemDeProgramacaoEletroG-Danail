#include <stdio.h>
int main(){
printf("Informe o tamanho da base");
float base;
scanf("%f", &base);
printf("Informe o tamanho do lado 1");
float lado1;
scanf("%f", &lado1);
printf("Informe o tamanho do lado 2");
float lado2;
scanf("%f", &lado2);
if (base == lado1 && base == lado2 && lado1 == lado2 ){
    printf("triangulo equilatero");
}
if ((base == lado1 && base!= lado2) || (lado1 == lado2 && lado2 != base) || (base == lado2 && lado2 != lado1) ){
    printf("triangulo isoscele");
}
if (base != lado1 && base != lado2 && lado1 != lado2 ){
    printf("triangulo escaleno");
}
}