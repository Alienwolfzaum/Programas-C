#include <stdio.h>

int main() {

    char nome[50];
    int idade;

    printf("Qual seu nome: ");
    scanf("%s", nome);

    printf("Qual sua idade: ");
    scanf("%d", &idade);

    printf("O nome do usuario e %s\n", nome);
    printf("e sua idade: %d\n", idade);

    return 0;
}