#include <stdio.h>
int main(){
printf("Informe a quantidade de folhas");
float folhas;
scanf("%f", &folhas);
if (folhas <=100){
    float valor;
    valor = folhas * 0.25 ;
    printf("%f", valor );
}
if (folhas >100){
float valor2;
valor2 = folhas * 0.20;
printf("%f", valor2);

}




}