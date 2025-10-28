#include <stdio.h>
#define TAM_MAX 10

typedef struct _lista {
	int vetor[TAM_MAX];
	int final;
} Lista;

Lista l;

void inserir(int numero, int posicao);
void imprimir();
int remover(int posicao);
void inicializar();
int verificarVazia();
int verificarCheia();
void soma();