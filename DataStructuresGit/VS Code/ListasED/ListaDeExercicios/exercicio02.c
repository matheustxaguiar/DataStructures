#include <stdio.h>
#include <stdlib.h>


struct noh{
    int dado;
    struct noh *proximo;
};

int main()
{
    struct noh *p, *r, *s;


    p = (struct noh *)malloc(sizeof(struct noh));
    p->dado = 3;

    
    p->proximo = (struct noh *)malloc(sizeof(struct noh));
    p->proximo->dado = 5;


    p->proximo->proximo = (struct noh *)malloc(sizeof(struct noh));
    p->proximo->proximo->dado = 9;
    p->proximo->proximo->proximo= NULL;


    r = p->proximo;
    s = p->proximo->proximo;

    return 0;
}
