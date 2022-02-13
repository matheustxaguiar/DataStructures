/*
 * ptrarray01.c
 *
 *  Created on: 4 de nov. de 2021
 *      Author: ernani
 */

#include <stdio.h>
#include <string.h>

//
// EM C, O NOME DE UMA VARIÁVEL VETOR (SEM OS COLCHETES) É UM PONTEIRO DO TIPO DO ELEMENTO DO VETOR.
// E ELE JÁ NASCE PREENCHIDO COM O ENDEREÇO DO PRIMEIRO ELEMENTO DO VETOR.
// E ESTE VALOR É CONSTANTE, NÃO PODE SER ALTERADO.
// OU SEJA, O NOME DE UM VETOR É UMA CONSTANTE PONTEIRO.
//

int main() {
	int vet[10]; // vet é um int *vet
	             // e que vet = &vet[0] , o compilador faz isto automaticamente.
				 // e o valor de vet NÃO pode ser alterado.
	int *pt;

	pt = vet;






	return 0;
}



