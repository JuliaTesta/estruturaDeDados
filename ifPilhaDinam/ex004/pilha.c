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

	if(!repetido(numero)){
		//Só aloca memória se nao for repetido
	No *noNovo = (No *)malloc(sizeof(No));
	if(noNovo != NULL){
			noNovo->dado = numero;
			noNovo->anterior = p.topo;
			p.topo = noNovo;
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

int repetido(int numero){
	No *aux; 
	aux = p.topo;

	while(aux != NULL){
		if(aux->dado == numero){
			printf("Numero ja foi inserido.\n");
			return 1;
		}
		aux = aux->anterior;
	}
	return 0;
}