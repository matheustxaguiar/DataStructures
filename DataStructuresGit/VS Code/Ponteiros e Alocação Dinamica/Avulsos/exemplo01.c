#include <stdio.h>
#include <string.h>

// Criando struct de endereco.

typedef char string256[256];  //Criando um padrao de string com typedef

typedef struct endereco{
    int num;
    int cep;
    string256 rua;
    string256 bairro;
} endereco;

int main()
{
    endereco residencial; // Criando um struct para residencial usando typedef
    endereco *ptr;  // Criando ponteiro do tipo struct

    residencial.num = 533;
    residencial.cep = 28456029;
    strcpy(residencial.rua, "Das gracas");
    strcpy(residencial.bairro, "Campo limpo");

    ptr = &residencial;

    printf("via struct:  num:%d | cep:%d | rua:%s | bairro:%s\n", residencial.num, residencial.cep, residencial.rua, residencial.bairro);
    printf("via *ptr:  num:%d | cep:%d | rua:%s | bairro:%s\n", (*ptr).num, (*ptr).cep, (*ptr).rua, (*ptr).bairro);
    printf("via *ptr:  num:%d | cep:%d | rua:%s | bairro:%s\n", ptr->num, ptr->cep, ptr->rua, ptr->bairro);


    return 0;
}
