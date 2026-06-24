#include <stdio.h>

int maiornvetor(int v[], int tamanho){
    int i;
    int maior = v[0];
    for(i = 0; i < tamanho; i++){
        if(v[i] > maior){
            maior = v[i];
        }
    }
    return maior;
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
        r = maiornvetor(a, x);
        printf("O maior numero do vetor e: %d", r);

    return 0;
}