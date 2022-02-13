#include <stdio.h>


int main()
{
    char arquivo[] = "conto.txt";

    FILE *arq;
    arq = fopen(arquivo, "a");
    char nome[100];
    int idade;
    float altura;

    if (arq == NULL){
        printf("Erro ao abrir o arquivo.");
    }
    else{
        printf("Digite nome, idade e altura: ");
        scanf("%s%d%f", nome, &idade, &altura);
        fprintf(arq, "%s, %d, %.2f\n", nome, idade, altura);
        fclose(arq);
        printf("Dados gravados com sucesso!");
    }

    return 0;
}
