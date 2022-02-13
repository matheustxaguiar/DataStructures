#include <stdio.h>
#include <stdlib.h>


struct noh{
    int dado;
    struct noh *proximo;
};

int main()
{
    struct noh *s, *t;

    s = (struct noh *)malloc(sizeof(struct noh));
    s->dado = 12;

    t = (struct noh *)malloc(sizeof(struct noh));
    t->proximo = s;

    t->dado = 23;
    s->proximo = NULL;

    free(t);
    free(s);


    return 0;
}
