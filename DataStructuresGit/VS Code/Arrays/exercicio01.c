#include <stdio.h>

int main()
{
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma;
    soma = A[0]+A[1]+A[5];
    printf("soma: %d\n", soma);
    A[4] = 100;
    printf("%d\n", A[4]);
    printf("Mostrando valores: \n");
    for (int i = 0; i <= 6; i++){
        printf("O valor na posicao %d e %d.\n", i, A[i]);
    }
    return 0;
}
