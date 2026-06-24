#include <stdio.h>

int somavetor(int v[], int tamanho){
    int i;
    int soma = 0;
    for(i = 0; i < tamanho; i++){
        soma += v[i];
    }
    return soma;
}
int main() {

    int i;
    int x;
    int a[100];
    int r;

    printf("Digite um numero: ");
    scanf("%d", &x);

    for( i = 0; i < x; i++){
        printf("Digite um numero: ");
        scanf("%d", &a[i]);
    }
        r = somavetor(a, x);
        printf("A soma de todos os numero do vetor e: %d", r);

    return 0;
}