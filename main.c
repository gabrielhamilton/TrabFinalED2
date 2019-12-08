
#include "listaPalavras.h"

int main(){

    No* vetor = criarVetor();
    adicionarPalavras(vetor);
    ordenaVetor(vetor, 0, 3);
    for( int i=0; i<=10; i++){
        printf("%d : palavra: %s, palavra ordenada: %s\n", i, vetor[i].palavra, vetor[i].palavraOrdenada);
    }
}
