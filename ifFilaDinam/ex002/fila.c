#include "fila.h"
#include <stdio.h>

void inicializar(){
	f.final = NULL;
}

int verificarVazia(){
	if(f.final == NULL)
		return 1;
	else return 0;
}

void inserir(int numero){
	if(repetido(numero)){
		printf("Esse numero ja existe. Tente Novamente.\n");
		return;
	}
	No *novoNo = (No *)malloc(sizeof(No));
	if(novoNo != NULL){
		
		novoNo->dado = numero;
		novoNo->proximo = NULL;

		if(verificarVazia()){
			f.inicio = novoNo;
		} else {
			f.final->proximo = novoNo;
		}
		f.final = novoNo;
	} else {
		printf("Nao ha mais memoria disponivel.\n");
	}
}

void imprimir(){
	if(!verificarVazia()){
		No *aux;
		aux = f.inicio;

		while(aux != NULL){
			printf("%d ", aux->dado);
			aux = aux->proximo;
		}
	}
}

int remover() {
	if(!verificarVazia()){
		No *aux;
		int dado;

		aux = f.inicio;
		dado = f.inicio->dado;
		f.inicio = aux->proximo;

		if(f.inicio == NULL){
			f.final = NULL;
		}
		free(aux);
		return dado;
	} else {
		printf("Fila vazia.\n");
	}
}

int repetido(int numero){
	No *aux;
	aux = f.inicio;

	while(aux != NULL){
		if(aux->dado == numero){
			return 1;
		} 
		aux = aux->proximo;
	}
	return 0;
}