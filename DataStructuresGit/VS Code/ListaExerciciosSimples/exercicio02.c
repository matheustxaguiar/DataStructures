#include <stdio.h>

int main()
{
    printf("Tabuada de 1 a 9:\n");
    for (int i = 1; i < 10; i++){
        printf("- Tabuada do %d: \n", i);
        for (int j = 0; j < 10; j++){
            printf("%d x %d = %d \n", i, j, i*j);
        }
        printf("\n - - - - - - \n");
    }
    return 0;
}
