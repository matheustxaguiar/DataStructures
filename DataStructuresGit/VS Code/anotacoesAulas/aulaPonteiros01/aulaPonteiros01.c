/*
 * aulaPonteiros01.c
 *
 *  Created on: 2 de nov. de 2021
 *      Author: Matheus
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");

	int *x, valor, y;
	valor = 35;
	x = &valor;  // X recebe o Endere�o de mem�ria do valor;
	y = *x;  // y vai receber o conte�do que x esta apontando

	printf("Conte�do de valor: %d \n", valor);
	printf("Endere�� na mem�ria de valor: %p \n", &valor);  // Usando & para atribuir o endere�o de mem�ria
	printf("Endere�o na mem�ria de valor atrav�s do ponteiro: %p \n", x);
	printf("Endere�o de mem�ria da vari�vel ponteiro: %p \n", &x);
	printf("Conte�do d avari�vel apontada por x: %d \n", *x);
	printf("Conte�do de y: %d \n", y);

	return 0;

}
