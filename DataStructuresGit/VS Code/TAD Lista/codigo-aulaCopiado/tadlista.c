/*
 * tadlista.c
 *
 *  Created on: 25 de nov. de 2021
 *      Author: ernani
 */
#include "tadlista.h"
#include <stdlib.h>

TLista criaLista() {
	TLista c = (tcabec *)malloc(sizeof(tcabec));

	c->tamanho = 0;
	c->primeiro = NULL;
	c->ultimo = NULL;

	return c;
}

TLista appendLista(TLista lst, tdado dado) {
	// criar novo nó
	pnoh novono = (tipoNo *)malloc(sizeof(tipoNo));

	// associar dado a nó
	novono->dado = dado;
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
	return lst->primeiro->dado;
}

tdado ultLista(TLista lst) {
	return lst->ultimo->dado;
}


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
//tdado removeLista(TLista lst,int i) { } ARTHUR
tdado infoLista(TLista lst, int i) { 
  int tam = lenLista(lst);
  if((tam==0) || (i<0) || (i > tam)){
    return NULL;
  }
  if(i==0) return lst->primeiro->dado;
  else if(i==tam-1) return lst->ultimo->dado;
  else{
    pnoh aux = lst->primeiro;
    int pos=0;
    while(pos!=i){
      aux=aux->proximo;
      pos++;
    }
    return aux->dado;
  }

}
//int indexLista(TLista lst, tdado dado) { } ARTHUR
//TLista clearLista(TLista lst) { }