/*
 * arquivo02.c
 *
 *  Created on: 21 de out. de 2021
 *      Author: Matheus
 */

#include <stdio.h>
#include <string.h>


int main() {
	FILE *arq;
	char strnum[10];

	arq = fopen("./teste2.txt","wt");  //Abrir arquivo

	if (arq == NULL){
		printf("Error - Can't Open File. \n");
	}

	else{
		// Lógica do programa.
		for (int i=100; i<=1000;i = i + 100){
			sprintf(strnum, "%d \n", i);
			fputs(strnum, arq);
		}
	}

	fclose(arq);  //Fechar arquivo
	printf("FIM");


	return 0;
}
