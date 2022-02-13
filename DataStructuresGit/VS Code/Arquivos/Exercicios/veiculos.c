#include <stdio.h>
#include <string.h>


struct dados_veiculos{
    char placa[15];
    char modelo[32];
    char marca[32];
} veiculos[1000];


void preencheVeiculos(struct dados_veiculos veiculos[], char linha[], int i){
    char separador[2] = ",";
    int posplaca, posmodelo, posmarca;

    posplaca = 0;
    // strcpy(vet[pos].placa,strtok(&s[posplaca],separador));
    strcpy(veiculos[i].placa, strtok(&linha[posplaca], separador));

  
    posmodelo = strlen(veiculos[i].placa) + 1;
    strcpy(veiculos[i].modelo, strtok(&linha[posmodelo], separador));


    posmarca = strlen(veiculos[i].modelo) + 1;
    strcpy(veiculos[i].marca, strtok(&linha[posmarca], separador));
    
}

int main()
{
    FILE *arq;
    char linha[1024];

    arq = fopen("bdveiculos.txt", "r");

    if (arq == NULL){
        printf("Erro ao abrir arquivo.");
    }else{
        int i = 0;
        fgets(linha,1024,arq);
        while (!feof(arq)){
            preencheVeiculos(veiculos, linha, i);
            i++;
            fgets(linha,1024,arq);
            
        }
        for (int k = 0; k < i; k++){
            printf("%d: %s, %s, %s\n", k+1,veiculos[k].placa, veiculos[k].modelo, veiculos[k].marca);
        }
    }



    return 0;
}
