#include <stdio.h>

int main() {
    printf("Informe o sexo (M ou H): ");
    char sexo;
    scanf(" %c", &sexo);
    printf("informe a sua altura: ");
    float alt;
    scanf(" %f", &alt);
    float pesoi;
    if(sexo == 'H'){
    pesoi = 72.7 * alt - 58;
    printf("Seu peso ideial e %.2f", pesoi);
    }
    if(sexo == 'M'){
    pesoi = 62.1 * alt - 44.7;
    printf("Seu peso ideial e %.2f", pesoi);
    }
}