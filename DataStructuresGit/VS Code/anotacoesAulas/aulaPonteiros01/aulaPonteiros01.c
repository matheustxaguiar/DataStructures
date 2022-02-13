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
	x = &valor;  // X recebe o Endereço de memória do valor;
	y = *x;  // y vai receber o conteúdo que x esta apontando

	printf("Conteúdo de valor: %d \n", valor);
	printf("Endereçõ na memória de valor: %p \n", &valor);  // Usando & para atribuir o endereço de memória
	printf("Endereço na memória de valor através do ponteiro: %p \n", x);
	printf("Endereço de memória da variável ponteiro: %p \n", &x);
	printf("Conteúdo d avariável apontada por x: %d \n", *x);
	printf("Conteúdo de y: %d \n", y);

	return 0;

}
