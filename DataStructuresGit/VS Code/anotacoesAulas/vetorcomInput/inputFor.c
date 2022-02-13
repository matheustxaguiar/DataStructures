/*
 * inputFor.c
 *
 *  Created on: 19 de out. de 2021
 *      Author: Matheus
 */
#include <stdio.h>

int main(){
	int vetor[4];

	for(int i = 0; i<= 3; i++){
		printf("Entre com o %d° valor inteiro: ", i+1);
		scanf("%d", &vetor[i]);
	}

  printf("\n - - - - - - - -");
  printf("\n \n -> Valores e suas posições:\n");

	for(int j = 0; j <=3; j++){
		printf("O vetor na posição %d é: %d \n", j+1, vetor[j]);
	}

	return 0;
}
