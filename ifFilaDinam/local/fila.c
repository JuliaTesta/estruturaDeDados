#include "fila.h"
#include <stdio.h>

void inicializar(Fila *f){
	f->final = NULL;
}

int verificarVazia(Fila f){
	if(f.final == NULL)
		return 1;
	else return 0;
}

void inserir(int numero,Fila *f){
	No *novoNo = (No *)malloc(sizeof(No));
	if(novoNo != NULL){
		novoNo->dado = numero;
		novoNo->proximo = NULL;

		if(verificarVazia(*f)){
			f->inicio = novoNo;
		} else {
			f->final->proximo = novoNo;
		}
		f->final = novoNo;
	} else {
		printf("Nao ha mais memoria disponivel.\n");
	}
}

void imprimir(Fila f){
	if(!verificarVazia(f)){
		No *aux;
		aux = f.inicio;

		while(aux != NULL){
			printf("%d ", aux->dado);
			aux = aux->proximo;
		}
	}
}

int remover(Fila *f) {
	if(!verificarVazia(*f)){
		No *aux;
		int dado;

		aux = f->inicio;
		dado = f->inicio->dado;
		f->inicio = aux->proximo;

		if(f->inicio == NULL){
			f->final = NULL;
		}
		free(aux);
		return dado;
	} else {
		printf("Fila vazia.\n");
	}
}