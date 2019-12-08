//#ifdef LISTAPALAVRAS_H
//#define LISTAPALAVRAS_H

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
                memset(vetor[i].palavraOrdenada, 0, 100);
        } 
        return vetor;
} 

void adicionarPalavras(No *vetor){
        
        char buffer[100];
        int i=0;
        FILE *dados = fopen("brTeste.txt", "r");
        if(dados == NULL){
                printf("Arquivo não pode ser aberto.");
        }
        while (!feof(dados))
        {
                fgets(buffer, 100, dados);
                int j=0;
                while(buffer[j] != '\n'){
                  j++;
                }
                buffer[j] = '\0';
                strcpy(vetor[i].palavra, buffer);
                //adicionar palavra ordenado.
                strcpy(vetor[i].palavraOrdenada, buffer);
                ordenaPalavra(vetor[i].palavraOrdenada, strlen(vetor[i].palavraOrdenada));
                i++;
        }

        fclose(dados);
        
}
//#endif

