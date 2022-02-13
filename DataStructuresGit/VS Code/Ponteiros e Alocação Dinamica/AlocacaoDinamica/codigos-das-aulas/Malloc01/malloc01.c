/*
 * malloc01.c
 *
 *  Created on: 11 de nov. de 2021
 *      Author: ernani
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct {
                int coordx;
                int coordy;
                float temp;
                float pressao;
        } tponto2d;

int main() {
  int *ptrint;
  float *ptrfloat;
  char *ptrchar;

  tponto2d *ptrponto2d;
  ptrponto2d = (tponto2d *)malloc(sizeof(tponto2d));

  ptrponto2d->coordx = 78;
  ptrponto2d->coordy = 78;
  ptrponto2d->temp = 45;
  ptrponto2d->pressao = 123;

  ptrint = (int *)malloc(sizeof(int));
  ptrfloat = (float *)malloc(sizeof(float));
  ptrchar = (char *)malloc(sizeof(char));

  *ptrint = 256;
  *ptrfloat = 2.345;
  *ptrchar = '@';

  return 0;
}


