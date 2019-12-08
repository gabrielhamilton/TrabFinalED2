#include "listaPalavras.h"

int buscaPalavra(No *vetor,  char *x, int n){ 
        int l = 0 ; 
        int r = n - 1; 
        while (l <= r)  
        { 
            int m = l + (r - l) / 2; 
        ordenaPalavra(x, strlen(x));
            // Check if x is present at mid 
        if ((strcmp(x, vetor[m].palavraOrdenada) == 0)) 
            return m; 
  
            // If x greater, ignore left half 
        if ((strcmp(x, vetor[m].palavraOrdenada) > 0)) 
            l = m + 1; 
  
            // If x is smaller, ignore right half 
        else
            r = m - 1; 
    } 
    return -1;
} 
    int buscaPrimeiraPosicao(No *vetor, int pos){
        
        while(strcmp(vetor[pos].palavraOrdenada, vetor[pos-1].palavraOrdenada) == 0){
            
            if(pos-1 == 0){
                return pos;
            }
            pos--;
        }
        return pos;
    }
    int verificaAnagramas(No *vetor, int i){
        int contador = 0;
        while(strcmp(vetor[i].palavraOrdenada, vetor[i+1].palavraOrdenada) == 0){
            i++;
            contador++;
        }
        if (contador == 0)
            return -1;
        else
            return 1;
    }
    
    void printaPalavras(No *vetor, int i){
        
        while(strcmp(vetor[i].palavraOrdenada, vetor[i+1].palavraOrdenada) == 0){
            printf("%s\n", vetor[i].palavra);
            i++;
        }
        printf("%s\n", vetor[i].palavra);
    }
        