#include <stdio.h>
int main(){
printf("Informe a idade do nadador");
float idade;
scanf("%f", &idade);
if (idade <=10){
    printf("infanltil");
}
if (idade > 10 && idade <=17){
    printf("juvenil");
}
if (idade >17){
    printf("senior");
}
}