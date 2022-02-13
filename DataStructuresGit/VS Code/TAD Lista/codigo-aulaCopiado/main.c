#include <stdio.h>
#include <stdlib.h>
#include "tadlista.h"

int main() {
	int *p;
	TLista lst;

	lst = criaLista();

	for(int i=0; i < 4; i++){
		p = (int *)malloc(sizeof(int));
		*p = i + 5;

		appendLista(lst,p);
	}

	printf("lista possui %d nos.\n",lenLista(lst));
	//p = primLista(lst);
	//printf("o primeiro no armazena o valor %d.\n",*p);
	//p = ultLista(lst);
	//printf("o ultimo no armazena o valor %d.\n",*p);

  // INSERE NOVO NÓ NA POSICAO 3
  // p = (int *)malloc(sizeof(int));
  // *p = 357;
  // lst = insertLista(lst, 3, p);


  
  if(lst!=NULL){
    printf("Lista possuí %d nos. \n", lenLista(lst));
    for (int k=0; k<lenLista(lst); k++){
      printf("%d,",*((int *)infoLista(lst,k)));
    }
  }
  else
    printf("Novo nó não inserido na lista.\n");
	return 0;
}
