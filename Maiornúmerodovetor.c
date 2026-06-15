#include <stdio.h>

int main() {

    int i;
    int array[5];
    int maior;

    for(i = 0; i < 5; i++) {

        printf("Digite o numero: ");
        scanf("%d", &array[i]);

        if(i == 0) {

            maior = array[i];
        }

        if(array[i] > maior) {

            maior = array[i];
        }
    }

    printf("O maior numero e: %d\n", maior);

    return 0;
}