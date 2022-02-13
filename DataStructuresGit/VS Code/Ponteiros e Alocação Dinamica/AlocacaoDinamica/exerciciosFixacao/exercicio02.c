#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *vetor;
    int tamanho;

    printf("Qual o tamanho do vetor? .........: ");
    scanf("%d", &tamanho);

    vetor = malloc(tamanho * sizeof(int));

    for (int i = 0; i < tamanho; i++){
        printf("Valor %d .........: ", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("\n\n");

    for (int i = 0; i < tamanho; i++){
        printf("\nValor %d .........: %d", i+1, vetor[i]);
    }

    free(vetor);
    vetor = NULL;


    return 0;
}
