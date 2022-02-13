#include <stdio.h>

int main()
{
    char nome[30];
    printf("Insira o seu nome: ");
    scanf("%s", nome);

    if (nome[0] == 'a' || nome[0] == 'A'){
        printf("\nNome comeca com A ou a: %s", nome);
    }


    return 0;
}
