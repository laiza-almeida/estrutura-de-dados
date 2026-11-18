#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Quantos numeros a sua sequencia vai ter?");
    scanf("%d", &n);

    int *lista = (int*)malloc(n * sizeof(int));

    if (lista == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        int num;
        printf("Digite um numero:");
        scanf("%d", &num);
        lista[i] = num;
    }

    int cres = 1;
    int maior_seq = 1;
    for (int i = 0; i < n-1; i++) {
        if (lista[i] < lista[i + 1]) {
            cres++;
        } else {
            if (cres > maior_seq) {
                maior_seq = cres;
            }
            cres = 1;
        }
    }
    
    if (cres > maior_seq) {
        maior_seq = cres;
    }
    
    printf("A maior sequencia crescente tem %d elementos.\n", maior_seq);
    free(lista);
    return 0;
}