#include <stdio.h>

int fatorial (int n){
    int fat = 1;
    int i = 1;
    if (n == 0){ return 1;}
    /*
    for (n; n >= 1; n = n - 1){
        fat = n * fat;
    }
    */
   for(int i = 1; i <= n; ++i){
        fat = fat * i;
    }
    
    return fat;
}

int main () {
	int num, resultado;

	printf("FATORIAL \n\n");
    printf("Por favor entre com um numero inteiro: ");
	scanf("%d", &num);

    resultado = fatorial(num);

    printf("O resultado do fatorial de %d: %d", num, resultado);  // %d, %f, %b, %c etc... especificadores de formato.

	return 0;   
}
