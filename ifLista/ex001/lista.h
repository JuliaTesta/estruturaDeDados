#include <stdio.h>
#define TAM_MAX 10

typedef struct _lista {
	char vetor[TAM_MAX];
	int final;
} Lista;

Lista l;

void inserir(char c, int posicao);
void imprimir();
char remover(int posicao);
void inicializar();
int verificarVazia();
int verificarCheia();