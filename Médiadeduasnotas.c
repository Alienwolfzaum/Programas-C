#include <stdio.h>

int main() {

    float n1;
    float n2;
    float media;

    printf("Insira a primeira nota: ");
    scanf("%f", &n1);

    printf("Insira a segunda nota: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    printf("A sua media e: %.1f\n", media);

    if(media > 9) {
        printf("Parabens voce e o orgulho da mamae");
    }
    else if(media >= 7) {
        printf("Voce passou =/");
    }
    else if(media >= 5) {
        printf("Ta de recuperacao manee");
    }
    else {
        printf("Deu ruim pequeno noob");
    }

    return 0;
}