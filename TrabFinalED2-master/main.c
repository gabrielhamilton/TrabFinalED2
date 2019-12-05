#include <stdio.h>
#include "ordenacoes.h"
#include "listaPalavras.h"

int main(){

    No* vetor = criarVetor();
    adicionarPalavras(vetor);
    for( int i=0; i<=10; i++){
        printf("%d : palavra: %s, palavra ordenada: %s\n", i, vetor[i]->palavra, vetor[i]->palavraOrdenada);
    }
}