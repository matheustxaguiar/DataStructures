/*
 * tadlista.c
 *
 *  Created on: 25 de nov. de 2021
 *      Author: ernani
 */
#include "tadlista.h"
#include <stdlib.h>
#include <stdio.h>

TLista criaLista() {
	TLista c = (tcabec *)malloc(sizeof(tcabec));

	c->tamanho = 0;
	c->primeiro = NULL;
	c->ultimo = NULL;

	return c;
}

TLista appendLista(TLista lst, tdado placa, tdado modelo, tdado marca, tdado quilometragem) {
	// criar novo nó
	pnoh novono = (tipoNo *)malloc(sizeof(tipoNo));

	// associar dado a nó
  novono->placa = placa;
  novono->modelo = modelo;
  novono->marca = marca;
  novono->quilometragem = quilometragem;
	novono->proximo = NULL;

	// processa lista vazia.
	if(lst->tamanho == 0){
		lst->primeiro = novono;
		lst->ultimo = novono;
	} // processa lista não vazia.
	else {
		// inserir novo nó na ultima posição da lista
		lst->ultimo->proximo = novono;

		// atualizar cabeçalho
		lst->ultimo = novono;
	}

	lst->tamanho++;

	return lst;
}

int lenLista(TLista lst) {
	return lst->tamanho;
}

tdado primLista(TLista lst) {
	return lst->primeiro->placa;
}

tdado ultLista(TLista lst) {
	return lst->ultimo->dado;
}

/*
TLista insertLista(TLista lst,int i, tdado dado) {
  int tam = lenLista(lst);

  if ((i < 0) || (i > tam)) return  NULL;

  // Usuario deseja inserir em uma lisat vazia
  if (lenLista(lst) == 0){
    appendLista(lst, dado);
  }
  else
    if (i == tam){
      appendLista(lst, dado);
    }
    else{ // Usuario deseja inserir na primeira posciao de uma lista nao vazia
      if (i == 0){
        // cria novo nó
        pnoh novono = (tipoNo *)malloc(sizeof(tipoNo));
        novono->dado = dado;

        // associar o primeiro nó ao corrente primeiro nó
        novono->proximo = lst->primeiro;
        lst->primeiro = novono;
      }
      else{
        // usuario deseja inserir em uma posicao entre o primeiro e o ultimo da lista nao vazia. cria novo nó.
        pnoh novono = (tipoNo *)malloc(sizeof(tipoNo));
        novono->dado = dado;

        // Encontra o nó anterior à posicao de inserção desejada.
        pnoh aux = lst->primeiro;
        int pos=0;

        while (pos != (i - 1)){
          aux = aux->proximo;
          pos++;
        } // *************************************
        // Insere novo nó na posicao i desejada
        novono->proximo = aux->proximo;
        aux->proximo = novono;
      }
      lst->tamanho++;
  }

  return lst;
}

*/

tdado infoLista(TLista lst, int i){
  char *placa,*modelo,*marca,*quilometragem;
  pnoh selecao = lst->primeiro;
  i = 0;
  while(i!=lenLista(lst)){
      placa = selecao->placa;
      modelo = selecao->modelo;
      marca = selecao->marca;
      quilometragem = selecao->quilometragem;
      printf("%s, %s,%s, %s\n",placa, modelo, marca, quilometragem);
      selecao = selecao->proximo;
      i++;
      /*
      placa = selecao->placa;
      printf("%s,",placa);
      modelo = selecao->modelo;
      printf("%s,\n",modelo);
      marca = selecao->marca;
      printf("%s\n",marca);

      quilometragem = selecao->quilometragem;

      printf("%s\n",quilometragem);

      //km = printar->dadoKm;
      //printf("Km: %s.\n",km);
      selecao = selecao->proximo;
      i++;
      */
  }
}




/*
//tdado removeLista(TLista lst,int i) { } ARTHUR
tdado infoLista(TLista lst, int i) {
  int tam = lenLista(lst);
  if((tam==0) || (i<0) || (i > tam)){
    return NULL;
  }
  if(i==0){
    printf("%s,", lst->primeiro->placa);
    printf("%s,", lst->primeiro->modelo);
    printf("%s,\n", lst->primeiro->marca);
  }
  else if(i==tam-1){
    printf("%s,", lst->ultimo->placa);
    printf("%s,", lst->ultimo->modelo);
    printf("%s,\n", lst->ultimo->marca);
  }
  else{
    pnoh aux = lst->primeiro;
    int pos=0;
    while(pos!=i){
      aux=aux->proximo;
      pos++;
    }
    printf("%s,", aux->placa);
    printf("%s,", aux->modelo);
    printf("%s,\n", aux->marca);

  }
    return 0;
}
*/

//int indexLista(TLista lst, tdado dado) { } ARTHUR
//TLista clearLista(TLista lst) { }
