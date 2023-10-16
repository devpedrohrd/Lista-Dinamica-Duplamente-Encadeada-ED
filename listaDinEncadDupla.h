/*
Definir:
-Prototipos das funções
-Ponteiro "Lista
-Tipo de dado armazenado na lista"
*/
#ifndef LISTA_H
#define LISTA_H

struct aluno // definição da struct aluno
{
    int matricula;
    char nome[30];
    float n1, n2, n3;
};

struct elemento // definição da struct elemento
{
    struct aluno dados;
    struct elemento *ant;
    struct elemento *prox;
};

typedef struct elemento *Lista;
typedef struct elemento Elem;

Lista *cria_lista(); // Função que cria a lista

int tamanho_lista(Lista *li); // Função que retorna o tamanho da lista

#endif
