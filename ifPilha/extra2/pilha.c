#include <stdio.h>
#include "pilha.h"

void inicializar(){
	p.topo = -1;
}

int verificarVazia(){
	if(p.topo == -1)
		return 1;
	else return 0;
}

int verificarCheia(){
	if(p.topo == TAM_MAX - 1)
		return 1;
	else return 0;
}

void push(Roupa r){
	//verificar se a pilha nao estah cheia
	if(!verificarCheia()) {
		//atualiza o topo da pilha
		p.topo++;
		//insere o elemento no vetor na posicaoo topo
		p.vetor[p.topo] = r;
	} else {
		//se estiver cheia, informa o usuario
		printf("\nNao eh possivel inserir, pilha cheia.");
	}
}

Roupa pop(){
	//verificar se a pilha nao estah vazia
	Roupa vazio = {"","",'\0'};

	if(!verificarVazia()) {
		//define variavel uma variavel auxiliar
		Roupa aux;
		//variavel auxiliar ira guardar o elemento do topo da pilha
		aux = p.vetor[p.topo];
		//atualiza o topo da pilha
		p.topo--;
		//retorna o numero removido
		return aux;
	} else {
		//se estiver vazia, informa o usuario
		printf("\nA pilha estah vazia.");
		return vazio;
	}
}

void imprimir(){
	//verificar se a pilha nao esta vazia
	if(!verificarVazia()) {
		//define uma variavel auxiliar
		int i;
		printf("\nAs roupas na pilha sao:");
		//percorrer o vetor do topo ate a base
		for(i = p.topo; i >= 0; i--)
			//imprimir o elemento na posicao i
			printf("\nModelo: %s, Cor: %s, Tamanho: %c", p.vetor[i].modelo, p.vetor[i].cor, p.vetor[i].tamanho);
	} else {
		//se estiver vazia, informa o usuario
		printf("\nA pilha esta vazia.");
	}
}