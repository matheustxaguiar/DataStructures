#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char dataDiagnostico[11];
    char classificacao[12];
    char municipio[30];
    char bairro[30];
    char sexo[2];
    char cor[9];
} tregCovidES;


 void preenchecovid(tregCovidES vet[], int pos, char s[]){
	int posDiagnostico, posClassificacao, posMunicipio, posBairro, posSexo, posCor;

	posDiagnostico = 0;
	strcpy(vet[pos].dataDiagnostico,strtok(&s[posDiagnostico],";"));

	posClassificacao = strlen(vet[pos].dataDiagnostico);
	strcpy(vet[pos].classificacao,strtok(&s[posClassificacao],";"));

	posMunicipio = posClassificacao + strlen(vet[pos].classificacao);
	strcpy(vet[pos].municipio,strtok(&s[posMunicipio],";"));

    posBairro = posMunicipio + strlen(vet[pos].municipio);
	strcpy(vet[pos].bairro,strtok(&s[posBairro],";"));

    posSexo = posBairro + strlen(vet[pos].bairro);
	strcpy(vet[pos].sexo,strtok(&s[posSexo],";"));

    posCor = posSexo + strlen(vet[pos].sexo);
	strcpy(vet[pos].cor,strtok(&s[posCor],";"));
}

void contadorcovid(tregCovidES vet[30000], int pos){
	int contadorA = 0, contadorB = 0, contadorIn = 0, contadorPa = 0, contadorPr = 0, contadorIg = 0;
	int contadorConfirmados = 0, contadorDescartados = 0, contadorSuspeito = 0;
	float resultadoA, resultadoB, resultadoIn, resultadoPa, resultadoPr, resultadoIg;
	int k = 0;

	for(k=0; k < pos; k++){
		if(strcmp(vet[k].classificacao,"Confirmados")== 0){
			contadorConfirmados++;
			if (strcmp(vet[k].cor,"Amarela") ==0)
			{
				contadorA++;
			}
			if (strcmp(vet[k].cor,"Branca") ==0)
			{
				contadorB++;
			}
			if (strcmp(vet[k].cor,"Indigena") ==0)
			{
				contadorIn++;
			}
			if (strcmp(vet[k].cor,"Parda") ==0)
			{
				contadorPa++;
			}
			if (strcmp(vet[k].cor,"Preta") ==0)
			{
				contadorPr++;
			}
			if (strcmp(vet[k].cor,"Ignorado") ==0)
			{
				contadorIg++;
			}
		}
	}
	resultadoA = (contadorA/contadorConfirmados)*100;
	resultadoB = (contadorB/contadorConfirmados)*100; 
	resultadoIn = (contadorIn/contadorConfirmados)*100;
	resultadoPa = (contadorPa/contadorConfirmados)*100;
	resultadoPr = (contadorPr/contadorConfirmados)*100;
	resultadoIg = (contadorIg/contadorConfirmados)*100;

	printf("Classifica????o: Confirmados");
	printf("Amarela: %.2f %%",resultadoA);
	printf("Branca: %.2f %%",resultadoB);
	printf("Indigena: %.2f %%",resultadoIn);
	printf("Parda: %.2f %%",resultadoPa);
	printf("Preta: %.2f %%",resultadoPr);
	printf("Ignorados: %.2f %%",resultadoIg);

	contadorA = 0, contadorB = 0, contadorIn = 0, contadorPa = 0, contadorPr = 0, contadorIg = 0;

	for(k=0; k < pos; k++){
		if(strcmp(vet[k].classificacao,"Descartados")== 0){
			contadorDescartados++;
			if (strcmp(vet[k].cor,"Amarela") ==0)
			{
				contadorA++;
			}
			if (strcmp(vet[k].cor,"Branca") ==0)
			{
				contadorB++;
			}
			if (strcmp(vet[k].cor,"Indigena") ==0)
			{
				contadorIn++;
			}
			if (strcmp(vet[k].cor,"Parda") ==0)
			{
				contadorPa++;
			}
			if (strcmp(vet[k].cor,"Preta") ==0)
			{
				contadorPr++;
			}
			if (strcmp(vet[k].cor,"Ignorado") ==0)
			{
				contadorIg++;
			}
		}				
	}
	resultadoA = (contadorA/contadorDescartados)*100;
	resultadoB = (contadorB/contadorDescartados)*100; 
	resultadoIn = (contadorIn/contadorDescartados)*100;
	resultadoPa = (contadorPa/contadorDescartados)*100;
	resultadoPr = (contadorPr/contadorDescartados)*100;
	resultadoIg = (contadorIg/contadorDescartados)*100;

	printf("Classifica????o: Descartados");
	printf("Amarela: %.2f %%",resultadoA);
	printf("Branca: %.2f %%",resultadoB);
	printf("Indigena: %.2f %%",resultadoIn);
	printf("Parda: %.2f %%",resultadoPa);
	printf("Preta: %.2f %%",resultadoPr);
	printf("Ignorados: %.2f %%",resultadoIg);

	contadorA = 0, contadorB = 0, contadorIn = 0, contadorPa = 0, contadorPr = 0, contadorIg = 0;

	for(k=0; k < pos; k++){
		if(strcmp(vet[k].classificacao,"Suspeito")== 0){
			contadorSuspeito++;
			if (strcmp(vet[k].cor,"Amarela") ==0)
			{
				contadorA++;
			}
			if (strcmp(vet[k].cor,"Branca") ==0)
			{
				contadorB++;
			}
			if (strcmp(vet[k].cor,"Indigena") ==0)
			{
				contadorIn++;
			}
			if (strcmp(vet[k].cor,"Parda") ==0)
			{
				contadorPa++;
			}
			if (strcmp(vet[k].cor,"Preta") ==0)
			{
				contadorPr++;
			}
			if (strcmp(vet[k].cor,"Ignorado") ==0)
			{
				contadorIg++;
			}
		}
	}
	resultadoA = (contadorA/contadorSuspeito)*100;
	resultadoB = (contadorB/contadorSuspeito)*100; 
	resultadoIn = (contadorIn/contadorSuspeito)*100;
	resultadoPa = (contadorPa/contadorSuspeito)*100;
	resultadoPr = (contadorPr/contadorSuspeito)*100;
	resultadoIg = (contadorIg/contadorSuspeito)*100;

	printf("Classifica????o: Suspeito");
	printf("Amarela: %.2f %%",resultadoA);
	printf("Branca: %.2f %%",resultadoB);
	printf("Indigena: %.2f %%",resultadoIn);
	printf("Parda: %.2f %%",resultadoPa);
	printf("Preta: %.2f %%",resultadoPr);
	printf("Ignorados: %.2f %%",resultadoIg);
}

int main(){
    FILE* arq;
    char strlinha[1024];
    tregCovidES vet_covid[30000];
    int indice;

    arq = fopen("./microdadostarefa03.csv","rt");

    if(arq == NULL){
		printf("PROBLEMAS NA ABERTURA DO ARQUIVO!!\n");
		printf("CANCELANDO A EXECU????O!!\n");
	}

    else {
		indice = 0;
		fgets(strlinha,1024,arq);
		while(!feof(arq)){
			preenchecovid(vet_covid,indice,strlinha);
			indice++;

			fgets(strlinha,1024,arq);
		}

		printf("CONTE??DO DO VETOR DE COVID:\n");
		for(int k=0; k < indice; k++)
			printf("%d. %s, %s, %s, %s, %s, %s",k+1,vet_covid[k].dataDiagnostico,vet_covid[k].classificacao,vet_covid[k].municipio,vet_covid[k].bairro,vet_covid[k].sexo,vet_covid[k].cor);
		// contadorcovid(vet_covid,indice);
	}

    fclose(arq);

	printf("FIM!!");

  	return 0;
}
