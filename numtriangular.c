#include <stdio.h>
#include <math.h>

int main() {
    int num;
    double raiz;
    do {
        printf("Insira um numero positivo: ");
        scanf("%d", &num);
    } while (num <= 0);
    raiz = (-1 + sqrt(1 + 8 * num)) / 2;
    if ((int)raiz == raiz) { 
        printf("E triangular\n");
    } else {
        printf("Nao e triangular\n");
    }
}
