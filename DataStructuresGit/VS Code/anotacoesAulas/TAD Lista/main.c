/*
 * main.c
 *
 *  Created on: 25 de nov. de 2021
 *      Author: Matheus
 */
#include <stdio.h>
#include "TADlista.h"


int main(){
	int *p;
	TLista lst;

	lst = criaLista();

	for (int i = 0; i < 10; i++){
		p = (int *)malloc(sizeof(int));

		*p = i + 5;

		append(lst, p);
	}

	printf("O tamanho da lista e: %d\n", lenLista(lst));
	p = primlista(lst);
	printf("O primeiro valor da lista: %d \n", *p);
	p = ultlista(lst);
	printf("O ultimovalor da lista: %d \n", *p);
}

