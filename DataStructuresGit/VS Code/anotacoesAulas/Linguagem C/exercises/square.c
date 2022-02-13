#include <stdio.h>
int essa (int x){
    return square(x);
}
int main()
{
    int x;
    int result;
    printf("Insira um valor inteiro abaixo:");
    scanf("$d", &x);
    result = essa(x);
    printf("%d", result);
    return 0;
}
