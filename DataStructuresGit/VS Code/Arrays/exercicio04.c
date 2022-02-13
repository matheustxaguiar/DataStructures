#include <stdio.h>


int main()
{
    int vetor[8];
    int posi1;
    int posi2;
    
    int soma;
    for (int i = 0; i<8; i++){
        printf("\nInsira o %dnd valor:", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("Escolha uma posicao do vetor de 0 a 7: ");
    scanf("%d", &posi1);
    printf("\nEscolha uma posicao do vetor de 0 a 7: ");
    scanf("%d", &posi2);

    soma = vetor[posi1] + vetor[posi2];

    printf("\n\nA soma dos valores nas posicoes %d, %d e: %d", posi1, posi2, soma);
    return 0;
}
