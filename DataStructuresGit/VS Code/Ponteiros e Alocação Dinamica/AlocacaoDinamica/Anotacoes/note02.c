#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *ptrv;
    int v[10];

    ptrv = malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++){
        v[i] = 0;
    }

    for (int i = 0; i < 10; i++){
        ptrv[i] = 0;
    }


    return 0;
}
