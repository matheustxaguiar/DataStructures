#include <stdio.h>
#include <stdlib.h>
#include "tadlista.h"
#include <string.h>


typedef struct veiculo{
  char placa[16];
  char modelo[33];
  char marca[33];
  char quilometragem[7];
  struct tveiculo *prox;
  struct tveiculo *anterior;
}Tno;


void preencheveiculo(Tno *aux, int pos, char s[], TLista lst){
	char separador[2] = ",";
	char pulalinha[2] = "\n";
	int posplaca, posmodelo, posmarca, posquilo;
	char placa[10], modelo[10], marca[10], quilometragem[7];

	posplaca = 0;
	strcpy(aux->placa, strtok(&s[posplaca],separador));

	posmodelo = strlen(aux->placa) + 1;
	strcpy(aux->modelo, strtok(&s[posmodelo],separador));

	posmarca = strlen(aux->modelo) + strlen(aux->placa) + 2;
	strcpy(aux->marca, strtok(&s[posmarca],separador));

  posquilo = posmarca + strlen(aux->marca) + 1;
	strcpy(aux->quilometragem, strtok(&s[posquilo],separador));

	appendLista(lst, aux->placa, aux->modelo, aux->marca, aux->quilometragem);


	//printf("%s, %s, %s, \n", aux->placa, aux->modelo, aux->marca);
}



int main() {
	FILE *arq;
  Tno *aux;
	void *p;
	TLista lst;
	lst = criaLista();


	arq = fopen("bdveiculos.txt","rt");

	if(arq == NULL){
		printf("PROBLEMAS NA ABERTURA DO ARQUIVO!!\n");
		printf("CANCELANDO A EXECUCAOO!!\n");
	}
	else {
        lst = criaLista();
        p = (tipoNo *)malloc(sizeof(tipoNo));
        char strlinhaarq[1024];
        aux = (Tno *)malloc(sizeof(Tno));

        int indice = 0;
		fgets(strlinhaarq,1024,arq);
		while(!feof(arq)){
            preencheveiculo(aux, indice, strlinhaarq, lst);
            indice++;
            aux->prox = (Tno *)malloc(sizeof(Tno));
            aux = aux->prox;
			fgets(strlinhaarq,1024,arq);
		    }
        }

    for (int k=0; k<lenLista(lst); k++){
      infoLista(lst,k);
    }
    printf("\n\n-> A lista possui %d nos. \n", lenLista(lst));


  // LIMPA LISTA
  int i = lenLista(lst) - 1;
  for(i; i>=0; i--){
    removeLista(lst, i);
  }
  printf("\n\nLISTA LIMPA!\n");


  printf("\n\n-> A lista possui %d nos agora. \n", lenLista(lst));

	fclose(arq);

	printf("\n\nFIM!\n");

	return 0;
}
