#include <stdio.h>

int main()
{
    char nome[30];
    char sexo[30];
    int idade;

    printf("Nome:");
    scanf("\n\n%s", &nome);

    printf("Sexo:");
    scanf("\n\n%s", &sexo);

    printf("Idade:");
    scanf("\n\n%d", &idade);

    if (sexo == "feminino"){
        printf("ACEITA SEXO");

    if (idade < 25){
        printf("ACEITA IDADE");
    }
    }else{
        printf("NAO ACEITA");
    }


    return 0;
}
