/*
 * veiculos.c
 *
 *  Created on: 21 de out. de 2021
 *      Author: Matheus
 */

#include <stdio.h>
#include <string.h>

struct tveiculo{
	char placa[16];
	char modelo[33];
	char marca[33];
};


int main() {
	FILE *arq;
	int indice;

	struct tveiculo vet_veiculos[1000];

	arq = fopen("./bdveiculos.csv","r");  //Abrir arquivo

	if (arq == NULL){
		printf("Error - Can't Open File. \n");
	}

	else{
		indice = 0;
		while (!feof(arq)){
			fscanf(arq,"%s,%s,%s\n",vet_veiculos[indice].placa,vet_veiculos[indice].modelo, vet_veiculos[indice].marca);
			indice++;
		}

		printf("Conteúdo do Vetor de veiculos:\n");
		for(int k=0; k<=indice-2;k++){
			printf("%s, %s, %s \n",vet_veiculos[k].placa, vet_veiculos[k].modelo, vet_veiculos[k].marca);
	}

	fclose(arq);  //Fechar arquivo
	printf("FIM");

	}
	return 0;
}

