#include <stdio.h>
#include "pilha.h"

void inicializar(Pilha *p){
	p->topo = -1;
}

int verificarVazia(Pilha p){
	if(p.topo == -1)
		return 1;
	else return 0;
}

int verificarCheia(Pilha p){
	if(p.topo == TAM_MAX - 1)
		return 1;
	else return 0;
}

void push(int numero, Pilha *p){
	//verificar se a pilha nao estah cheia
	if(!verificarCheia(*p)) {
		//atualiza o topo da pilha
		p->topo++;
		//insere o elemento no vetor na posicaoo topo
		p->vetor[p->topo] = numero;
	} else {
		//se estiver cheia, informa o usuario
		printf("\nNao eh possivel inserir, pilha cheia.");
	}
}

int pop(Pilha *p){
	//verificar se a pilha nao estah vazia
	if(!verificarVazia(*p)) {
		//define variavel uma variavel auxiliar
		int aux;
		//variavel auxiliar ira guardar o elemento do topo da pilha
		aux = p->vetor[p->topo];
		//atualiza o topo da pilha
		p->topo--;
		//retorna o numero removido
		return aux;
	} else {
		//se estiver vazia, informa o usuario
		printf("\nA pilha estah vazia.");
		return 0;
	}
}

void imprimir(Pilha p){
	//verificar se a pilha nao esta vazia
	if(!verificarVazia(p)) {
		//define uma variavel auxiliar
		int i;
		printf("\nOs elementos na pilha sao:");
		//percorrer o vetor do topo ate a base
		for(i = p.topo; i >= 0; i--)
			//imprimir o elemento na posicao i
			printf("\n%d", p.vetor[i]);
	} else {
		//se estiver vazia, informa o usuario
		printf("\nA pilha esta vazia.");
	}
}