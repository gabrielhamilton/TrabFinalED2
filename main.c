
#include "busca.h"

int main(){

    No* vetor = criarVetor();
    adicionarPalavras(vetor);
    ordenaVetor(vetor, 0, 261797);
    printf("Bem vindo ao dicionario de anagramas!\n");
    printf("Palavra:");
    char x[100];
    scanf("%s", x);
    char v[strlen(x)];
    strcpy(v, x);
    strlwr(v);
        int m = buscaPalavra(vetor, v, 261798);
        if (m == -1){
            printf("A palavra nao existe!\n");
        }
        else{
            int primeira = buscaPrimeiraPosicao(vetor, m);
            int verificador = verificaAnagramas(vetor, primeira);
            if(verificador == -1){
                printf("Nao existem anagramas!\n");
            }
            else{
                printf("Anagramas:\n");
                printaPalavras(vetor, primeira);
            }
        }
}
