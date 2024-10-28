#include <stdio.h>

int main() {
    printf("Informe a opcao desejada:\n 1- saldo\n 2-extrato\n 3- saque\n 4-sair\n  ");
    int num;
    scanf("%d", &num);
   if(num == 1){
    printf("saldo: 13 reais");
   }
   if(num == 2){
    printf("Extrato:\n 10/10/24 - voce recebeu 200 reais do neymar\n 11/10/24 voce gastou 187 reais no tigrinho");
   }
   if(num == 3){
    printf("sacar o saldo?\n 1- sim\n 2 nao, sair");
   }
   if(num == 4){
    printf("Inicio, Seja bem vindo(a)");
   }
   
}