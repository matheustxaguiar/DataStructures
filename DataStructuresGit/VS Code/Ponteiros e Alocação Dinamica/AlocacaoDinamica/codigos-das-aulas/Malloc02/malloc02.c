/*
 * malloc02.c
 *
 *  Created on: 11 de nov. de 2021
 *      Author: ernani
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ptrv;
  int v[10];

  ptrv = (int *)malloc(10 * sizeof(int));

  for(int i=0; i < 10; i++)
    v[i] = 0;

  for(int i=0; i < 10; i++)
    *(ptrv + i) = 0;

  for(int i=0; i < 10; i++)
    ptrv[i] = 5;

  return 0;
}

