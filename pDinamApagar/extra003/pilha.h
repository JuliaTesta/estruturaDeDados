#include <stdio.h>

typedef struct disco{
	char cor[21];
	int diam;
	float peso;
}Disco;

typedef struct no {
	Disco dado;
	struct no *anterior;
}No;

typedef struct pilha {
	No *topo;
} Pilha;

Pilha p;

void push(Disco d);
Disco pop();
void imprimir();
int verificarVazia();
void inicializar();