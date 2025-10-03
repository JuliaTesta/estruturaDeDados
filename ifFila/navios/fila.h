#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 10

typedef struct navio{
	char nome[51], origem[16];
	float peso;
}Navio;

typedef struct _fila {
	Navio vetor[TAM_MAX];
	int final;
} Fila;

Fila f;
Navio n;

void inserir(Navio n);
void inicializar();
int verificarVazia();
int verificarCheia();
void imprimir();
Navio remover();

