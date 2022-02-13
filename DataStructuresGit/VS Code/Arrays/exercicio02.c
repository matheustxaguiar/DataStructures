#include <stdio.h>

int main()
{
    int vetor[6];
    for (int i = 0; i<6; i++){
        printf("\nInsira o %dnd valor:", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("\n - - - - -\n");
    for (int j = 0; j <= 6; j++){
        printf("\nO valor na posicao %d e %d.\n", j, vetor[j]);
    }
    return 0;
}
