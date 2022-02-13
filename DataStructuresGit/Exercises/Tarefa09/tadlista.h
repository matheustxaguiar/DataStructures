/*
 * tadlista.h
 *
 *  Created on: 25 de nov. de 2021
 *      Author: ernani
 */

#ifndef TADLISTA_H_
#define TADLISTA_H_

typedef void *tdado;


typedef struct tno {
	tdado dado;
  tdado placa;
  tdado modelo;
  tdado marca;
  tdado quilometragem;
	struct tno *proximo;
  struct tno *anterior;
} tipoNo;


typedef tipoNo *pnoh;



typedef struct {
	int tamanho;
	pnoh primeiro;
	pnoh ultimo;
} tcabec;


typedef tcabec *TLista;

TLista criaLista();
TLista appendLista(TLista lst, tdado placa, tdado modelo, tdado marca, tdado quilometragem);
TLista insertLista(TLista lst,int i, tdado dado);
tdado removeLista(TLista lst,int i);
int lenLista(TLista lst);
tdado dadoLista(TLista lst, int i);
tdado infoLista(TLista lst, int i);
int indexLista(TLista lst, tdado dado);
TLista clearLista(TLista lst);
tdado primLista(TLista lst);
tdado ultLista(TLista lst);

#endif /* TADLISTA_H_ */
