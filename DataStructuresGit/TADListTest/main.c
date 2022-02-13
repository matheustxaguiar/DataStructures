#include <stdio.h>
#include <stdlib.h>
#include "tadlista.h"

int main() {
    int *p;
    TLista lst, lst2;
    int k, tam;

    lst = criaLista();

    for(int i=0; i < 4; i++){
        p = (int *)malloc(sizeof(int));
        *p = i + 5;

        appendLista(lst,p);
    }

    printf("lista possui %d nós.\n",lenLista(lst));

    // INSERE NOVO NÓ NA POSIÇÃO 3
    p = (int *)malloc(sizeof(int));
    *p = 357;
    lst = insertLista(lst,3,p);

    if(lst != NULL)
      printf("lista possui %d nós.\n",lenLista(lst));
    else
      printf("Novo nó não inserido na lista!!!\n");

    k = 0;
    tam = lenLista(lst);

    while(k < tam) {
    	int dado = *((int *)infoLista(lst,k));
    	printf("%d\n",dado);
    	k++;
    }

    lst2 = clonaLista(lst);
    lst = clearLista(lst);

    printf("lista lst possui %d nós.\n",lenLista(lst));
    printf("lista lst2 possui %d nós.\n",lenLista(lst2));

    k = 0;
    tam = lenLista(lst2);

    while(k < tam) {
    	int dado = *((int *)infoLista(lst2,k));
    	printf("%d\n",dado);
    	k++;
    }

    return 0;
}
