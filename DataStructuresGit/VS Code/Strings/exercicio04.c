#include <stdio.h>

int main()
{
    char nome[30];
    char letra;
    printf("Insira um nome aqui: ");
    scanf("\n%s", nome);

    for (int i = 0; i < 4; i++){
        letra = nome[i];
        printf("Letra %d: %c\n", i+1, letra);
    }


    return 0;
}
