/*
 * ponteirosarit01.c
 *
 *  Created on: 4 de nov. de 2021
 *      Author: ernani
 */
#include <stdio.h>
#include <string.h>

int main() {
	int vet[3] = {100,200,300};
//	int i = 500;
	int *p;
//
//	printf("valor de i: %d\n",i);
//	printf("endereço de i(&i): %ud\n",&i);
//	printf("endereço de i(p) : %ud\n",p);
//	printf("endereço de p+3 : %ud\n",p + 3); // <=> p + 3 * sizeof(tipo da dado apontado por p)
//	printf("tamanho de int: %d",sizeof(int));

	p = vet;

	for(int k=0; k < 3; k++)
		printf("%5d",*(p + k));

	return 0;
}
