#include <stdio.h>

int main() {

    int numeros[5];
    int i;

    for(i = 0; i < 5; i++) {

        printf("Entre com valor: ");
        scanf("%d", &numeros[i]);
    }

    for(i = 0; i < 5; i++) {

        printf("%d\n", numeros[i]);
    }

    return 0;
}