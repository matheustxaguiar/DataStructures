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

	printf("Endereço da variável a: %p \n", &a);
	printf("Endereço do ponteiro pont1 é: %p \n", &pont1);
	printf("Endereço do ponteiro pont2 é: %p \n", &pont2);
	printf("Endereço apontado por pont1: %p \n", pont1);
	printf("Endereço apontado por pont2: %p \n", pont2);
	printf("Valor armazenado em a através de pont2 é: %d", **pont2);
	return 0;
}
