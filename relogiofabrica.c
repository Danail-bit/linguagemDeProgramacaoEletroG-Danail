#include <stdio.h>
int main(){
printf("Valor de X? ");
int x;
scanf("%d",&x);
printf("Valor de Y? ");
int y;
scanf("%d",&y);
int temp = 1;
while(temp % x !=0 || temp % y !=0 ){
temp++;
}
printf("o tempo minimo é de: %d minutos",temp);
}