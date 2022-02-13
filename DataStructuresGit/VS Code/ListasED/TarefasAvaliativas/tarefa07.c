/*
 * lista02.c
 *
 *  Created on: 18 de nov. de 2021
 *      Author: ernani
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct tcoordenada2D {
                      int x;
                      int y;
                      struct tcoordenada2D *anterior;
                      struct tcoordenada2D *prox;
        } tcoord2D;

int main() {
  tcoord2D *lista, *aux, *ultima, *ant;
  int tamlista;

  // CONSTRUA UM ´ÓDIGO C A PARTIR DESTE PONTO DO PROGRAMA.
  // O CÓDIGO DEVE CRIAR, ALOCANDO NO HEAP, UMA LISTA DE 20 NÓS.
  lista = (tcoord2D *)malloc(sizeof(tcoord2D));
  aux = lista;

  for(int i=0;i < 20; i++) {
    ant = aux;
    aux->prox = (tcoord2D *)malloc(sizeof(tcoord2D));
    aux = aux->prox;
    aux->anterior = ant;
  }

  aux->prox = NULL;

  printf("PROCESSANDO LISTA: REMOVENDO E ACRESCENTANDO NOVOS NÓS..\n");

  // CONSTRUA O ´ÓDIGO C PARA DESCOBRIR QUANTOS NOS EXISTEM NA LISTA ATUAL.

  if(lista == NULL)
    tamlista = 0;
  else {
    tamlista = 1;
    aux = lista;

    while(aux->prox != NULL) {
      tamlista++;
      aux = aux->prox;
    }
  }

  printf("Lista com %d nos.\n",tamlista);

  return 0;
}

