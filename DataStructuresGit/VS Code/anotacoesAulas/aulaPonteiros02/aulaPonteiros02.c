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

	printf("Endere�o da vari�vel a: %p \n", &a);
	printf("Endere�o do ponteiro pont1 �: %p \n", &pont1);
	printf("Endere�o do ponteiro pont2 �: %p \n", &pont2);
	printf("Endere�o apontado por pont1: %p \n", pont1);
	printf("Endere�o apontado por pont2: %p \n", pont2);
	printf("Valor armazenado em a atrav�s de pont2 �: %d", **pont2);
	return 0;
}
