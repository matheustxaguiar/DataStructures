#include <stdio.h>
#include <stdlib.h>
#include "tadlista.h"

int main() {
	int *p;
	TLista lst;

	lst = criaLista();

	for(int i=0; i < 10; i++){
		p = (int *)malloc(sizeof(int));
		*p = i + 5;

		appendLista(lst,p);
	}

	printf("lista possui %d nós.\n",lenLista(lst));
	p = primLista(lst);
	printf("o primeiro nó armazena o valor %d.\n",*p);
	p = ultLista(lst);
	printf("o último nó armazena o valor %d.\n",*p);

	return 0;
}
