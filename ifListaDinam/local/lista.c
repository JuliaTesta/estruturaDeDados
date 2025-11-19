#include <stdio.h>
#include "lista.h"
#include <stdlib.h>

void inicializar(Lista *l){
	l->inicio = NULL;
}

int verificarVazia(Lista l){
	if(l.inicio == NULL){
		return 1;
	} else {
		return 0;
	}
}

void inserir(int numero, int posicao, Lista *l){
	//alocar memoria para um novo noh da lista
	No *novoNo = (No *)malloc(sizeof(No));
	//se foi alocada memoria, adiciona o novoNo na lista
	if(novoNo != NULL){
		//atribuir o elemento ao membro dado do novo noh
		novoNo->dado = numero;
		//atribuir NULL ao campo proximo do novo noh
		novoNo->proximo = NULL; //estou apenas iniciando, depois vamos sobrescrever
		//verificar se a lista estah vazia ou se deseja inserir elemento na primeira posicao
		if(verificarVazia(*l) || posicao == 1){
			//o campo proximo do novo noh devera apontar para o noh apontado no inicio
			novoNo->proximo = l->inicio;
			//atualiza o inicio da lista
			l->inicio = novoNo;
		}//senao
		else {
			//criar um ponteiro para no chamado auxiliar
			No *aux;
			//criar uma variavel contador para saber qual a posicao do noh que auxiliar aponta e inicia com 1
			int cont = 1;
			//ponteiro auxiliar aponta para o primeiro noh da lista
			aux = l->inicio;
			//percorre a lista ateh encontrar o noh na posicao-1 ou o final da lista
			while(cont < posicao -1 && aux->proximo != NULL){
				aux = aux->proximo;
				cont++;
			}
				//atualiza o campo proximo do novoNoh
				novoNo->proximo = aux->proximo;
				//atualiza o campo proximo do noh auxiliar
				aux->proximo = novoNo;
		} 
	} else {
		//senao informa o usuario que nao ha mais memoria
		printf("Nao ha mais memoria disponivel.\n");
	}	
}

void imprimir(Lista l) {
	//verificar se a lista nao estah vazia
	if(!verificarVazia(l)){
		//Declara uma variavel ponteiro auxiliar para percorrer os nohs da lista
		No *aux;
		//comeca a percorrer a partir do inicio
		aux = l.inicio;
		//enquanto nao chegar no fim
		while(aux != NULL){
			//imprimir o dado do noh apontado pelo ponteiro auxiliar
			printf("%d ", aux->dado);
			//vai para o proximo noh
			aux = aux->proximo;
		}
	} else {
		//se estiver vazia, informa o usuario
		printf("A lista estah vazia.\n");
	}
}
 
int remover(int posicao, Lista *l) {
	//verifica se a lista nao estah vazia
	if(!verificarVazia(*l)){
		//cria variavel auxiliar ponteiro para um noh
		No *aux;
		//cria variavel para guardar o dado do noh a ser removido
		int dado;
		//verificar se eh o primeiro elemento q sera removido
		if(posicao == 1){	
			//variavel auxiliar aponta para o primeiro noh
			aux = l->inicio;
			//atualiza o inicio da lista
			l->inicio = aux->proximo;
			dado = aux->dado;
			free(aux);
			return dado;
		} //senao
		else {
			//declara uma variavel ponteiro noAnterior para percorrer os nohs da lista
			No *noAnterior;
			//criar uma variavel contador para saber qual a posicao do noh que anoAnterior aponta e inicia com 1
			int cont = 1;
			//ponteiro noAnterior aponta para o primeiro noh da lista
			noAnterior = l->inicio;
			//percorre a lista ateh encontra o noh de posicao anterior ao noh da posicao a remover ou final da lista
			while(cont < posicao-1 && noAnterior->proximo != NULL){
				noAnterior = noAnterior->proximo;
				cont++;
			}
			//se nao existe um noh na posicao desejada
			if(noAnterior->proximo == NULL){
				return -1;
				
			}	//se existir um noh na posicao desejada
				//ponteiro auxiliar aponta para o noh a ser removido
				aux = noAnterior->proximo;
				//atualiza o membro proximo do noh anterior para apontar para o noh seguinte ao no apontado pelo ponteiro auxiliar
				noAnterior->proximo = aux->proximo;
				//atribuir o dado do noh a remover para a variavel dado	
				dado = aux->dado;
				//libera a memoria ocupada pelo noh removido
				free(aux);
				//retorna o valor do noh removido
				return dado;
		}	
	} else {
		//senao informa que a lista estah vazia
		printf("A lista estah vazia.\n");
		return -1;
	}
}


