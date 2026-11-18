#include <stdio.h>
#include <stdlib.h>

typedef struct binario {
    int info;
    struct binario *prox;
} Tbinario;

Tbinario *inicializa(void){
    return NULL;
}

Tbinario *insere(Tbinario *lista, int r){
    Tbinario *novo = (Tbinario*) malloc(sizeof(Tbinario));
    novo->info = r;
    novo->prox = lista;
    return novo;
}

Tbinario *resposta(int n){
    Tbinario *resp = inicializa();
    while (n > 0){
        resp = insere(resp, n % 2);
        n = n / 2;
    } 
    return resp;
}

void imprime(Tbinario *l){
     for (Tbinario *p = l; p != NULL; p = p->prox){
        printf("%d", p->info);
    }
}

int pergunta(){
    int n;
    printf("Digite o numero a ser convertido:");
    scanf("%d", &n);
    return n;
}

void libera(Tbinario *l){
    while (l != NULL){
        Tbinario *t = l->prox;
        free(l);
        l = t;
    }
}

int main(){
    int num = pergunta();
    while (num >= 0){
        Tbinario *resp = resposta(num);
        printf("Resposta: ");
        imprime(resp);
        printf("\n");
        libera(resp);
        num = pergunta();
    }

    return 0;
}