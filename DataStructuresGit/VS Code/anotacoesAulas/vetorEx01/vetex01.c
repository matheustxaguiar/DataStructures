/*
 * vetex01.c
 *
 *  Created on: 14 de out. de 2021
 *      Author: Matheus
 *
 *
 *
 *
 *
 */

#include <stdio.h>

int somatorio(int v[4]) {
	int total = 0;
	for (int k = 0; k<4; k++){
		total = total + v[k];
	}
	return total;
}


int main() {
	int valores[4];
	int soma = 0;
	float media;

	for (int i=0; i<4; i++){
		printf("\n ENTRE COM UM VALOR INTEIRO: ");
		scanf("%d", &valores[i]);
	}
	soma = somatorio(valores);

	media = soma/4.0;

	printf("O VALOR DA MEDIA E: %.2f \n", media);

	for (int i=0; i<4; i++){
		if (valores[i] > media){
			prinf("%d ACIMA DE MÉDIA \n", valores[i]);
		}
		else
			if (valores[i] < media){
				prinf("%d ABAIXO DA MEDIA \n", valores[i]);
			}
		}


	return 0;
}
