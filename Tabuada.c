#include <stdio.h>

int main() {

    int num;
    int mult;
    int i;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(i = 0; i <= 10; i++) {

        mult = num * i;

        printf("%d X %d = %d\n", num, i, mult);
    }

    return 0;
}