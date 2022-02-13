#include <stdio.h>


int main()
{
    float f;
    float c;
    printf("Ola usuario, informe o valor em  Fahrenheit: ");
    scanf("%f", &f);
    c = (f-32)*5/9;
    printf("O valor de %.3fF em Celcius: %.3f \n", f, c);
    return 0;
}
