#include <stdio.h>
#include <stdlib.h>

void push(float numero);
float pop();
void imprimir();
float verificarVazia();
void inicializar();

typedef struct no {
	float dado;
	struct no *anterior;
} No;

typedef struct pilha {
	No *topo;
} Pilha;

Pilha p;
