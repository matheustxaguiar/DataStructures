/*
 * vetor02.c
 *
 *  Created on: 14 de out. de 2021
 *      Author: Matheus
 *
 *	CONSTRUA UM PROGRAMA EM C QUE FAÇA UMA BUSCA EM UM VETOR DE TMANHO 100 E INTEIRO.
 *	O PROGRAMA DEVE PREENCHER O VETOR COM VALORES INTEIROS E EM SEGUIDA SOLICITAR UM  NUMERO INTEIRO AO USUARIO
 *	O CODIGO DEVE PROCURAR ESTE VALOR NO VETOR E RETORNAR A POSIÇÃO DO VALOR NO VETOR ONDE FOI ENCONTRADO
 *	CASO O VALOR NÃO EXISTA NO VETOR, EMITIR A MENSAGEM: "VALOR NÃO ENCONTRADO"
 *	OBS: CONTINUA UM PROGRAMA BASEADO EM FUNÇÕES
 *
 *
 *
 */
#include <stdio.h>
#define TAMAXVET 100

int main() {
	int num;
  int aux = 0;
  int valores[TAMAXVET];
  int encontrado = 0;

	for (int i=0; i<TAMAXVET; i++){
    valores[i] = aux;
    aux = aux + 10;
  }
	printf("DIGITE UM NUMERO DE 0 A 100: ");
	scanf("%d", &num);

	for (int k=0; k<TAMAXVET; k++){
		if (valores[k] == num){
			printf("\n ENCONTREI O VALOR!, ele esta na posição %d \n", k);
      encontrado = 1;
    }
	}
  if (encontrado == 0){
    printf("\n VALOR NÃO CONTRADO \n");
  }
	return 0;
}
