#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq;
    char linha[20];

    arq = fopen("arquivo.txt", "r");

    while (fgets(linha, 20, arq) != NULL){
        printf("%s", linha);
    }

    fclose(arq);
    return 0;
}
