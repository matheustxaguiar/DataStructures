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

    printf("\nA: \n");
    p = (struct noh *)malloc(sizeof(struct noh));
    
    p->prox = (struct noh *)malloc(sizeof(struct noh));

    p->prox->prox = (struct noh *)malloc(sizeof(struct noh));

    p->prox->prox->prox = NULL;

    // p->prox = p->prox->prox; ?????

    free(p->prox->prox);
    p->prox = NULL;
    free(p->prox);
    p = NULL;
    free(p);


    printf("B: \n");
    p = (struct noh *)malloc(sizeof(struct noh));
    
    p->prox = (struct noh *)malloc(sizeof(struct noh));

    r = p->prox;

    p->prox->prox = (struct noh *)malloc(sizeof(struct noh));

    p->prox->prox->prox = (struct noh *)malloc(sizeof(struct noh));

    s = p->prox->prox->prox;

    p->prox->prox->prox->prox = NULL;
    
    s = NULL;
    r = NULL;
    free(p->prox->prox);
    p->prox = NULL;
    free(p->prox);
    p = NULL;
    free(p);


    printf("C: \n");
    p = (struct noh *)malloc(sizeof(struct noh));
    
    p->prox = (struct noh *)malloc(sizeof(struct noh));

    list = p->prox;

    p->prox->prox = (struct noh *)malloc(sizeof(struct noh));

    p->prox->prox->prox = (struct noh *)malloc(sizeof(struct noh));

    p->prox->prox->prox->prox = NULL;
    
    free(p->prox->prox->prox);
    p->prox->prox = NULL;
    free(p->prox->prox);
    p->prox = NULL;
    free(p->prox);
    p = NULL;
    free(p);
    free(list);



    printf("D: \n");
    list = (struct noh *)malloc(sizeof(struct noh));
    
    list->prox = (struct noh *)malloc(sizeof(struct noh));

    list->prox->prox = (struct noh *)malloc(sizeof(struct noh));

    list->prox->prox->prox = (struct noh *)malloc(sizeof(struct noh));

    list->prox->prox->prox->prox = NULL;

    p = list->prox->prox;
    
    free(list->prox->prox->prox);
    list->prox->prox = NULL;
    free(list->prox->prox);
    list->prox = NULL;
    free(list->prox);
    list = NULL;
    free(list);
    return 0;
}
