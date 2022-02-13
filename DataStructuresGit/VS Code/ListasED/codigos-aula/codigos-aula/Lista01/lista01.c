/*
 * lista01.c
 *
 *  Created on: 18 de nov. de 2021
 *      Author: ernani
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct tcoordenada2D {
                      int x;
                      int y;
                      struct tcoordenada2D *prox;
        } tcoord2D;

int main() {
  tcoord2D *lista, *aux;

  // CONSTRUA UM ´ÓDIGO C A PARTIR DESTE PONTO DO PROGRAMA.
  // O CÓDIGO DEVE CRIAR, ALOCANDO NO HEAP, UMA LISTA DE 20 NÓS.
  lista = (tcoord2D *)malloc(sizeof(tcoord2D));
  aux = lista;

  for(int i=0;i < 2; i++) {
    aux->prox = (tcoord2D *)malloc(sizeof(tcoord2D));
    aux = aux->prox;
  }

  aux->prox = NULL;

  return 0;
}
