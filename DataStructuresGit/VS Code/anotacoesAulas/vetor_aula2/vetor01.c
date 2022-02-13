/*
 * vetor01.c
 *
 *  Created on: 14 de out. de 2021
 *      Author: Matheus
 */
#include <stdio.h>


int main (){
	int vetA[10];
	int valor = 0;

	for (int i=0; i < 10; i++){
			vetA[i] = valor;
			valor = valor + 2;
		}

	for (int i=0; i < 10; i++){
		printf("%d \n", vetA[i]);
	}

	return 0;
}
