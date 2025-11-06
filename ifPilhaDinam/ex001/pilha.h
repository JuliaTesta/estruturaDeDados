#include <stdio.h>

typedef struct no
{
	int dado;
	struct no *anterior;
}No;

typedef struct pilha {
	No *topo;
} Pilha;

Pilha p;

void push(int numero);
int pop();
void imprimir();
int verificarVazia();
void inicializar();