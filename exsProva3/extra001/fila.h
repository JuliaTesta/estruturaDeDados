#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 10

typedef struct _fila {
	int vetor[TAM_MAX];
	int final;
} Fila;


void inserir(int numero, Fila *f);
void inicializar(Fila *f);
int verificarVazia(Fila f);
int verificarCheia(Fila f);
void imprimir(Fila f);
int remover(Fila *f);



