#include <stdio.h>
/*
int verifica(int num, int aux[10]){
    for (int k = 0; k < sizeof(aux)/sizeof(int); k++){
        if (num = aux[k]){
            return 1;
        }
}
*/    

int main(){
    int valores[5] = {1, 2, 3, 4, 5};
    int decisao = 0;
    int num;
    int cont = 0;
    int comparado;


    for (int m = 0; m < 5; m++){
        printf("Valor %d: %d\n", m + 1, valores[m]);
    }
    for (int k = 0; k < 5; k++){
        for (int j = 0; j < 5; j++){
            if (valores[k] = valores[j]){
                cont++;
            }
        }
        printf("O numero %d apareceu %d vezes.", num, cont);
        cont = 0;
    
    }
    return 0;
    }
