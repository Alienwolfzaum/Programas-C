#include <stdio.h>

int maior(int a, int b, int c){
    if(a > b && a > c){
        return a;
    }
    else if(b > a && b > c){
        return b;
    }
    else{
        return c;
    }
    }

    int main(){

int x;
int y;
int w;
int result;

printf("Digite um numero: ");
scanf("%d", &x);
printf("Digite um numero: ");
scanf("%d", &y);
printf("Digite um numero: ");
scanf("%d", &w);

result = maior(x, y, w);

printf("O maior numero de todos: %d", result);

        return 0;
    }