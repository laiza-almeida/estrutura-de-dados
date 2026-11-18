#include <stdlib.h>
#include <stdio.h>

typedef struct reg {
   int         chave;
   int         conteudo;
   struct reg *esq, *dir; 
} noh;