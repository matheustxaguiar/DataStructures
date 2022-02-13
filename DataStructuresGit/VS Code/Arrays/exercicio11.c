#include <stdio.h>

int main()
{
    int valores[10];
    int cont = 0;
    int soma = 0;
    
    for (int i = 0; i < sizeof(valores)/sizeof(int); i++){
        printf("Valor %d: ", i+1);
        scanf("%f", &valores[i]);
    }
    for (int i = 0; i < sizeof(valores)/sizeof(int); i++){
        if (valores[i] < 0){
            cont++;
        }
        else{
            soma = soma + valores[i];
        };
    }
    printf("Existem %d valores negativos e a soma dos valores positivos: %d", cont, soma);

    return 0;
}
