#include <stdio.h>

_Bool compara(char *palavra1, char *palavra2){
    int i = 0;
    while (palavra1[i] == palavra2[i] && palavra1[i] != '\0' && palavra2[i] != '\0'){
        i++;
    }
    if (palavra1[i] == '\0' && palavra2[i] == '\0'){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    char palavra1[30];
    char palavra2[30];

    printf("Palavra 1: ");
    scanf("\n\n%s", palavra1);
    printf("Palavra 2: ");
    scanf("\n\n%s", palavra2);

    if (compara(palavra1, palavra2)){
        printf("As palavras sao iguais.");
    }else{
        printf("As palavras sao diferentes.");
    }


    return 0;
}
