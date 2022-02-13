/*
 * arquivo01.c
 *  Created on: 21 de out. de 2021
 *  Author: ernani
 */
#include <stdio.h>
#include <string.h>

int main() {
	FILE* arq;
	char strnum[10];

	arq = fopen("./teste2.txt","wt");

	if(arq == NULL){
		printf("PROBLEMAS NA ABERTURA DO ARQUIVO!!\n");
		printf("CANCELANDO A EXECUÇÃO!!\n");
	}
	else {
		// LÓGICA DO PROGRAMA ..
		for(int i=100; i <= 1000; i = i + 100){
			//sprintf(strnum,"%d\n",i);
			//fputs(strnum,arq);
			//
			// OU
			//
			fprintf(arq,"%d\n",i);
		}
	}

	fclose(arq);

	printf("FIM!!");

	return 0;
}
