#include <stdio.h>

int main()
{
    int inteiro, *pontint;
    float real, *pontreal;
    char string, *pontstring;

    printf("- - - - Conteudo das variaveis antes - - - -\n");
    printf("inteiro: %d;\nfloat: %f\n;char: %c;\n", inteiro, real, string);

    // Alterando valores atraves de ponteiros
    pontint = &inteiro;
    *pontint = 45;

    pontreal = &real;
    *pontreal = 7.5;

    pontstring = &string;
    *pontstring = 'A';

    printf("- - - - Conteudo das variaveis Apos modificacao por ponteiros - - - -\n");
    printf("inteiro: %d;\nfloat: %f\n;char: %c;\n", inteiro, real, string);
    return 0;
}
