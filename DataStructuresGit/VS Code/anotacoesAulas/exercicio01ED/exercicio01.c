/*
 * exercicio01.c
 *
 *  Created on: 13 de nov. de 2021
 *      Author: Matheus
 */
#include <stdio.h>

int main(void) {
  struct tregCovidES{
    char data[15];
    char diagnostico[15];
    char classificacao[15];
    char municipio[15];
    char bairro[15];
    char raca[15];
  }tregCovidES[5];
  int i = 0;
  FILE *arq;

  arq = fopen("microdadostarefa03.csv", "r");

  if (arq == NULL){
    printf("Error, n?o foi possivel abrir o arquivo.");
  }
  else{
    while ((fscanf(arq, "%c,%c,%c,%c,%c,%c\n", tregCovidES[i].data, tregCovidES[i].diagnostico, tregCovidES[i].classificacao, tregCovidES[i].municipio, tregCovidES[i].bairro, tregCovidES[i].raca)) != EOF){
	  i = i + 1;
    }
  printf("teste");
  printf("data: %s", &tregCovidES[0].data[15]);


  return 0;
  }
}
