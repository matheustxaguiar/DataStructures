/*
 * encad01.c
 *
 *  Created on: 18 de nov. de 2021
 *      Author: ernani
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct tcoordenada2D {
                      int x;
                      int y;
                      struct tcoordenada2D *p;
        } tcoord2D;

int main() {
  tcoord2D *lista;

  lista = (tcoord2D *)malloc(sizeof(tcoord2D));
  lista->x = 10;
  lista->y = 55;
  lista->p = (tcoord2D *)malloc(sizeof(tcoord2D));

  lista->p->x = 345;
  lista->p->y = 78;
  lista->p->p = (tcoord2D *)malloc(sizeof(tcoord2D));

  lista->p->p->x = 100;
  lista->p->p->y = 200;
  lista->p->p->p = NULL;

  printf("PROCESSANDO O DADOS NO ENCADEAMENTO..\n");

  free(lista->p->p);
  lista->p->p = NULL;

  free(lista->p);
  lista->p = NULL;

  free(lista);
  lista = NULL;

  return 0;
}
