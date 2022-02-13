/*
 * ponteiro.c
 *
 *  Created on: 28 de out. de 2021
 *      Author: Matheus
 */
#include <stdio.h>


int main() {
  int a;
  int *p, *s;
  a = 5;

  p = &a;  // Opera��o de obten��o  de endere�o.

  *p = 6;  // "Na posi��o de P coloque o valor 6." -> Opera��o de Indire��o

  s = p;

  printf("%d , %u , %u \n", a, p, &p);
  printf("%d , %u , %u \n", a, s, &s);

  printf("\n OPERADOR sizeof \n");

  printf("tamanho da variavel int a: %d bytes \n", sizeof(a));
  printf("tamanho da variavel int *p: %d bytes \n", sizeof(p));
  printf("tamanho da variavel int *s: %d bytes \n \n", sizeof(s));

  printf("tamanho da variavel char: %d bytes \n", sizeof(char));
  printf("tamanho da variavel float: %d bytes \n", sizeof(float));


  return 0;
}

