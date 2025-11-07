#include <stdio.h>
#include <stdlib.h>

typedef struct no {
	char dado;
	struct no *proximo;
}No;


typedef struct _fila {
	No *inicio;
	No *final;
} Fila;

Fila f;

void inserir(char c);
void inicializar();
int verificarVazia();
void imprimir();
char remover();
