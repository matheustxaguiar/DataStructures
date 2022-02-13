/*
 * ptrstruct01.c
 *
 *  Created on: 4 de nov. de 2021
 *      Author: ernani
 */
#include <stdio.h>
#include <string.h>

typedef char string256[257];
typedef struct {
			int num;
			int cep;
			string256 rua;
			string256 bairro;
		} tendereco;

int main() {
	tendereco residencial;
	tendereco *ptr;
	//int i;

	//int *ptri;
	//ptri = &i;
	//printf("%d",*ptri);

	residencial.num = 201;
	residencial.cep = 29078345;
	strcpy(residencial.rua,"Av. Vitória");
	strcpy(residencial.bairro,"Maruípe");

	ptr = &residencial;

	printf("via struct:  %d %d %s %s\n",residencial.num, residencial.cep,residencial.rua, residencial.bairro);

	printf("via *struct: %d %d %s %s\n",(*ptr).num, (*ptr).cep,(*ptr).rua,(*ptr).bairro);

	printf("via *struct: %d %d %s %s\n",ptr->num, ptr->cep,ptr->rua,ptr->bairro);

	return 0;
}


