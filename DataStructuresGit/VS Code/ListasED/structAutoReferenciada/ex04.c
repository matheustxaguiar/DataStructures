#include <stdio.h>
#include <stdlib.h>
/*
typedef struct{
    int p;
    struct self *ptr;
}
*/

typedef struct tcoordenada2D{
    int x;
    int y;
    struct tcoordenada2D *p;
} tcoord2D;


int main()
{
    struct tcoordenada2D *l;

    l = (tcoord2D *)malloc(sizeof(tcoord2D));
    l->x = 10;
    l->y = 55;
    l->p = (tcoord2D *)malloc(sizeof(tcoord2D));

    l->p->x = 10;  // L aponta pro ponteiro da primeira struct, o ponteiro da primeira aponta para o x da segunda
    l->p->y = 10;
    l->p->p = (tcoord2D *)malloc(sizeof(tcoord2D));

    l->p->p->x = 10;
    l->p->p->y = 10;
    l->p->p->p = NULL;


    // Liberando memória de tras para frente para n perder referencia.
    free(l->p->p->p);
    l->p->p = NULL;

    free(l->p->p);
    l->p = NULL;
    
    free(l->p);
    l = NULL;

    l = (tcoord2D *)malloc(sizeof(tcoord2D));

    return 0;
}
