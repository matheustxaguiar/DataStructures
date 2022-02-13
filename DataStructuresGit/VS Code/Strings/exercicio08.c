#include <stdio.h>


int conta1(int *palavra){
    int cont = 0;
    for (int i = 0; palavra[i] != '\0'; i++){
        if (palavra[i] == '1'){
            cont++;
        }
    }

    return cont;
}

int main()
{
    char palavra[30];
    int qtd;

    printf("Palavra 1: ");
    scanf("\n\n%s", palavra);

    qtd = conta1(palavra);

    printf("A string %s tem %d vezes o numero 1.", palavra, qtd);

    return 0;
}
