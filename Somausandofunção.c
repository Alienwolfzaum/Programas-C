#include <stdio.h>

int soma(int a, int b){
    return b + a;
}

int main(){

int x;
int y;

printf("Digite um numero: ");
scanf("%d", &x);

printf("Digite um numero: ");
scanf("%d", &y);

printf("O dobro deste numero: %d",soma(x, y));

return 0;
}