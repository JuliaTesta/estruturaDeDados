#include "fila.h"
#include <stdio.h>

void inicializar(Fila *f){
	f->final = -1;
}

int verificarVazia(Fila f){
	if(f.final == -1)
		return 1;
	else return 0;
}

int verificarCheia(Fila f) {
	if(f.final == TAM_MAX - 1) //se tiver 5 posicoes, vai de 0 a 4
		return 1;
	else return 0;
}

void inserir(int numero, Fila *f){
	//verificar se a fila nao estah cheia
	if(!verificarCheia(*f)) {
		//atualiza o final da fila	
		f->final++;
		//insere o numero no vetor no final
		f->vetor[f->final] = numero;
	} else {
		//informa o usuario que a fila estah cheia
		printf("\nA fila estah cheia.");
	}
}

void imprimir(Fila f){
	//verificar se a fila nao estah vazia
	if(!verificarVazia(f)) {
		int i;
		printf("\nOs elementos na fila sao: ");
		//percorrer o vetor de 0 ateh f.final
		for(i = 0; i <= f.final; i++)
			//imprimir o elemento na posicao i
			printf(" %d", f.vetor[i]);
	} else {
		printf("\nA fila estah vazia.");
	}
}

int remover(Fila *f) {
	//verificar se a fila nao estah vazia
	if(!verificarVazia(*f)) {
		int aux, i;
		//aux ira guardar o elemento do inicio da fila
		aux = f->vetor[0];
		//translada os elementos do inicio ao fim -1
		for(i = 0; i <= f->final -1; i++) {
			//a posicao i receber o valor da posicao i+1
			f->vetor[i] = f->vetor[i+1];	
		}
		//atualizar o final da fila
		f->final--;
		return aux;
	} else {
		printf("A fila estah vazia.");
	}
}