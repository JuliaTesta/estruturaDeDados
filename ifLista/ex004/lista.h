#include <stdio.h>
#define TAM_MAX 10

typedef struct _lista {
	float vetor[TAM_MAX];
	int final;
} Lista;

Lista l;

void inserir(float numero, int posicao);
void imprimir();
float remover(int posicao);
void inicializar();
int verificarVazia();
int verificarCheia();
void excluirMaiores(int numero);