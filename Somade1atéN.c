#include <stdio.h>

int main() {

    int i;
    int soma = 0;
    int N;

    printf("Digite um numero: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {

        soma += i;
    }

    printf("Resultado = %d\n", soma);

    return 0;
}