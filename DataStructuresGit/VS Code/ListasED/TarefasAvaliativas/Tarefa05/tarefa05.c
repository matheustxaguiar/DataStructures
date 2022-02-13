#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct noh{
    char placa[16];
    char modelo[33];
    char marca[33];
    struct noh *prox;
} noh ;


void preencheveiculo(noh *aux, int pos, char s[]){
	char separador[2] = ",";
	int posplaca, posmodelo, posmarca;

	posplaca = 0;
	strcpy(aux->placa, strtok(&s[posplaca],separador));

	posmodelo = strlen(aux->placa) + 1;
	strcpy(aux->modelo, strtok(&s[posmodelo],separador));

	posmarca = posmodelo + strlen(aux->modelo) + 1;
	strcpy(aux->marca, strtok(&s[posmarca],separador));

}

int main() {
	FILE *arq;
    noh *aux, *vet_veiculos;

	arq = fopen("./bdveiculos.txt","rt");

	if(arq == NULL){
		printf("PROBLEMAS NA ABERTURA DO ARQUIVO!!\n");
		printf("CANCELANDO A EXECUÇÃO!!\n");
	}
	else {
        vet_veiculos = (noh *)malloc(sizeof(noh));
        aux = vet_veiculos;
        char strlinhaarq[1024];

        int indice = 0;
		fgets(strlinhaarq,1024,arq);
		while(!feof(arq)){
            preencheveiculo(aux, indice, strlinhaarq);
            aux->prox = (noh *)malloc(sizeof(noh));
            aux = aux->prox;
            indice++;
			fgets(strlinhaarq,1024,arq);
		}

        aux->prox = NULL;
        aux = vet_veiculos;
		int tamanho;
		printf("Conteúdo da Struct de Veiculos:\n");
        int k = 1;
		while (aux->prox != NULL){
			printf("%d. %s, %s, %s", k, aux->placa, aux->modelo, aux->marca);
			tamanho = strlen(aux->marca);
			if (tamanho == 7){
				arq = fopen("./honda.txt","a");
				if (arq == NULL){
					printf("Problema na abertura do arquivo honda.txt");
				}else{
					fprintf(arq, "%s, %s, %s", aux->placa, aux->modelo, aux->marca);
				}
			}
			//printf(strlen(aux->marca));
            aux = aux->prox;
            k++;
        }
		aux->prox = NULL;
        aux = vet_veiculos;


		int cont = 0;
		while(aux->prox != NULL){
			cont++;
			aux = aux->prox;
		}

	printf("\n\n-> Tamanho da lista: %d.\n\n-> Quantidade de Nos: %d.", cont, cont-1);

	fclose(arq);

	printf("\n\n\nFIM!!");

	return 0;
    }
}

