/*
 * exfixacaoarq01.c
 *
 *  Created on: 21 de out. de 2021
 *      Author: ernani
 */
#include <stdio.h>
#include <string.h>

struct tveiculo {
	char placa[16];
	char modelo[33];
	char marca[33];
};

void preencheveiculo(struct tveiculo vet[], int pos, char s[]){
	char separador[2] = ",";
	int posplaca, posmodelo, posmarca;

	posplaca = 0;
	strcpy(vet[pos].placa,strtok(&s[posplaca],separador));

	posmodelo = strlen(vet[pos].placa) + 1;
	strcpy(vet[pos].modelo,strtok(&s[posmodelo],separador));

	posmarca = posmodelo + strlen(vet[pos].modelo) + 1;
	strcpy(vet[pos].marca,strtok(&s[posmarca],separador));
}

int main() {
	FILE* arq;
	struct tveiculo vet_veiculos[1000];
	int indice;
	char strlinhaarq[1024];

	arq = fopen("./bdveiculos.txt","rt");

	if(arq == NULL){
		printf("PROBLEMAS NA ABERTURA DO ARQUIVO!!\n");
		printf("CANCELANDO A EXECUÇÃO!!\n");
	}
	else {
		// LÓGICA DO PROGRAMA ..
		indice = 0;
		fgets(strlinhaarq,1024,arq);
		while(!feof(arq)){
			//fscanf(arq,"%s,%s,%s\n",vet_veiculos[indice].placa,vet_veiculos[indice].modelo,vet_veiculos[indice].marca);
			preencheveiculo(vet_veiculos,indice,strlinhaarq);
			indice++;
			fgets(strlinhaarq,1024,arq);
		}

		printf("CONTEÚDO DO VETOR DE VEÍCULOS:\n");
		for(int k=0; k < indice; k++)
			printf("%d. %s, %s, %s",k+1,vet_veiculos[k].placa,vet_veiculos[k].modelo,vet_veiculos[k].marca);
	}

	fclose(arq);

	printf("FIM!!");

	return 0;
}
