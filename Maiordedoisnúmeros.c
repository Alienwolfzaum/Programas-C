#include <stdio.h>

int maior(int a, int b){	
    if(a > b){
    	return a;
    }
    else{
    	return b;
    }
}

int main(){

int x;
int y;

printf("Digite um numero: ");
scanf("%d", &x);

printf("Digite um numero: ");
scanf("%d", &y);

printf("Este e o numero maior: %d", maior(x, y));


return 0;
}