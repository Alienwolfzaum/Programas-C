#include <stdio.h>

int main(){
int i; 
int N; 
int array[i]; // aqui o tamanho dele deeria ser o tamanho de N mas nao sei como fazer isso 
int x; 
int div; 
printf("Quantass Repetições vai querer meu patrão?: "); 
scanf("%d", &N); 

for(i = 1; i <= N; i++){ 
    printf("Digite um numero: "); 
    scanf("%d", &array[i]);
     x = x + array[i];  
 }
     div = x / N; 
    printf("A soma de todos os numero é igual a: %d", div); return 0; 
    
}