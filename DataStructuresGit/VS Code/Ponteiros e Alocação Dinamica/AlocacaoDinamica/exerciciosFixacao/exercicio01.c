#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *numeros;

    numeros = malloc(5*sizeof(int));

    for(int i = 0; i < 5; i++){
        printf("Numero %d: ", i+1);
        scanf("%d", &numeros[i]);
    }
    printf("\n\n");
    for(int i = 0; i < 5; i++){
        printf("Numero %d: %d\n", i+1, numeros[i]);
    }

    free(numeros);
    numeros = NULL;


    return 0;
}
