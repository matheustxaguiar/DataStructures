#include <stdio.h>


struct dados_alunos{
    char nome[30];
    char matricula[10];
    char curso[40];
} alunos[2];


int main()
{
    printf("Bem vindo(a) ao cadastro de alunos.\n\n");

    for (int i = 0; i < 2; i++){
        printf("\nNome do aluno %d: ", i+1);
        fgets(alunos[i].nome, 30, stdin);

        printf("\nMatricula do aluno %d: ", i+1);
        fgets(alunos[i].matricula, 10, stdin);

        printf("\nCurso do aluno %d: ", i+1);
        fgets(alunos[i].curso, 40, stdin);
    }

    printf("\n\nLendo Alunos ....\n\n");

    for (int i = 0; i < 2; i++){
        printf("\nNome do aluno %d: %s", i+1, alunos[i].nome);

        printf("\nMatricula do aluno %d: %s", i+1, alunos[i].matricula);

        printf("\nCurso do aluno %d: %s", i+1, alunos[i].curso);
    }
    return 0;
}
