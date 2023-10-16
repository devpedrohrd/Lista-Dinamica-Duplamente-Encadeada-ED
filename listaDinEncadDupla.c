/*
Definir:
-O tipo de dados "Lista"
-Implementar as funções
*/

#include <stdio.h>  //Biblioteca para entrada e saída do usuário
#include <stdlib.h> //Biblioteca padrão da linguagem C
#include "listaDinEncadDupla.h"

Lista *cria_lista()
{
    Elem *li = (Lista *)malloc(sizeof(Elem)); // Aloca dinamicamente espaço na memoria
    if (li != NULL)
    {
        li->ant = NULL;
        li->prox = NULL;
    }
    return li;
}

int tamanho_lista(Lista *li)
{
    if (li == NULL)
        return 0;

    int cont = 0;
    Elem *no = *li;

    while (no != NULL)
    {
        cont++;
        no = no->prox;
    }
    return cont;
}