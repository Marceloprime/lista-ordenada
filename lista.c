#include "lista.h"

void cria_lista(LISTA *l){
    //inicializacao do vector;
    l->inicio = -1;
    l->fim = -1;
    l->vazio = 0;
    //Encadeamento do  vector;
    for(int i = 0;i < MAX-1;i++){
        l->vector[i].prox = i+1;
    }
    l->vector[MAX-1].prox = -1;
}

int lista_vazia(LISTA *l){
    return (l->inicio == -1);
}

int lista_cheia(LISTA *l){
    return (l->vazio == -1);
}

/*Verificar se ha posicoes disponiveis no vector*/
int meu_malloc(LISTA *l) {
    int aux;
    if (l->vazio == -1){
        return -1; // erro; memoria cheia, a posicao do vazio eh a ultima
    }    
    aux = l->vazio;
    l->vazio = l->vector[l->vazio].prox;
    
    return aux;
}

int insere_comeco(LISTA *l, char x){
    int aux = meu_malloc(l);
    if (aux == -1)
        return 1; // erro; lista cheia
    l->vector[aux].infor = x; // copia info
    l->vector[aux].prox = l->inicio;
    l->inicio = aux;
    if (l->fim == -1)
        l->fim = aux;
    return 0; // sucesso
}


