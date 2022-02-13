/*
 * arquivo02.c
 *
 *  Created on: 21 de out. de 2021
 *      Author: ernani
 */

#include <stdio.h>
#include <string.h>

int main() {
	FILE* arq;
	int num;
	//char strlinhaarq[256];

	arq = fopen("./teste2.txt","rt");

	if(arq == NULL){
		printf("PROBLEMAS NA ABERTURA DO ARQUIVO!!\n");
		printf("CANCELANDO A EXECUÇÃO!!\n");
	}
	else {
		// LÓGICA DO PROGRAMA ..
//		fgets(strlinhaarq,1024,arq);
//		while(!feof(arq)){
//			sscanf(strlinhaarq,"%d",&num);
//			printf("%d\n",num);
//			fgets(strlinhaarq,1024,arq);
//		}
//				OU
//
		// LÓGICA DO PROGRAMA ..
		while(!feof(arq)){
			fscanf(arq,"%d\n",&num);
			printf("%d\n",num);
		}
	}

	fclose(arq);

	printf("FIM!!");

	return 0;
}

