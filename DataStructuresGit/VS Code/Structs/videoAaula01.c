#include <stdio.h>

/*
A STRUCT serve pra armazenar diferentes variáveis em um mesmo campo.

struct <nome da struct>{
    <listagem e tipo de membros>
};

*/
struct ficha_aluno{  // Definição da Struct.
    char nome[40];
    int numero;
    float nota;
} aluno; // Declaração da Struct. (forma DIFERENCIADA)

// struct ficha_aluno aluno; Declaração da Struct. (forma tradicional)

int main()
{
    printf("- - - - Cadastro de aluno - - - - \n\n");
    
    printf("Nome: ");
    scanf("%s", aluno.nome);

    printf("\nNumero: ");
    scanf("%d", &aluno.numero);

    printf("\nNota: ");
    scanf("%f", &aluno.nota);


    printf("\n\n- - - - Mostrando Alunos Cadastrados - - - - \n\n");

    printf("Nome: %s", aluno.nome);
    printf("\nNumero: %d", aluno.numero);
    printf("\nNota: %.2f", aluno.nota);
    return 0;
}
