#include <stdio.h>

int comprimento(char *palavra){
    int cont = 0;
    for (int i = 0; palavra[i] != '\0' ; i++){
        cont++;
    }
    return cont;
}

int main()
{
    char palavra[5] = "teste";
    int tamanho;

    printf("Digite uma palavra(string): ");
    scanf("%s", &palavra);

    tamanho = comprimento(palavra);

    printf("\n\nO tamanho da palavra %s e: %d.", palavra, tamanho);
    return 0;
}
