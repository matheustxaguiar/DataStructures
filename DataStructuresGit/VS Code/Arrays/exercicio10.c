#include <stdio.h>


int main()
{   
    float notas[5];
    float cont = 0;
    float soma = 0;
    float media;

    for (int i = 0; i < 5; i++){
        printf("Nota %d: ", i+1);
        scanf("%f", &notas[i]);
    }
    for (int k = 0; k < 5; k++){
        cont++;
        soma = soma + notas[k];
    }
    media = soma/cont;

    printf("A media da turma: %.3f", media);

    return 0;
}
