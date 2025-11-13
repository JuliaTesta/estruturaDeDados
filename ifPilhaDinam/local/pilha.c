#include <stdio.h>
#include "pilha.h"
#include <stdlib.h>

void inicializar(Pilha *p){
	p->topo = NULL;
}

int verificarVazia(Pilha p){
	if(p.topo == NULL)
		return 1;
	else return 0;
}

void push(int numero, Pilha *p){
	No *noNovo = (No *)malloc(sizeof(No));
	if(noNovo != NULL){
		noNovo->dado = numero;
		noNovo->anterior = p->topo;
		p->topo = noNovo;
	}
}

int pop(Pilha *p){
	if(!verificarVazia(*p)){
		No *aux;
		int dado;

		aux = p->topo;
		dado = p->topo->dado;
		p->topo = aux->anterior;

		free(aux);
		return dado;
	} else {
		printf("Pilha vazia.\n");
	}
}

void imprimir(Pilha p){
	if(!verificarVazia(p)){
		No *aux;
		aux = p.topo;

		while(aux != NULL){
			printf("%d\n", aux->dado);
			aux = aux->anterior;
		}
	}
}