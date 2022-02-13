#include <stdio.h>

int main()
{
    int vetor[10];
    int quadrado[10];
    for (int i = 0; i < 9; i++){
        vetor[i] = i;
    }
    for (int j = 0; j < 9; j++){
        quadrado[j] = j*j;
    }
    for (int k = 0; k < 9; k++){
        printf("\nO ao quadrado e %d.\n", quadrado[k]);
    }
    return 0;
}
