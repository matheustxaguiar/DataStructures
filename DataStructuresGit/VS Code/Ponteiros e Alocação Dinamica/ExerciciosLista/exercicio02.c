#include <stdio.h>

int main()
{
    int num1 = 1, num2 = 2, *pt1, *pt2;

    pt1 = &num1;
    pt2 = &num2;

    if (pt1 > pt2){
        printf("O maior endereco e do pt1: %d", pt1);
    }else{
        printf("O maior endereco e do pt2: %d", pt2);
    }

    return 0;
}
