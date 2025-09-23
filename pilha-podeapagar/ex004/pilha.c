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

void push(int numero){
	//verificar se a pilha nao estah cheia
	if(!verificarCheia()) {
		while(!(numero % 2 == 0)){
			printf("Deve ser par.\n");
			scanf("%d", &numero);
		}
		//atualiza o topo da pilha
		p.topo++;
		//insere o elemento no vetor na posicaoo topo
		p.vetor[p.topo] = numero;
	} else {
		//se estiver cheia, informa o usuario
		printf("\nNao eh possivel inserir, pilha cheia.");
	}
}

int pop(){
	//verificar se a pilha nao estah vazia
	if(!verificarVazia()) {
		//define variavel uma variavel auxiliar
		int aux;
		//variavel auxiliar ira guardar o elemento do topo da pilha
		aux = p.vetor[p.topo];
		//atualiza o topo da pilha
		p.topo--;
		//retorna o numero removido
		return aux;
	} else {
		//se estiver vazia, informa o usuario
		printf("\nA pilha estah vazia.");
		return 0;
	}
}

void imprimir(){
	//verificar se a pilha nao esta vazia
	if(!verificarVazia()) {
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

