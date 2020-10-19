
#include <stdlib.h>
#include <stdio.h>

#define MAX 10

typedef struct{
    char infor;
    int prox;
}ELEM;

typedef struct{
    int inicio,fim,vazio;
    ELEM vector[MAX];
}LISTA;



void cria_lista(LISTA *l);
int lista_vazia(LISTA *l);
int lista_cheia(LISTA *l);
int meu_malloc(LISTA *l);
int insere_comeco(LISTA *l, char x);