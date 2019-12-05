#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estrutura.h"

void ordenaPalavra(char *palavra, int n){ 
    
    char temp; 
  
    for (int j = 0 ; j < n - 1 ; j++){ 
        for (int i = j + 1 ; i < n ; i++){ 
            if (palavra[j] > palavra[i]){
                temp = palavra[j]; 
                palavra[j] = palavra[i]; 
                palavra[i] = temp; 
            } 
        } 
    } 
} 
void troca(No *vetor, int i, int j){
    
    char temp[100];
    memcpy(temp, &vetor[j], sizeof(No)); 
    memcpy(&vetor[j], &vetor[i], sizeof(No)); 
    memcpy(&vetor[i], temp, sizeof(No));
}
int partition(No *vetor, int posInicial, int posFinal){
    
    int pivo = posFinal;
    int i = posInicial-1;
    for (int j = posInicial ; j <= posFinal - 1 ; j++){
        if (strcmp(vetor[j].palavraOrdenada, vetor[pivo] <= 0)){
            i += 1;
            troca(vetor, i, j);
        }
    } 
    troca(vetor, i+1, r);
    return i+1;
}
void ordenaVetor(No *vetor, int posIncial, int posFinal){
    
    if posInicial < posFinal{
        int q;
        q = partition( vetor, posInicial, posFinal);
        ordenaVetor( vetor, posInicial, q-1);
        ordenaVetor( vetor, q+1, posFinal);
    }
}

