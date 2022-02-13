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


//TLista insertLista(TLista lst,int i, tdado dado) { }
//tdado removeLista(TLista lst,int i) { }
//tdado dadoLista(TLista lst, int i) { }
//int indexLista(TLista lst, tdado dado) { }
//TLista clearLista(TLista lst) { }

