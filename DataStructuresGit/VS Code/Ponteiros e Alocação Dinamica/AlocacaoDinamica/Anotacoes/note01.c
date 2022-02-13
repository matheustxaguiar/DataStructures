#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int coorx;
    int coory;
    float temp;
    float pressao;

} tponto2d;


int main()
{
    tponto2d ponto2d;
    tponto2d *ptrponto2d;
    int *ptrint;
    int *ptrfloat;
    char *ptrchar;

    ptrponto2d = (tponto2d *)malloc(sizeof(tponto2d));  // antes era somente malloc(sizeof(tponto2d)); - mas dizemos dessa forma para ele n "reclamar"
    
    ponto2d.coorx = 1;
    ponto2d.coory = 2;
    ponto2d.temp = 25.7;
    ponto2d.pressao = 5.7;

    (*ptrponto2d).coorx = 1;
    ptrponto2d->coory = 2;
    ptrponto2d->temp = 25.7;
    ptrponto2d->pressao = 5.7;

    ptrint = (int *)malloc(sizeof(int));
    ptrfloat = (float *)malloc(sizeof(float));
    ptrchar = (char *)malloc(sizeof(char));

    *ptrint = 10;
    *ptrfloat = 12.5;
    *ptrchar = 'A';

    free(ptrponto2d);



    return 0;
}
