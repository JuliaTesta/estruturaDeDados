#include <stdio.h>
#include "fila.h"

void inicializar(Fila *f){
	f->final = -1;
}

int verificarVazia(Fila f){
	if(f.final == -1)
		return 1;
	else return 0;
}

int verificarCheia(Fila f) {
	if(f.final == TAM_MAX - 1)
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
		//aux irah guardar o elemento do inicio da fila
		aux = f->vetor[0];
		//translada os elementos do inicio ao fim -1
		for(i = 0; i <= f->final -1; i++)
			//a posicao i receber o valor da posicao i+1
			f->vetor[i] = f->vetor[i+1];
		//atualizar o final da fila
		f->final--;
		return aux;
	} else {
		printf("A fila estah vazia.");
	}
}


//Funcoes para testes automatizados
void emitirResultado(int resultado) {
	if(resultado) 
		printf("\nGREEN: Passou!");
	else printf("\nRED: Nao passou!");
}

void testar1_VaziaFila(){
	Fila f;
	printf("\nTeste 1: Este teste irah verificar a fila vazia");
	inicializar(&f);
	if(verificarVazia(f)) {
		emitirResultado(1);
	} else emitirResultado(0);
}

void testar2_InserirFila(int quant){
	Fila f;
	int numeros[quant], i;
	printf("\nTeste 2: Este teste irah inserir %d elementos na fila", quant);
	if (quant > TAM_MAX)
		printf(", e terah que dizer que a fila estah cheia, inserindo somente os %d primeiros", TAM_MAX);
	
	for(i = 0; i < quant; i++)
		numeros[i] = i+1;
		
	inicializar(&f);
	for(i = 0; i < quant; i++)
		inserir(numeros[i], &f);
		
	for(i = 0; i < quant && i < TAM_MAX; i++)
		if(f.vetor[i] != numeros[i]) {
			emitirResultado(0);
			return;
		}
	emitirResultado(1);
}

void testar3_RemoverFila(){
	Fila f;
	int removido = 0;
	printf("\nTeste 3: Este teste irah tentar remover de uma fila vazia");
	inicializar(&f);
	removido = remover(&f);
	if(verificarVazia(f))
		emitirResultado(1);
	else emitirResultado(0);
}

void testar4_RemoverFila(int quant){
	Fila f;
	int removido = 0, i, numeros[quant];
	printf("\nTeste 4: Este teste irah inserir %d elemento na fila e remove-lo, deixando a fila vazia", quant);
	for(i = 0; i < quant; i++)
		numeros[i] = i+1;
	
	inicializar(&f);
	for(i = 0; i < quant; i++) {
		inserir(numeros[i], &f);
	}
	
	for(i = 0;  i < quant && i < TAM_MAX; i++) {
		removido = remover(&f);
		if(removido != numeros[i]) {
			emitirResultado(0);
			return;
		}
	}
	//verifica se a fila ficou vazia
	if(verificarVazia(f))
		emitirResultado(1);
	else emitirResultado(0);
}

