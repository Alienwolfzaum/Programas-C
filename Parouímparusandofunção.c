#include <stdio.h>

int ehPar(int n)
{
    if(n % 2 == 1){
    	return 1;
    }
    else{
    	return 0;
    }
}
int main()
{
	
int x;

	printf("Digite um numero: ");
	scanf("%d", &x);

	if(ehPar(x) == 1){
		printf("Numero impar");
	}
	else{
		printf("Numero par");
	}

	return 0;
}