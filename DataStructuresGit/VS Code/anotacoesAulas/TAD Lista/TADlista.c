/*
 * TADlista.c
 *
 *  Created on: 25 de nov. de 2021
 *      Author: Matheus
 */
#include <stdio.h>
#include <stdlib.h>
#include "TADlista.H"

TLista crialista(){
	TLista c = (tcabec *)malloc(sizeof(tcabec));

	c->tamanho = 0;
	c->primeiro = NULL;
	c->ultimo = NULL;

	return c;
}

TLista appendlista(TLista lst, tdado dado ){
	// Criar novo no
	pnoh novono = (tipoNo *)malloc(sizeof(tipoNo));

	//Associar dado a no
	novono->dado = dado;
	novono->proximo = NULL;

	if (lst->tamanho == 0){
		lst->primeiro = novono;
		lst->ultimo = novono;
		lst->tamanho++;
	}
	else{
		// Inserir novo no na ultima posicao da lista
		lst->ultimo->proximo = novono;

		// Atualizar cabecalho
		lst->ultimo = novono;
	}
	lst->tamanho++;
	return lst;
}


int lenLista(TLista lst){
	return lst->tamanho;
}

tdado primlista(TLista lst){
	return lst->primeiro->dado;
}

tdado ultlista(TLista lst){
	return lst->ultimo->dado;
}

