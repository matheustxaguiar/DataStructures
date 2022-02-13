#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

#define TAMAX 200

typedef struct TregCovidES {
  char diagnostico[14];
  char classificacao[13];
  char municipio[30];
  char bairro[30];
  char sexo[1];
  char racaCor[12];
} tregCovidES ;

typedef struct Classificacao{
  float brancos;
  float amarelos;
  float pretos;
  float indigenas;
  float pardos;
  float ignorados;
  float total;
} modeloClassificacao ;

modeloClassificacao confirmados = {
  .brancos = 0.0,
  .amarelos = 0.0,
  .pretos = 0.0,
  .indigenas = 0.0,
  .pardos = 0.0,
  .ignorados = 0.0,
  .total = 0.0
};

modeloClassificacao suspeitos = {
  .brancos = 0.0,
  .amarelos = 0.0,
  .pretos = 0.0,
  .indigenas = 0.0,
  .pardos = 0.0,
  .ignorados = 0.0,
  .total = 0.0
};

modeloClassificacao descartados = {
  .brancos = 0.0,
  .amarelos = 0.0,
  .pretos = 0.0,
  .indigenas = 0.0,
  .pardos = 0.0,
  .ignorados = 0.0,
  .total = 0.0
};


void selecao( tregCovidES pessoa ){

  if( strcmp(pessoa.classificacao , "Confirmados") == 0 ){
    confirmados.total += 1.0;

    if( strcmp(pessoa.racaCor, "Branca\n") == 0 )
      confirmados.brancos += 1.0;
    else if( strcmp(pessoa.racaCor, "Amarela\n") == 0 )
      confirmados.amarelos += 1.0;
    else if( strcmp(pessoa.racaCor, "Preta\n") == 0 )
      confirmados.pretos += 1.0;
    else if( strcmp(pessoa.racaCor, "Indigena\n") == 0 )
      confirmados.indigenas += 1.0;
    else if( strcmp(pessoa.racaCor, "Parda\n") == 0 )
      confirmados.pardos += 1.0;
    else if( strcmp(pessoa.racaCor, "Ignorado\n") == 0 )
      confirmados.ignorados += 1.0;

  } else if( strcmp(pessoa.classificacao , "Descartados") == 0 ){
    descartados.total += 1.0;

    if( strcmp(pessoa.racaCor, "Branca\n") == 0 )
      descartados.brancos += 1.0;
    else if( strcmp(pessoa.racaCor, "Amarela\n") == 0 )
      descartados.amarelos += 1.0;
    else if( strcmp(pessoa.racaCor, "Preta\n") == 0 )
      descartados.pretos += 1.0;
    else if( strcmp(pessoa.racaCor, "Indigena\n") == 0 )
      descartados.indigenas += 1.0;
    else if( strcmp(pessoa.racaCor, "Parda\n") == 0 )
      descartados.pardos += 1.0;
    else if( strcmp(pessoa.racaCor, "Ignorado\n") == 0 )
      descartados.ignorados += 1.0;
  }else if( strcmp(pessoa.classificacao , "Suspeito") == 0 ){      
    suspeitos.total += 1.0;
    if( strcmp(pessoa.racaCor, "Branca\n") == 0 )
      suspeitos.brancos += 1.0;
    else if( strcmp(pessoa.racaCor, "Amarela\n") == 0 )
      suspeitos.amarelos += 1.0;
    else if( strcmp(pessoa.racaCor, "Preta\n") == 0 )
      suspeitos.pretos += 1.0;
    else if( strcmp(pessoa.racaCor, "Indigena\n") == 0 )
      suspeitos.indigenas += 1.0;
    else if( strcmp(pessoa.racaCor, "Parda\n") == 0 )
      suspeitos.pardos += 1.0;
    else if( strcmp(pessoa.racaCor, "Ignorado\n") == 0 )
      suspeitos.ignorados += 1.0;
  }
}



int main(){
  tregCovidES dadosCovid[30000];

  FILE *arq;
  char *split;
  char buffer[TAMAX];
  int linha = 1;

  arq = fopen("microdados-stat-covid-19-tarefa01.csv", "r");


  while( !feof(arq) ){
    fgets(buffer, TAMAX, arq);
    split = strtok(buffer, ";");
    strcpy(dadosCovid[linha].diagnostico, split);

    int cont = 1;
    while( split != NULL ){
      if(cont == 1){
        cont++;
        continue;
      }
      split = strtok(NULL, ";");
      if (cont == 2){
        strcpy(dadosCovid[linha].classificacao, split);
      }
      if (cont == 3){
        strcpy(dadosCovid[linha].municipio, split);        
      }
      if (cont == 4){
        strcpy(dadosCovid[linha].bairro, split);
      }
      if (cont == 5){
        strcpy(dadosCovid[linha].sexo, split);
      }
      if (cont == 6){
        strcpy(dadosCovid[linha].racaCor, split);
      }
      cont++;
    }
    selecao(dadosCovid[linha]);
    linha++;    
  }

// FECHA ARQUIVO
  fclose(arq);

// REALIZA O PRINT DOS DADOS NA TELA
  printf("Classificacao: Confirmados\n");
  printf("Amarela: %.2lf%%\n", 100*(confirmados.amarelos/confirmados.total));
  printf("Branca: %.2lf%%\n", 100*(confirmados.brancos/confirmados.total));
  printf("Indigena: %.2lf%%\n", 100*(confirmados.indigenas/confirmados.total));
  printf("Parda: %.2lf%%\n", 100*(confirmados.pardos/confirmados.total));
  printf("Preta: %.2lf%%\n", 100*(confirmados.pretos/confirmados.total));
  printf("Ignorados: %.2lf%%\n", 100*(confirmados.ignorados/confirmados.total));
  printf("\n");
  printf("Classificacao: Descartados\n");
  printf("Amarela: %.2lf%%\n", 100*(descartados.amarelos/descartados.total));
  printf("Branca: %.2lf%%\n", 100*(descartados.brancos/descartados.total));
  printf("Indigena: %.2lf%%\n", 100*(descartados.indigenas/descartados.total));
  printf("Parda: %.2lf%%\n", 100*(descartados.pardos/descartados.total));
  printf("Preta: %.2lf%%\n", 100*(descartados.pretos/descartados.total));
  printf("Ignorados: %.2lf%%\n", 100*(descartados.ignorados/descartados.total));
  printf("\n");
  printf("Classificacao: Suspeitos\n");
  printf("Amarela: %.2lf%%\n", 100*(suspeitos.amarelos/suspeitos.total));
  printf("Branca: %.2lf%%\n", 100*(suspeitos.brancos/suspeitos.total));
  printf("Indigena: %.2lf%%\n", 100*(suspeitos.indigenas/suspeitos.total));
  printf("Parda: %.2lf%%\n", 100*(suspeitos.pardos/suspeitos.total));
  printf("Preta: %.2lf%%\n", 100*(suspeitos.pretos/suspeitos.total));
  printf("Ignorados: %.2lf%%\n", 100*(suspeitos.ignorados/suspeitos.total));
  printf("\n");
  return 0;
}
