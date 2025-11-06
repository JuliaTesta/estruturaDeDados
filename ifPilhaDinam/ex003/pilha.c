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

void push(Disco d){
	No *noNovo = (No *)malloc(sizeof(No));
	if(noNovo != NULL){
		noNovo->dado = d;
		noNovo->anterior = p.topo;
		p.topo = noNovo;
	} else {
		printf("Memoria indisponivel");
	}
}

Disco pop(){
	if(!verificarVazia()){
		No *aux;
		Disco dado;

		aux = p.topo;
		dado = aux->dado;
		p.topo = aux->anterior;
		free(aux);
		return dado;
	} else {
		printf ("A pilha esta vazia.\n");
	}
}

void imprimir(){
	if(!verificarVazia()){
		No *aux;
		aux = p.topo;

		while(aux != NULL){
			printf("Cor: %s Diametro: %d Peso: %f\n", aux->dado.cor, aux->dado.diam, aux->dado.peso);
			aux = aux->anterior;
		}
	} else {
		printf("Pilha vazia.\n");
	}
}