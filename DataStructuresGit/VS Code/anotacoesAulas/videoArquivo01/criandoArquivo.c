/*
 * criandoArquivo.c
 *
 *  Created on: 27 de out. de 2021
 *      Author: Matheus
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
	// Criando Ponteiro para arquivo.
	FILE *pont_arq;

	// Criando arquivo.
	pont_arq = fopen("arquivo.txt", "a");

	// Fechando arquivo.
	fclose(pont_arq);

	// Mensagem para usuário.
	printf("O arquivo foi criado com Sucesso!\n");

	system("pause");

	return 0;
}
