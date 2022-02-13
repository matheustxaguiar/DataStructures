/*
 * lista03.c
 *
 *  Created on: 18 de nov. de 2021
 *      Author: ernani
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct no {
                      int x;
                      int y;
                      struct no *prox;
        } tno;

typedef struct cabecalho {
                          tno *primeiro;
                          tno *ultimo;
                          int tamanho;
                        } tcabecalho;

typedef tcabecalho *TLISTA;


int main() {
   TLISTA lista;


  return 0;
}

