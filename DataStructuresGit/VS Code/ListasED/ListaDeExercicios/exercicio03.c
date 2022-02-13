#include <stdio.h>
#include <stdlib.h>

typedef struct noh{
    int dado;
    struct noh *prox;
} noh;


int main()
{
    struct noh *p, *prox, *aux;
    int len, pares = 0;


    p = (struct noh *)malloc(sizeof(struct noh));
    p->dado = pares;
    aux = p;

    for (int i = 0; i < 4; i++){
        pares = pares + 2;
        aux->prox = (struct noh *)malloc(sizeof(struct noh));
        aux = aux->prox;
        aux->dado = pares;
        len++;
    }

    return 0;
}
