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
    struct tcoordenada2D *l, *aux;
    int cont = 0;

    l = (tcoord2D *)malloc(sizeof(tcoord2D));
    aux = l;

    for(int i = 0; i < 5; i++){
        aux->p = (tcoord2D *)malloc(sizeof(tcoord2D));
        aux = aux->p;
    }
    aux->p = NULL;

    while (aux->p != NULL){
        cont++;
    }

    return 0;
}
