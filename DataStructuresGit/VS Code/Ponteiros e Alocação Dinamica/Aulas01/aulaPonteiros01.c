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

	printf("Conteudo de valor: %d \n", valor);
	printf("Endereco na memoria de valor: %p \n", &valor);  // Usando & para atribuir o endere�o de mem�ria
	printf("Endereco na memoria de valor atraves do ponteiro: %p \n", x);
	printf("Endereco de memoria da variavel ponteiro: %p \n", &x);
	printf("Conteudo d avariavel apontada por x: %d \n", *x);
	printf("Conteudo de y: %d \n", y);

	return 0;

}
