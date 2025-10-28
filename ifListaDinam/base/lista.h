#include <stdio.h>
#define TAM_MAX 10

typedef struct _lista {
	int vetor[TAM_MAX];
	int final;
} Lista;

void inserir(int numero, int posicao, Lista *l);
void imprimir(Lista l);
int remover(int posicao, Lista *l);
void inicializar(Lista *l);
int verificarVazia(Lista l);
int verificarCheia(Lista l);