#include <stdio.h>

int main() {

int i;
int n;
int array[4];


for( i = 0; i < 4; i++){
    printf("Digite um numero: ");
    scanf("%d", &array[i]);
}
for(i = 3; i >= 0; i--){
    printf("%d\n", array[i]);
}




    return 0;
}