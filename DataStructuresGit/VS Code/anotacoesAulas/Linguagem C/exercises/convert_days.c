#include <stdio.h>

int main (){
	int Dias;
	float Anos;
	printf("Insira a baixo o numero de dias: ");  /* Input de dias */
	scanf("%d", &Dias);
	Anos=Dias/365.25; /* Dias -> Anos */
	printf("\n\n%d dias equilavem a %f anos. \n",Dias,Anos);
    return (0);
}
