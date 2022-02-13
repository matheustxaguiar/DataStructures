#include <stdio.h>

int mensagem (){
    printf("funcao secundaria.\n\n");
    return 0;
}

int main() {
    printf("Funcao Principal.\n\n");
    mensagem();
    printf("Fim.\n");
    return 0;
}