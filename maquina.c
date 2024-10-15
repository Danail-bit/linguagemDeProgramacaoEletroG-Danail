#include <stdio.h>
int main(){
printf("Informe o numeros de pecas fabricadas");
float pecasfa;
scanf("%f", &pecasfa);
printf("Informe o numeros de pecas defeituosas");
float pecasde;
scanf("%f", &pecasde);
float calc = pecasfa*0.1;
if (pecasde > calc){
    printf("maquina precisa de manuntencao");
}
if (pecasde <= calc){
    printf("maquina nao precisa de manuntencao");
}
}