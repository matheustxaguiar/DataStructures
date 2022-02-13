#include <stdio.h>

int main()
{
    int vetor[10];
    int maior = 0;
    int menor = 1000000000000000;
    for (int i = 0; i<9; i++){
        printf("\nInsira o %dnd valor: ", i+1);
        scanf("%d", &vetor[i]);
    }
    for (int k = 0; k < sizeof(vetor)/4; k++){
        if (k = 0){
            maior = 
        }
        if (vetor[k] > maior){
            maior = vetor[k];
        }
        else{
            menor = vetor[k];
        }
    }
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);


    return 0;
}
