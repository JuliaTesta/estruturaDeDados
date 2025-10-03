#include <stdio.h>
#include "lista.h"

void inicializar(){
	l.final = -1;	
}

int verificarVazia(){
	if(l.final == -1)
		return 1;
	else return 0;
}

int verificarCheia(){
	if(l.final == TAM_MAX - 1)
		return 1;
	else return 0;
}

void inserir(char c, int posicao){
	//verificar se a lista nao estah cheia
	if(!verificarCheia()) {
		//verifica se a posicao eh maior ao final
		if(posicao > l.final) {
			//atualiza final
			l.final++;
			//guarda elemento na posicao final
			l.vetor[l.final] = c;
		} else {
			int i;
			//deixar a posicao livre translando os elementos
			for(i = l.final; i >= posicao; i--)
				l.vetor[i+1] = l.vetor[i];
			//guarda elemento na posicao desejada
		    l.vetor[posicao] = c;
			//atualiza final
			l.final++;
		}
	} else {
		//se ela estiver cheia, avisar usuario
		printf("\nA lista estah cheia.");
	}
}

void imprimir() {
	//verificar se a lista nao esta vazia
	if(!verificarVazia()) {
		//define uma variavel auxiliar
		int i;
		printf("\nOs numeros na lista sao: ");
		//percorrer o vetor do inicio ateh final
		for(i = 0; i <= l.final; i++)
			//imprimir o elemento na posicao i
			printf(" %c ", l.vetor[i]);
	} else {
		//se estiver vazia, informa o usuario
		printf("\nA lista esta vazia");
	}
}

char remover(int posicao) {
	//verifica se a lista nao estah vazia
	if(!verificarVazia()) {
		//verifica se existe elemento valido na posicao desejada
		if(posicao <= l.final) {
			int i;
			//define uma variavel auxiliar
			char aux;
			//variavel auxiliar guarda o elemento da posicao
			aux = l.vetor[posicao];
			//transladar os elementos da posicao ate final - 1
			for(i = posicao; i < l.final; i++)
				l.vetor[i] = l.vetor[i+1];
			//atualiza o final da lista
			l.final--;
			//retorna elemento removido
			return aux;
		} else {
			//se nao existe elemento na posicao, informa o usuario
			printf("\nNao existe elemento na posicao indicada.");
		}
	} else {
		//se lista vazia, informa o usuario
		printf("\nA lista estah vazia.");
	}
	return 0;
}