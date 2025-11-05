#include <stdio.h>

typedef struct no {
	float dado;
	struct no *anterior;
}No;

typedef struct pilha {
	No *topo;
} Pilha;

Pilha p;

void push(float numero);
float pop();
void imprimir();
int verificarVazia();
void inicializar();