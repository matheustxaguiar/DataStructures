#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"


int main()
{
    int y = 5;
    int quad = quadrado(y);
    int cub = cubo(y);

    printf("Número %d ao quadrado: %d\n", y, quad);
    printf("Número %d ao cubo: %d\n", y, cub);
    return 0;
}
