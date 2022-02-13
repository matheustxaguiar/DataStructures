#include <stdio.h>


int main()
{
    char arquivo[] = "conto.txt";

    FILE *arq;
    arq = fopen(arquivo, "r");
    char nome[100];
    int idade;
    float altura;

    if (arq == NULL){
        printf("Erro ao abrir o arquivo.");
    }
    else{
        printf("Lendo dados do arquivo.\n\n");

        while( fscanf(arq, "%s %d %f", nome, &idade, &altura) != EOF){
            printf("nome: %s | idade: %d | altura: %.2f.\n", nome, idade, altura);
        }

        printf("\nDados lidos com sucesso!");
    }

    return 0;
}
