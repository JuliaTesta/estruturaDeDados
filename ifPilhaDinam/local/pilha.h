#include <stdio.h>

typedef struct no
{
	int dado;
	struct no *anterior;
}No;

typedef struct pilha {
	No *topo;
} Pilha;

void push(int numero, Pilha *p);
int pop(Pilha *p);
void imprimir(Pilha p);
int verificarVazia(Pilha p);
void inicializar(Pilha *p);