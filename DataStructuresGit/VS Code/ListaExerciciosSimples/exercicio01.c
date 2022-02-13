#include <stdio.h>

int main()
{
    float metros;

    printf("Olá Usuário!\n");
    printf("Bem vindo ao conversor de Metros, Decímetros, Centímetros e Milímetros.\n");
    printf("Insira um valor em metros: ");
    scanf("%f", &metros);
    printf("O valor %.2f metros em decimetros e: %.2f \n", metros, 10*metros);
    printf("O valor %.2f metros em centimetro e: %.2f \n", metros, 100*metros);
    printf("O valor %.2f metros em milimetro e: %.2f \n", metros, 1000*metros);

    return 0;
}
