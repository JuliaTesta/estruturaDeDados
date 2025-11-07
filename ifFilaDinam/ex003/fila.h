#include <stdio.h>
#include <stdlib.h>

typedef struct carrinho{
	int cod;
	int itens;
	float valor;
}Carrinho;

typedef struct no
{
	Carrinho dado;
	struct no *proximo;
}No;

typedef struct _fila {
	No *inicio;
	No *final;
} Fila;

Fila f;

void inserir(Carrinho c);
void inicializar();
int verificarVazia();
void imprimir();
Carrinho remover();

