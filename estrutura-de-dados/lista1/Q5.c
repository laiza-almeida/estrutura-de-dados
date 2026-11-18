//Escreva uma função que receba duas Listas (L1 e L2), intercale-as gerando uma terceira Lista, L3

#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int info;
    struct lista *prox;

} Tlista;

Tlista *inicializa(void){
    return NULL;
}

Tlista *insere_fim(Tlista *lista, int n){
    if (lista == NULL){ //lista vazia, inserção = primeiro elemento
        Tlista *novo = (Tlista*) malloc(sizeof(Tlista));
        novo->info = n;
        novo->prox = NULL;
        return novo;
    }  
    
    lista->prox = insere_fim(lista->prox, n);   //segue para o proximo até achar o fim para inserir o elemento novo
    return lista;
}

Tlista *intercala(Tlista *l1, Tlista *l2){
    Tlista *l3 = NULL;
    Tlista *p1 = l1, *p2 = l2;

    while (p1 != NULL || p2 != NULL){
        if (p1 != NULL){
            l3 = insere_fim(l3, p1->info);
            p1 = p1->prox;
        }
        if (p2 != NULL){
            l3 = insere_fim(l3, p2->info);
            p2 = p2->prox;
        }
    }
    return l3;
}

void imprime(Tlista *lista){
    for (Tlista *p = lista; p != NULL; p = p->prox){
        printf("%d\n", p->info);
    }
}

int main(){
    Tlista *lista1 = inicializa();
    Tlista *lista2 = inicializa();

    lista1 = insere_fim(lista1, 1);
    lista1 = insere_fim(lista1, 3);
    lista1 = insere_fim(lista1, 5);
    lista1 = insere_fim(lista1, 7);
    lista2 = insere_fim(lista2, 2);
    lista2 = insere_fim(lista2, 4);
    lista2 = insere_fim(lista2, 6);

    Tlista *lista3 = intercala(lista1,lista2);
    
    printf("Lista 1:\n");
    imprime(lista1);
    printf("Lista 2:\n");
    imprime(lista2);
    printf("Lista 3:\n");
    imprime(lista3);

    return 0;
}