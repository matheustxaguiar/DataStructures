#include <stdio.h>

struct dados{
    char nome[40];
    int idade;
    char endereco[60];
} pessoa;


int main()
{
    printf("- - - Ola usuario! - - -\n\n");

    printf("Nome: ");
    fgets(&pessoa.nome, 40, stdin); //scanf("%s", pessoa.nome);

    printf("\nIdade: ");
    scanf("%d", &pessoa.idade);

    printf("\nEndereco: ");
    scanf("%s", pessoa.endereco);//fgets(&pessoa.endereco, 60, stdin);

    printf("\n- - - Mostrando dados - - -\n");

    printf("Nome: %s", pessoa.nome);
    printf("Idade: %d", pessoa.idade);
    printf("Endereco: %s", pessoa.endereco);
    return 0;
}
