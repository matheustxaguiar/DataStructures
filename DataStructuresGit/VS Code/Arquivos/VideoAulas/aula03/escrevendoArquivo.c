#include <stdio.h>

int main()
{
    FILE *arq;

    char palavra[20];

    arq = fopen("arquivo.txt", "a"); // se mudar de "w" para "a" ele não vai sobrescrever o arquivo

    if (arq == NULL){
        printf("Erro na abertura do arquivo");
    }
    else{
        printf("Escreva uma palavra: ");
        scanf("%s", palavra);

        fprintf(arq, "%s\n", palavra);
        
    }
    fclose(arq);
    printf("Arquivo criado com sucesso.");


    return 0;
}
