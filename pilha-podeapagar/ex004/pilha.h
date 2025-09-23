#include <stdio.h>
#define TAM_MAX 10

typedef struct pilha {
	int vetor[TAM_MAX];
	int topo;
} Pilha;

Pilha p;

void push(int numero);
int pop();
void imprimir();
int verificarCheia();
int verificarVazia();
void inicializar();
