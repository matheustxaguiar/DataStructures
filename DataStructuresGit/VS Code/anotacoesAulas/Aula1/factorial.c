/*
 * factorial.c
 *
 *  Created on: 7 de out. de 2021
 *      Author: Matheus
 */
#include <stdio.h>

int main () {
	int num, resultado;

	printf("FATORIAL \n\n");
    printf("Por favor entre com um numero inteiro: ");
	scanf("%d", &num);

    resultado = fatorial(num);

    printf("%d", resultado);  // %d, %f, %b, %c etc... especificadores de formato.

	return 0;
}
