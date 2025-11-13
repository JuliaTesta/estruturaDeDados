#include <stdio.h>

typedef struct no {
	char dado;
	struct no *anterior;
}No;

typedef struct pilha {
	No *topo;
} Pilha;

Pilha p;

void push(char c);
char pop();
void imprimir();
int verificarVazia();
void inicializar();