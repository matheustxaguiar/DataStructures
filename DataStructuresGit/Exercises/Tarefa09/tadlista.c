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
	// criar novo n�
	pnoh novono = (tipoNo *)malloc(sizeof(tipoNo));

	// associar dado a n�
  novono->placa = placa;
  novono->modelo = modelo;
  novono->marca = marca;
  novono->quilometragem = quilometragem;
	novono->proximo = NULL;

	// processa lista vazia.
	if(lst->tamanho == 0){
		lst->primeiro = novono;
		lst->ultimo = novono;
	} // processa lista n�o vazia.
	else {
		// inserir novo n� na ultima posi��o da lista
		lst->ultimo->proximo = novono;

		// atualizar cabe�alho
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
        // cria novo n�
        pnoh novono = (tipoNo *)malloc(sizeof(tipoNo));
        novono->dado = dado;

        // associar o primeiro n� ao corrente primeiro n�
        novono->proximo = lst->primeiro;
        lst->primeiro = novono;
      }
      else{
        // usuario deseja inserir em uma posicao entre o primeiro e o ultimo da lista nao vazia. cria novo n�.
        pnoh novono = (tipoNo *)malloc(sizeof(tipoNo));
        novono->dado = dado;

        // Encontra o n� anterior � posicao de inser��o desejada.
        pnoh aux = lst->primeiro;
        int pos=0;

        while (pos != (i - 1)){
          aux = aux->proximo;
          pos++;
        } // *************************************
        // Insere novo n� na posicao i desejada
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


tdado removeLista(TLista lst,int i) {
  int tam = lenLista(lst);

  if((i < 0) || (i > tam) || (tam == 0)) return NULL;

  if(tam == 1) { // remover o primeiro/ultimo de uma lista de 1 s� elemento.
     pnoh aux = lst->primeiro;
     lst->primeiro = NULL;
     lst->ultimo = NULL;
     aux->anterior = NULL;
     lst->tamanho--;

     // salva o dado e libera mem�ria do n�.
     tdado d =aux->dado;
     free(aux);

     return lst;
  }
  else { // remover o primeiro de uma lista com mais de 1 elemento.
	 if(i == 0){
	   pnoh aux = lst->primeiro;
	   lst->primeiro = aux->proximo;

     aux->proximo->anterior = NULL;

	   lst->tamanho--;

	   // salva o dado e libera mem�ria do n�.
	   tdado d =aux->dado;
	   free(aux);

	   return lst;
	 }
	 else {
	   if(i == tam - 1) { // remover o ultimo de uma lista com mais de 1 elemento.
		 pnoh aux = lst->ultimo;

		 // caminha at� o pen�ltimo
		 pnoh penultimo = lst->primeiro;
		 int pos = 0;

		 while(pos != i-1){
			 penultimo = penultimo->proximo;
			 pos++;
		 }

		 penultimo->proximo = NULL;
		 lst->ultimo = penultimo;

		 lst->tamanho--;

		 // salva o dado e libera mem�ria do n�.
	     tdado d =aux->dado;
	     free(aux);

	     return lst;
	   }     // remover o i-�simo (entre primeiro e �ltimo)
	   else {// de uma lista com mais de 1 elemento.
		 // caminha at� o n� anterior ao que ser� removido.
		 pnoh anterior = lst->primeiro;
		 int pos = 0;

		 while(pos != i-1){
			 anterior = anterior->proximo;
			 pos++;
		 }

		 // remove o n� da lista.
		 pnoh aux = anterior->proximo;
     pnoh apos = anterior->proximo;
		 apos = aux->proximo;
     apos->anterior = anterior;
		 lst->tamanho--;

		 // salva o dado e libera mem�ria do n�.
		 tdado d = aux->dado;
		 free(aux);

		 return lst;
	   } // fim else linha 172
	 } // fim else linha 148
  } // fim else linha 136
} // fim removeLista





/*
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
