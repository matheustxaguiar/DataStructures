/*
 * mallocExercise.c
 *
 *  Created on: 11 de nov. de 2021
 *      Author: Matheus
 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int distancia(int x, int y){
	int soma;

	soma = ()
	return soma;
}


int main (){
	FILE *arq;
	int x;
	int y;
	int *ptrv;
	//int dados[100];
	int resultado;
	int cont = 0;

	ptrv = (int *)malloc(100 sizeof(int));

	arq = fopen("coordenas.txt", "r");

	if (arq == NULL){
		printf("Error, não foi possivel abrir o arquivo.");
	}
	else{
		while ((fscanf(arq, "%d %d\n", &x, &y)) != EOF){
			printf("x: %d  e  y: %d \n", x, y);

			resultado = soma(x, y);
			cont = cont + 1;
		}
	}

	fclose(arq);

	return 0;
}
