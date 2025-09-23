#include <stdio.h>
#define TAM_MAX 10

typedef struct roupa {
	char modelo[51], cor[16], tamanho;
}Roupa;

typedef struct pilha {
	Roupa vetor[TAM_MAX];
	int topo;
} Pilha;

Pilha p;
Roupa r;

void push(Roupa r);
Roupa pop();
void imprimir();
int verificarCheia();
int verificarVazia();
void inicializar();