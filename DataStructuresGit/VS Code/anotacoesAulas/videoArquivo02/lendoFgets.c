/*
 * lendoFgets.c
 *
 *  Created on: 27 de out. de 2021
 *      Author: Matheus
 */

#include <stdio.h>
#include <conio.h>

int main() {

	FILE *pont_arq;
	char texto_str[20];

	// Abrindo arquivo para leitura.
	pont_arq = fopen("arquivo_palavra.txt", "r");

	// Enquanto não for o fim do arquivo será executado o seguinte loop.
	while(fgets(texto_str, 20, pont_arq) != NULL){
		printf("%s", texto_str);
	}
	// Fechando arquivo
	fclose(pont_arq);


	getch(); // Pausa na tela.

	return 0;
}

