#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
	int dado;
	struct no *proximo;
}No;

typedef struct _fila {
	No *inicio;
	No *final;
} Fila;

void inserir(int numero, Fila *f);
void inicializar( Fila *f);
int verificarVazia( Fila f);
void imprimir( Fila f);
int remover( Fila *f);

