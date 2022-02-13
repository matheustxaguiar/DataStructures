#include <stdio.h>
#include <stdlib.h>

typedef struct noh{
    int dado;
    struct noh *prox;
} noh;


int main()
{
    struct noh *p, *r, *s, *list;
    int len;

    r = (struct noh *)malloc(sizeof(struct noh));
    r->dado = 8;
    r->prox = (struct noh *)malloc(sizeof(struct noh));
    r->prox->dado = 20;
    s = r->prox;
    s->prox = (struct noh *)malloc(sizeof(struct noh));
    s->prox->dado = 12;
    p = s->prox;
    s->prox->prox = r;
    r->prox = NULL;


    return 0;
}
