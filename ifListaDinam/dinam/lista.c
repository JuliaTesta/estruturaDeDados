#include <stdio.h>
#include "lista.h"
#include <stdlib.h>

void inicializar(){
	l.final = NULL;	
}

int verificarVazia(){
	if(l.final == NULL)
		return 1;
	else return 0;
}

void inserir(int numero, int posicao){
	//aloca memoria para um novo noh da lista
	No *novoNo = (No *)malloc(sizeof(No));
	//se foi alocada memoria, adiciona o novoNo na lista
	if(novoNo != NULL){
		//atribuir o elemento ao membro dado do novo noh
		novoNo->dado = numero;
		//atribuir NULL ao campo proximo do novo noh
		novoNo->proximo = NULL;
		//verificar se a lista estah vazia ou se deseja inserir elemento na primeira posicao
		if(verificarVazia() || posicao == 1){
			//o campo proximo do novo noh devera apontar para o noh apontado no inicio
			novoNo->proximo = l.inicio;
			//atualiza o inicio da lista
			l.inicio = novoNo;
		} else {
			//criar um ponteiro para no chamado auxiliar
			No *aux;
			//criar a variavel posicaoNoAuxiliar para saber qual a posicao do noh que auxiliar aponta e inicia com 1
			int cont = 1;
			//ponteiro auxiliar aponta para o primeiro noh da lista
			aux = l.inicio;
			//percorre a lista ateh encontrar o noh na posicao-1 ou o final da lista
			while(cont < posicao-1 && aux->proximo != NULL){
				aux = aux->proximo;
				cont++;
			}
			//atualiza o campo proximo do novoNoh
			novoNo->proximo = aux ->proximo;
			//atualiza o campo proximo do noh auxiliar
			aux->proximo = novoNo;
		}//senao informa o usuario que nao ha mais memoria
		printf("Nao ha mais memoria.\n");	
	}
}

void imprimir() {
	
}

int remover(int posicao) {
	
}