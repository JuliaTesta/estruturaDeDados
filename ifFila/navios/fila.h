#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 10

typedef struct navio
{
	char nome[21];
	char origem[51];
	float peso;

}Navio;


typedef struct _fila {
	Navio vetor[TAM_MAX];
	int final;
} Fila;

Fila f;
Navio n;

void inserir(Navio navio);
void inicializar();
int verificarVazia();
int verificarCheia();
void imprimir();
Navio remover();
