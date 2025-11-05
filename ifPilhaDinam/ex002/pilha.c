#include <stdio.h>
#include <string.h>
#include "pilha.h"
#include <stdlib.h>

void inicializar(){
	p.topo = NULL;
}

float verificarVazia(){
	if(p.topo == NULL)
		return 1;
	else return 0;
}

void push(float numero){
	//aloca memoria para um novo noh da pilha
	No *novoNoh  = (No *) malloc(sizeof(No));
	//se foi alocado memoria, adiciona o novoNo no topo da pilha
	if(novoNoh != NULL) {
		//guarda o elemento a inserir na pilha no membro dado do novoNo
		novoNoh->dado = numero;
		//o proximo elemento do novoNo serah o elemento que estah no topo
		novoNoh->anterior = p.topo;
		//Atualiza o topo da pilha
		p.topo = novoNoh;	
	} else{
		//senao informa o usuario que nao ha mais memoria
		printf("\nA pilha estah cheia pois nao ha mais memoria disponivel");
	}
}
float pop(){
	//verificar se a pilha nao estah vazia
	if(!verificarVazia()) {
		//cria variavel que vai apontar para o noh a ser removido
		No *aux;
		//cria variavel para guardar o dado do noh a ser removido
		float dado;
		//aux aponta para o noh do topo
		aux = p.topo;
		//dado ira guardar o elemento do topo da pilha
		dado = p.topo->dado;
		//atualizar o topo da pilha
		p.topo = aux->anterior;
		//libera a memoria ocupada pelo noh removido
		free(aux);
		//retorna o valor do noh removido
		return dado;
	} else {
		//se a pilha estiver vazia, informa o usuario
		printf("\nA pilha estah vazia.");
		return 0;
	}
}

void imprimir(){
	//verificar se a pilha nao estah vazia
	if(!verificarVazia()) {
		//Declara uma variavel ponteiro auxiliar para percorrer os nohs da pilha
		No *aux;
		//comeca a percorrer a partir do topo
		aux = p.topo;
		//enquanto nao chegar no fim
		while(aux != NULL) {
			//imprimir o dado do noh apontado por aux
			printf(" %f\n", aux->dado);
			//vai para o proximo noh
			aux = aux->anterior;
		}	
	} else {
		//se estiver vazia, informa o usuario
		printf("\nA pilha esta vazia.");
	}
}



