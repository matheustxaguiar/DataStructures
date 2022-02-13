#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *ptrv;
    int v[10];

    ptrv = malloc(10 * sizeof(int));
    if (ptrv != NULL){
        for (int i = 0; i < 10; i++){
            ptrv[i] = -1;
        }
    }
    free(ptrv);
    ptrv = NULL;


    ptrv = malloc(10 * sizeof(int));
    if (ptrv != NULL){
        for (int i = 0; i < 10; i++){
            ptrv[i] = -1;
        }
    }
    free(ptrv);
    ptrv = NULL;
    
    
    ptrv = malloc(10 * sizeof(int));
    if (ptrv != NULL){
        for (int i = 0; i < 10; i++){
            ptrv[i] = -1;
        }
    }
    free(ptrv);
    ptrv = NULL;
    


    return 0;
}
