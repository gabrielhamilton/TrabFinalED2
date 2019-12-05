#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estrutura.h"
#include "ordenacoes.h"

//prototipos
No* criarVetor();
void adicionarPalavras(); 

//funções

No* criarVetor(){
        int i=0,tam =261798;
        No* vetor = (No*)malloc(tam*sizeof(No));
        for(i; i<261798;i++){
                memset(vetor[i].palavra, 0, 100);
                memset(vetor[i].palavraOrdenada,0,100);
        } 
        return vetor;
} 

void adicionarPalavras(No *vetor){
        
        char buffer[100];
        int i;
        FILE *dados = fopen("br.txt", "r");
        if(dados==NULL){
                printf("Arquivo não pode ser aberto.");
        }
        while (!feof(dados))
        {
                fgets(buffer,100,dados);
                strcpy(vetor[i].palavra,buffer);
                //adicionar palavra ordenado.
                strcpy(vetor[i].palavraOrdenada, ordenaPalavra(buffer, strlen(buffer)));
        }

        fclose(dados);
}


