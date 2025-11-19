#define TAM_MAX 5

#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int dado; 
    struct no *proximo;
}No;


typedef struct lista
{
    No *inicio;
    No *final;
}Lista;

void inserir(int numero, int posicao, Lista *l);
int remover(int posicao, Lista *l);
void imprimir(Lista l);
void inicializar(Lista *l);
int verificarVazia(Lista l);
