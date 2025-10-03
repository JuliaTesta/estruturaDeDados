#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 10

void inserir(int numero);
void inicializar();
int verificarVazia();
int verificarCheia();
void imprimir();
int remover();
int primeiroPar(int numero);

typedef struct _fila {
	int vetor[TAM_MAX];
	int final;
} Fila;

Fila f;