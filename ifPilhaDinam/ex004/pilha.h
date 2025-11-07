#include <stdio.h>

typedef struct caixa
{
	int cod;
	int peso;
}Caixa;

typedef struct no
{
	Caixa dado;
	struct no *anterior;
}No;

typedef struct pilha {
	No  *topo;
} Pilha;

Pilha p;

void push(Caixa c);
Caixa pop();
void imprimir();
int verificarVazia();
void inicializar();
int somaPilha();