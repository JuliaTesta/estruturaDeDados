#include <stdio.h>

typedef struct no
{
	int dado;
	struct no *proximo;
}No;

typedef struct _lista {
	No *inicio;
	No *final;
} Lista;

Lista l;

void inserir(int numero, int posicao);
void imprimir();
int remover(int posicao);
void inicializar();
int verificarVazia();
