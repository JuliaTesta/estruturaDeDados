#include "fila.h"
#include <stdio.h>
#include <stdlib.h>

void inicializar(){
	f.final = NULL;
	f.inicio = NULL;
}

int verificarVazia(){
	if(f.final == NULL && f.inicio == NULL){
		return 1;
	} else {
		return 0;
	}
}

void inserir(Carrinho c){
	//aloca memoria para um novo noh da fila
	No *novoNo = (No *)malloc(sizeof(No));
	//se foi alocado memoria, adiciona o novoNo no fim da fila
	if(novoNo != NULL){
		//guarda o numero a inserir na fila na variavel dado do novoNo
		novoNo->dado = c;
		//o novoNo sera o ultimo elemento da fila, logo nao tem próximo
		novoNo->proximo = NULL;
		//se a fila estiver vazia, o novoNo sera tambem o inicio da fila
		if(verificarVazia()){
			f.inicio = novoNo;
			f.final = novoNo;
		} else {
			//se ja tiver elementos na fila, adiciona o novoNo apos o noh que estah no final da fila
			f.final->proximo = novoNo;
			//atualiza o final da fila para que seja o novoNo
			f.final = novoNo;
		}
	} else {
		//senao informa o usuario que nao ha mais memoria
		printf("Nao ha mais memoria disponivel.\n");
	}
}

void imprimir(){
	//verificar se a fila nao estah vazia
	if(!verificarVazia()){
		//Declara uma variavel ponteiro auxiliar para percorrer os nohs da fila
		No *aux;
		//comeca a percorre a fila do inicio
		aux = f.inicio;
		//enquanto nao chegar no fim
		while (aux != NULL){
			//imprimir o dado do noh apontado por aux
			printf("Codigo: %d Preco: %d", aux->dado.cod, aux->dado.preco);
			//vai para o proximo noh
			aux = aux->proximo;
		}
	} else {
		//se estiver vazia, informa o usuario
		printf("Fila vazia.\n");
	}
}

Carrinho remover() {
	//verificar se a fila não estah vazia
	if(!verificarVazia()){
		//cria variavel que vai apontar para o noh a ser removido
		No *aux;
		//cria variavel para guardar o dado do noh a ser removido
		Carrinho dado;
		//aux aponta para o noh do inicio da fila
		aux = f.inicio;
		//dado ira guardar o elemento do inicio da fila
		dado = f.inicio->dado;
		//atualizar o inicio da fila
		f.inicio = aux->proximo;
		//se o noh removido for o no final da fila, atualiza o final da fila
		if(f.inicio == NULL){
			f.final = NULL;
		}
		//libera a memoria ocupada pelo noh removido
		free(aux);
		//retorna o valor do noh removido
		return dado;
	} else {
		//se a fila estiver vazia, informa o usuario
		printf("Fila vazia.\n");
	}	
}
int somar(){
	No *aux;
	aux = f.inicio;
	int soma = 0;

	while(aux != NULL){
		soma += aux->dado.preco;
		aux = aux->proximo;
	}
	return soma;
}