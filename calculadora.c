#include <stdio.h>

int main() {
    printf("Digite o primeiro numero: ");
    float num1;
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    float num2;
    scanf("%f", &num2);
     printf("Digite o caractere: ");
    char carac;
    scanf(" %c", &carac);
    if(carac == '+'){
float soma;
soma = num1 + num2;
printf("%f", soma);
    }
     if(carac == '-'){
float sub;
sub = num1 - num2;
printf("%f", sub);
    }
     if(carac == '*'){
float mut;
mut = num1 * num2;
printf("%f", mut);
    }
     if(carac == '/'){
float div;
div = num1 / num2;
printf("%f", div);
    }
}
