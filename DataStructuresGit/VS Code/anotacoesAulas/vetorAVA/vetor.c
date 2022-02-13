/*
 * vetor.c
 *
 *  Created on: 19 de out. de 2021
 *      Author: Matheus
 */
#include <stdio.h>

int main(){
	//int inteiros[10];  // Vetor inteiro com 10 posi��es de armazenamento
	//char palavras[10];  // Vetor tipo string com 10 posi��es
	float quebrado[4]={4.5, 5.5, 6.5, 7.5}; // Vetor tipo float com 4 posi��es e aloquei os valore dentro

	// Exibindo valores de forma mecanica
	printf("Exibindo valores do Vetor \n\n");
	printf("Valor na posi��o 0: %.2f \n", quebrado[0]);
	printf("Valor na posi��o 1: %.2f \n", quebrado[1]);
	printf("Valor na posi��o 2: %.2f \n", quebrado[2]);
	printf("Valor na posi��o 3: %.2f \n", quebrado[3]);
	printf(" - - - - - - - - \n");

	// Exibindo com o For
	printf("Exibindo com o For: \n");
	for (int i = 0; i<= 3; i++){
		printf("Valor na posi��o %d: %.2f \n", i, quebrado[i]);
	}

	return 0;
}
