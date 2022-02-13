#include <stdio.h>


struct dados_alunos{
    char nome[30];
    char matricula[10];
    float nota1;
    float nota2;
    float nota3;
} alunos[2];

int maiornota1(){
    float maiornota = 0;
    float nota;
    char nomealuno[20];

    for (int i = 0; i < 2; i++){
        nota = alunos[i].nota1; 
        if(nota > maiornota){
            maiornota = nota;
            nomealuno == alunos[i].nome;
        }
    }
    printf("\nA maior nota foi %f do aluno %s.\n", maiornota, nomealuno);

    return 0;
}


int mediageral(){
    float mediageral = 0;
    float media = 1000000000000000;
    float nota;
    char nomealuno[20];
    float soma = 0;


    for (int i = 0; i < 2; i++){
        media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3)/3;

        if(media > mediageral){
            mediageral = media;
            nomealuno == alunos[i].nome;
        }
    }
    printf("\nA maior media foi %f do aluno %s.\n", mediageral, nomealuno);

    return 0;
}


int main()
{
    printf("Bem vindo(a) ao cadastro de alunos.\n\n");

    for (int i = 0; i < 2; i++){
        printf("\nNome do aluno %d: ", i+1);
        scanf("%s", alunos[i].nome);

        printf("\nMatricula do aluno %d: ", i+1);
        scanf("%s", alunos[i].matricula);

        printf("\nPrimeira nota do aluno %d: ", i+1);
        scanf("%f", &alunos[i].nota1);

        printf("\nSegunda nota do aluno %d: ", i+1);
        scanf("%f", &alunos[i].nota2);

        printf("\nTerceira nota do aluno %d: ", i+1);
        scanf("%f", &alunos[i].nota3);
    }

    maiornota1();

    mediageral();

    printf("\n\n\n- - - - -> Lendo Alunos < - - - -\n\n\n");

    for (int i = 0; i < 2; i++){
        printf("\nNome do aluno %d: %s", i+1, alunos[i].nome);

        printf("\nMatricula do aluno %d: %s", i+1, alunos[i].matricula);

        printf("\nNota1 do aluno %d: %f", i+1, alunos[i].nota1);

        printf("\nNota2 do aluno %d: %f", i+1, alunos[i].nota2);

        printf("\nNota3 do aluno %d: %f", i+1, alunos[i].nota3);
        }
    return 0;
    
}
