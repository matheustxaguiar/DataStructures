/*
 * malloc.c
 *
 *  Created on: 11 de nov. de 2021
 *      Author: Matheus
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct{
  int coordx;
  int coordy;
  float temp;
  float pressao;
  } tponto2d;

int main() {
  tponto2d ponto2d;
  tponto2d *ptrponto2d;

  ponto2d.coordx=12;
  ponto2d.coordy=25;
  ponto2d.temp=25.6;
  ponto2d.pressao=45;

  ptrponto2d = (tponto2d *)malloc(sizeof(tponto2d));

  (*ptrponto2d).coordx = 78;
  //ptrponto2d->coordx = 78; Outro método


  (*ptrponto2d).coordy = 78;
  (*ptrponto2d).temp = 45;
  (*ptrponto2d).pressao = 123;


  return 0;
}
