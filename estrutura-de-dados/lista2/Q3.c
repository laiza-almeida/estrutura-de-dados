#include "nodaarvore.h"
#include <stdio.h>
#include <stdlib.h>

noh *cria(int chave){
    noh *novo = (noh*) malloc(sizeof(noh));
    novo->chave = chave;
    novo->conteudo = 0;
    novo->esq = NULL;
    novo->dir = NULL;
    return novo;
}

/* noh* busca(noh *no, int chave) {
noh *aux = no;
while (aux != NULL) {
if (aux->chave == chave ) return aux; //achou retorna o ponteiro para o nó
else
if (aux->chave > chave)
aux = aux->esq;
else
aux = aux->dir;

}
return NULL; //não achou, retorna null
}

int main(){
    noh *a = cria(5);
    a->esq = cria(2);
    a->dir = cria(8);
    a->dir->esq = cria(6);

    if (ehBusca(a)){
        printf("Eh arvore de busca");
    } else printf("Nao eh arvore de busca...");
    return 0;
}
*/