#include <stdio.h>
#define TAM_MAX 10

typedef struct pilha {
	char vetor[TAM_MAX];
	int topo;
} Pilha;

Pilha p;

void push(char c);
char pop();
void imprimir();
int verificarCheia();
int verificarVazia();
void inicializar();