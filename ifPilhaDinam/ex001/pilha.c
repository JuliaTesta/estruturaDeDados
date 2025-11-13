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

void push(int numero){
	No *noNovo = (No *)malloc(sizeof(No));
	if(noNovo != NULL){
		if(p.topo == NULL || numero > p.topo->dado){
			noNovo->dado = numero;
			noNovo->anterior = p.topo;
			p.topo = noNovo;
		} else {
			printf("Numero inserido deve ser maior do que o anterior.\n");
		}
	}
}

int pop(){
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
			printf("%d\n", aux->dado);
			aux = aux->anterior;
		}
	}
}