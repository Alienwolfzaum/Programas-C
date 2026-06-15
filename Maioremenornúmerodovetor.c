#include <stdio.h>

int main() {

    int i;
    int array[5];
    int maior;
    int menor;

    for(i = 0; i < 5; i++) {

        printf("Digite o numero: ");
        scanf("%d", &array[i]);

        if(i == 0) {

            maior = array[i];
            menor = array[i];
        }

        if(array[i] > maior) {

            maior = array[i];
        }

        if(array[i] < menor) {

            menor = array[i];
        }
    }

    printf("O maior numero e: %d\n", maior);
    printf("O menor numero e: %d\n", menor);

    return 0;
}