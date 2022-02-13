#include <stdio.h>
#include <stdlib.h>

int main()
{
    char **nomes;
    int n = 4, size = 4;

    printf("Quantas strings?.....................: ");
    //scanf("%d", &n);

    nomes = malloc(n * sizeof(char));

    printf("\nQual o tamanho de cada string?.....: ");
    //scanf("%s", &size);

    for (int i = 0; i < n; i++){
        nomes[i] = malloc(size * sizeof(char));
    }

    return 0;
}
