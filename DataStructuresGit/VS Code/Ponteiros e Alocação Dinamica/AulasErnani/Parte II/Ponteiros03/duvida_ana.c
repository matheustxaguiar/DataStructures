/*
 * duvida_ana.c
 *
 *  Created on: 4 de nov. de 2021
 *      Author: ernani
 */
#include <stdio.h>

int main() {
  int *ptra;
 // float *ptrb;
 // char *ptrc;
 // long *ptrd;

  void *ptrvoid;

  int a = 147;
//  float b = 3678.56;
//  char c = 'a';
 // long l = 12345678;

  ptrvoid = &a;
  ptra = ptrvoid;

 //  printf("%d",*(void *)ptra); <== ERRO

  printf("%p %p",ptra,ptrvoid);

  return 0;
}
