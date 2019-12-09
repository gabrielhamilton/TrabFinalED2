#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estrutura.h"
//#include "ordenacoes.h"

//prototipos
No *criar_vetor();
void adicionar_palavras();

//funções

No *criar_vetor()
{
        int i = 0, tam = 261798;
        No *vetor = (No *)malloc(tam * sizeof(No));
        for (i; i < 261798; i++)
        {
                memset(vetor[i].palavra, 0, 100);
                memset(vetor[i].palavraOrdenada, 0, 100);
        }
        return vetor;
}

void adicionar_palavra(No *vetor)
{

        char buffer[100];
        int i;
        FILE *dados = fopen("br.txt", "r");
        if (dados == NULL)
        {
                printf("Arquivo não pode ser aberto.");
        }
        while (!feof(dados))
        {
                fgets(buffer, 100, dados);
                strcpy(vetor[i].palavra, buffer);
                //adicionar palavra ordenado.
        }
        fclose(dados);
}
