#include <stdio.h>

int main()
{
    int valores[5] = {1, -2, 3, -4, 5};
    

    for (int m = 0; m < 5; m++){
        printf("Valor %d: %d\n", m + 1, valores[m]);
    }
    for (int i = 0; i < sizeof(valores)/sizeof(int); i++){
        if (valores[i] < 0){
            valores[i] = 0;
        }
    }
    for (int k = 0; k < 5; k++){
        printf("Numeros:  %d\n", valores[k]);
    }
    return 0;
}
