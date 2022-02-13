#include <stdio.h>


int main()
{
    float notas[4] = {3.5, 7.5, 9.0, 6.0};


    for (int i = 0; i < sizeof(notas)/4; i++){
        printf("nota %d e: %.0f.\n", i+1, notas[i]);
    }
    return 0;
}
