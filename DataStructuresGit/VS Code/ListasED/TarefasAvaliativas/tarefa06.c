#include <stdio.h>
#include <stdlib.h>


struct noh
{
    int data;
    int len;
    struct noh *anterior;
    struct noh *prox;
} noh;

// Funcao que retorna numeros primos
int calculaprimo(int num, int cont){
    for(int i=1; i<=num; i++){
            if (num%i == 0){
                cont++;
            }
        }
        if (cont == 2){
            return num;  
        }
  return 0;
}


int main()
{   
    struct noh *p, *aux, *ant;
    int num, cont = 0, len = 1, primo;

    p = (struct noh *)malloc(sizeof(struct noh));
    aux = p;
    aux->anterior = NULL;

    for (int k = 3; k <= 7; k++){
        int num = k, cont = 0;
        primo = calculaprimo(num, cont);
        if (primo != 0){
          aux->data = primo;
          aux->len = len;
          ant = aux;
          aux->prox = (struct noh *)malloc(sizeof(struct noh));
          aux = aux->prox;
          aux->anterior = ant;
          len++;
          }
    }
    aux->prox = NULL;
    aux = p;

    // Trecho que calcula o tamanho da lista.
    int tam;
    if (p == NULL){
        tam = 0;
    }else{
        tam = 1;
        while(aux->prox != NULL){
          tam++;
          aux = aux->prox;
        }
    }

    // Trecho que limpa a lista de tras para frente
    while (ant->anterior){
        free(aux);
        aux = ant;
        ant = ant->anterior;
        if (ant->anterior == NULL){
            free(aux);
          }
    }
    
    
    // Repadronizacao dos ponteiros
    ant = NULL;
    free(p);
    p = NULL;
    aux = NULL;

    printf("-----> Tamanho da lista: %d\n-----> Quantidade de Nos: %d.\n\n\n", tam, tam);

 return 0;
}
