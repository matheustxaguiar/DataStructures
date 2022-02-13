#include <stdio.h>
#include <stdlib.h>

int main()
{
    // void* malloc(size_t qtdBytes);

    int *numeros, n , i;

    printf("Insira a quantidade de numeros: ");
    scanf("%d", &n);

    numeros = malloc(n * sizeof(int));

    if (numeros=NULL){
        printf("Erro de memoria!");
        //exit(1);
    }
    else{
        for (i = 0; i < n; i++){
        printf("\nValor %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < n; i++){
        printf("Valor %d: %d\n", i+1, numeros[i]);
    }

    free(numeros);
    }


    return 0;
}
