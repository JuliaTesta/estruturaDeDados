#include <stdio.h>
#define TAM_MAX 10

typedef struct pilha {
	int vetor[TAM_MAX];
	int topo;
} Pilha;


void push(int numero, Pilha *p);
int pop(Pilha *p);
void imprimir(Pilha p);
int verificarCheia(Pilha p);
int verificarVazia(Pilha p);
void inicializar(Pilha *p);