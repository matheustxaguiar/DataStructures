/*
 * gravandoArquivo.c
 *
 *  Created on: 27 de out. de 2021
 *      Author: Matheus
 */

#include <stdio.h>
#include <conio.h>

int main() {

	FILE *pont_arq; // criando variável ponteiro
	char palavra[20];

	// Abrindo arquivo com tipo w.
	pont_arq = fopen("arquivo_palavra.txt", "w");

	// Testado se o arquivo foi realmente criado.

	if(pont_arq == NULL){
		printf("Erro na abertura do arquivo.");
		return 1;
	}
	else{
		printf("Escreva uma palavra para testar a gravação no arquivo: \n");
		printf("Palavra: ");
		scanf("%s", palavra);

		// usando fprintf para salvar a palavra no arquivo.
		fprintf(pont_arq, "%s", palavra);

		printf("Dados gravados com sucesso!");
	}

	// Fechando arquivo
	fclose(pont_arq);


	getch(); // Pausa na tela.

	return 0;
}


