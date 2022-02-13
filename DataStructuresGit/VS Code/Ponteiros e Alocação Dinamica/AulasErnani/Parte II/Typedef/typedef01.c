/*
 * typedef01.c
 *
 *  Created on: 4 de nov. de 2021
 *      Author: ernani
 */

#define TRUE 1;
#define FALSE 0;

typedef int tboolean;
typedef struct {
			int num;
			int cep;
			char rua[100];
			char bairro[200];
		} tendereco;

typedef char tstring2000[2001];

#include <stdio.h>

int main() {
  tendereco endereco_trabalho;
  tendereco endereco_residencal;
  tendereco *ptr;
  tstring2000 strurl; //  <==> char strurl[2000]

  FILE *arq;

  tboolean achou = FALSE;
  int a = 147;
  float b = 3678.56;
  char c = 'a';
  long l = 12345678;


  return 0;
}

