#include <stdio.h>
#define TAM_MAX 10

typedef struct contato
{
	char nome[100], apelido[50], ultimaConversa[12];

}Contato;


typedef struct _lista {
	Contato vetor[TAM_MAX];
	int final;
} Lista;

Lista l;
Contato c;

void inserir(Contato c, int posicao);
void imprimir();
Contato remover(int posicao);
void inicializar();
int verificarVazia();
int verificarCheia();