#include <stdio.h>

int main() {

    int i;
    int N;
    int array[100];
    int soma = 0;
    float media;

    printf("Quantas repeticoes vai querer meu patrao?: ");
    scanf("%d", &N);

    for(i = 0; i < N; i++) {

        printf("Digite um numero: ");
        scanf("%d", &array[i]);

        soma += array[i];
    }

    media = (float)soma / N;

    printf("A media e: %.2f\n", media);

    return 0;
}