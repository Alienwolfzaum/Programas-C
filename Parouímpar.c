#include <stdio.h>

int main() {

    int numero;

    printf("Por gentileza me informe um numero: ");
    scanf("%d", &numero);

    if(numero % 2 == 0) {
        printf("Este numero e par");
    }
    else {
        printf("Este numero e impar");
    }

    return 0;
}