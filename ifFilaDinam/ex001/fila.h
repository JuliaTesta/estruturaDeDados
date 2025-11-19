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

Fila f;

void inserir(int numero);
void inicializar();
int verificarVazia();
void imprimir();
int remover();
int crescente();
