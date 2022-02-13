#include <stdio.h>
#include <math.h>


float media(float cont, float *dados){
    float soma = 0;
    float media;
    for (int j = 0; j < cont; j++){
        soma = soma + dados[j];
    }
    media = soma/cont;

    return media;
}

float desviopadrao(float media, float cont, float *dados){
    float soma = 0;
    float sub;
    float intern;
    float desvio;


    for (int k = 0; k < cont; k++){
        sub = dados[k] - media;
        soma = soma + pow(sub, 2);
        sub = 0;
    }

    intern = 1/(cont - 1)*soma;

    desvio = sqrt(intern);

    return desvio;
}

int main()
{
    float dados[10];
    float m;
    float cont = 0;
    float dp;

    
    for (int i = 0; i < sizeof(dados)/sizeof(float); i++){
        printf("Valor %d: ", i+1);
        scanf("%f", &dados[i]);
        cont++;
    }
    
    m = media(cont, dados);

    printf("A media dos dados: %f\n", m);

    dp = desviopadrao(m, cont, dados);

    printf("Desvio Padrao: %.3f", dp);

    return 0;
    }
