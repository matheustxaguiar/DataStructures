/*
 * struc.c
 *
 *  Created on: 19 de out. de 2021
 *      Author: Matheus
 */
#include <stdio.h>

	struct livro{
		char titulo; // declarando variavel dentro do struct e determiando o num maximo de caracteres
		char autor;
		int paginas;
		float valor;
	};

	struct livro livro1;  // Atribuindo  a variavel livro1 a estrutura criada

int main(){
	printf("\n- - - Cadastrando novo livro - - -\n \n");

	printf("Titulo................: ");
	scanf("%c", &livro1.titulo);
	printf("\nAutor.................: ");
	scanf("%c", &livro1.autor);
	printf("\nPáginas...............: ");
	scanf("%d", &livro1.paginas);
	printf("\nValor.................: ");
	scanf("%2f", &livro1.valor);

	printf("\n \n- - - - - - - - - - -\n \n");

	printf(" -> O livro cadastrado: %c \n", livro1.titulo);
	printf(" -> Autor: %c \n", livro1.autor);
	printf(" -> Páginas: %d \n", livro1.paginas);
	printf(" -> Valor: %2f \n", livro1.valor);

	return 0;

}
