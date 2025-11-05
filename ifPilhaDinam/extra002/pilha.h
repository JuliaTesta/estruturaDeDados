#include <stdio.h>
#define TAM_MAX 10

typedef struct pilha {
	int vetor[TAM_MAX];
	int topo;
} pilha;

void push(int numero, pilha *p);
int pop(pilha *p);
void imprimir(pilha p);
int verificarCheia(pilha p);
int verificarVazia(pilha p);
void inicializar(pilha *p);