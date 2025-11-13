#include <stdio.h>
#include "pilha.h"
#include <stdlib.h>

void inicializar(){
	p.topo = NULL;
}

int verificarVazia(){
	if(p.topo == NULL)
		return 1;
	else return 0;
}

void push(char c){
	No *noNovo = (No *)malloc(sizeof(No));
	if(noNovo != NULL){
		noNovo->dado = c;
		noNovo->anterior = p.topo;
		p.topo = noNovo;
	}
}

char pop(){
	if(!verificarVazia()){
		No *aux;
		int dado;

		aux = p.topo;
		dado = p.topo->dado;
		p.topo = aux->anterior;

		free(aux);
		return dado;
	} else {
		printf("Pilha vazia.\n");
	}
}

void imprimir(){
	if(!verificarVazia()){
		No *aux;
		aux = p.topo;

		while(aux != NULL){
			printf("%c\n", aux->dado);
			aux = aux->anterior;
		}
	}
}