#import <stdio.h>
#import <math.h>


int main()
{   
    float num1;
    float num2;


    printf("Insira dois numeros: \n");
    printf("Primeiro numero: "); scanf("%f", &num1);
    printf("\nSegundo numero: "); scanf("%f", &num2);

    printf("a) soma dos numeros: %.0f\n", num1 + num2);
    printf("b) O produto do primeiro numero pelo quadrado do segundo: %.0f\n", num1*(num2*num2));
    printf("c) O quadrado do primeiro numero: %.0f\n", pow(num1, 2));
    printf("d) A raiz quadrada da soma dos quadrados: %.0f\n", sqrt(((num1*num1) + (num2*num2))));
    printf("e) O seno da diferença do primeiro numero pelo segundo: %.0f\n", sin(num1 - num2));
    printf("f) O modulo do primeiro numero: %.0f\n", sqrt((num1*num1)));


    return 0;
}
