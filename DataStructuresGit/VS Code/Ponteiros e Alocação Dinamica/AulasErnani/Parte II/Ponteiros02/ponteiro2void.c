/*
 * ponteiro2void.c
 *
 *  Created on: 4 de nov. de 2021
 *      Author: ernani
 */
#include <stdio.h>

int main() {
  int *ptra;
  float *ptrb;
  char *ptrc;
  long *ptrd;

  void *ptrvoid;

  int a = 147;
  float b = 3678.56;
  char c = 'a';
  long l = 12345678;

  ptra = &a;
  ptrb = &b;
  ptrc = &c;
  ptrd = &l;

  ptrvoid = &a;
  printf("%d\n",*((int *)ptrvoid));  // Usando type cast. Normalmennte seria somente ptrvoid, mas devemos declarar o tipo. 

  ptrvoid = &b;
  printf("%f\n",*((float *)ptrvoid));

  ptrvoid = &c;
  printf("%c\n",*((char *)ptrvoid));

  ptrvoid = &l;
  printf("%ld\n",*((long *)ptrvoid));

  printf("%p %p %p %p",ptra,ptrb,ptrc,ptrd);

  return 0;
}

