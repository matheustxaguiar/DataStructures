/*
 * aulaPonteiros02.c
 *
 *  Created on: 2 de nov. de 2021
 *      Author: Matheus
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

	setlocale(LC_ALL, "");

	int a = 40;
	int *pont1;
	int **pont2;

	pont1 = &a;
	pont2 = &pont1;

	printf("Endereco da variavel a: %p \n", &a);
	printf("Endereco do ponteiro pont1 e: %p \n", &pont1);
	printf("Endereco do ponteiro pont2 e: %p \n", &pont2);
	printf("Endereco apontado por pont1: %p \n", pont1);
	printf("Endereco apontado por pont2: %p \n", pont2);
	printf("Valor armazenado em a atraves de pont2 e: %d", **pont2);
	return 0;
}
