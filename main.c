#include "lista.h"
#include <stdio.h>

int main(){
    LISTA l;
    char x;
    cria_lista(&l);
    
    for(int i=0;i<10;i++){
        x = i+65;
        insere_comeco(&l, x);
    }
     
    return 0;
}
