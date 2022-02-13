/*
 * TADlista.h
 *
 *  Created on: 25 de nov. de 2021
 *      Author: Matheus
 */

#ifndef TADLISTA_H_
#define TADLISTA_H_

typedef void *tdado;

typedef struct tno{
	tdado dado;
	struct tno *proximo;
}tipoNo;


typedef tipoNo *pnoh;


typedef struct{
	int tamanho;
	pnoh primeiro;
	pnoh ultimo;

} tcabec;


typedef tcabec *TLista;


#endif /* TADLISTA_H_ */
