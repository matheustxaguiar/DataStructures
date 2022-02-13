#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE* arq;
    int contador;
    char intlinha[1024];
    char vet_dezenas[61];
    int *vet_contagem[61];
    for (int i = 0; i < 61; i++)
    {
        vet_contagem[i] = malloc(sizeof(int));
    }
    for (int i = 0; i < 60; i++)
    {
        vet_dezenas[i] = i+1;
    }

    arq = fopen("./megasenasimples.txt","rt");

    if(arq == NULL){
		printf("PROBLEMAS NA ABERTURA DO ARQUIVO!!\n");
		printf("CANCELANDO A EXECUÇÃO!!\n");
	}

    else{
    	while (!feof(arq)){
        contador = 0;
        fgets(intlinha, 1024, arq);
        for (int i = 0; i < 60; i++)
        {
            int pos1, pos2, pos3, pos4, pos5, pos6;

            if(strcmp(strtok(&intlinha[pos1],","),&vet_dezenas[i])==0){
                contador++;
                *(int*)vet_contagem[i] = contador + *(int*)vet_contagem[i];
            }

            pos2 = strlen(&intlinha[pos1]);
            if (strcmp(strtok(&intlinha[pos2],","),&vet_dezenas[i])==0){
                contador++;
                *(int*)vet_contagem[i] = contador + *(int*)vet_contagem[i];
            }

            pos3 = strlen(&intlinha[pos2]);
            if (strcmp(strtok(&intlinha[pos3],","),&vet_dezenas[i])==0){
                contador++;
                *(int*)vet_contagem[i] = contador + *(int*)vet_contagem[i];
            }

            pos3 = strlen(&intlinha[pos2]);
            if (strcmp(strtok(&intlinha[pos3],","),&vet_dezenas[i])==0){
                contador++;
                *(int*)vet_contagem[i] = contador + *(int*)vet_contagem[i];
            }

            pos4 = strlen(&intlinha[pos3]);
            if (strcmp(strtok(&intlinha[pos4],","),&vet_dezenas[i])==0){
                contador++;
                *(int*)vet_contagem[i] = contador + *(int*)vet_contagem[i];
            }

            pos5 = strlen(&intlinha[pos4]);
            if (strcmp(strtok(&intlinha[pos5],","),&vet_dezenas[i])==0){
                contador++;
                *(int*)vet_contagem[i] = contador + *(int*)vet_contagem[i];
            }

            pos6 = strlen(&intlinha[pos5]);
            if (strcmp(strtok(&intlinha[pos6],","),&vet_dezenas[i])==0){
                contador++;
                *(int*)vet_contagem[i] = contador + *(int*)vet_contagem[i];
            }
            contador = 0;
        }
    } // Fechamento while

        for (int i = 0; i < 60; i++)
        {
            printf("Dezena %d, saiu %d vezes\n", i+1, *(int*)vet_contagem[i]);
        }

    }
    fclose(arq);
    return 0;
}
