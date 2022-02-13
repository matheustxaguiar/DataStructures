/*
 * usandoFree.c
 *
 *  Created on: 11 de nov. de 2021
 *      Author: Matheus
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ptrv;
  int v[10];

  ptrv = (int *)malloc(5 * sizeof(int));
  if(ptrv != NULL)
    for (int i = 0; i < 5; i++){
      *(ptrv + i) = -1;
    }

  free(ptrv);
  ptrv = NULL;

  if(ptrv != NULL)
    ptrv = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++){
      *(ptrv + i) = -1;
    }

  free(ptrv);
  ptrv = NULL;

  if(ptrv != NULL)
    ptrv = (int *)malloc(15 * sizeof(int));
    for (int i = 0; i < 15; i++){
      *(ptrv + i) = -1;
    }

  free(ptrv);
  ptrv = NULL;

  return 0;
}
