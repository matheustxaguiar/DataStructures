#include <stdio.h>

int main()
{
    FILE *arq;

    arq = fopen("arquivo.txt", "w");

    fclose(arq);

    printf("Arquivo criado com sucesso!");


    return 0;
}
