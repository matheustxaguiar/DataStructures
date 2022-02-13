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
};


int main()
{
    struct tcoordenada2D coord1;
    struct tcoordenada2D coord2;

    coord1.x = 10;
    coord1.y = 25;

    coord2.x = 234;
    coord2.y = 12;

    coord1.p = &coord2;
    coord2.p = &coord1;

    return 0;
}
