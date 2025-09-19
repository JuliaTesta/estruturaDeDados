#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 10

void inserir(char caracter);
void inicializar();
int verificarVazia();
int verificarCheia();
void imprimir();
int remover();

typedef struct _fila {
	char vetor[TAM_MAX];
	int final;
} Fila;

Fila f;