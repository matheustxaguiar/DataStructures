#include <stdio.h>

void troca(int *ptr1, int *ptr2){
    int aux;
    aux = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = aux;


    printf("\n\nnum1: %d\n", *ptr1);
    printf("num2: %d", *ptr2);
}


int main()
{
    int num1, num2;

    printf("Num1: ");
    scanf("%d", &num1);
    printf("Num2: ");
    scanf("%d", &num2);

    troca(&num1, &num2);

    return 0;
}
