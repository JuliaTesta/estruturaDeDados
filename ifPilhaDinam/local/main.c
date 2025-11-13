#include <stdio.h>
#include "pilha.h"

int main(int argc, char *argv[]) {
	int temp, opcao, qual;
	Pilha p1, p2;
	inicializar(&p1);
	inicializar(&p2);

	do {
		//exibir o menu
		printf("\n    MENU");
		printf("\n1. Inicializar");
		printf("\n2. Inserir");
		printf("\n3. Remover");
		printf("\n4. Imprimir");
		printf("\n5. Sair");
		printf("\nDigite a opcao desejada: ");
		
		//ler a opcao desejada pelo usuario
		scanf("%d", &opcao);
		if(opcao >= 1 && opcao <=4){
			printf("1 ou 2?");
			scanf("%d", &qual);
		}

		Pilha *pSelecionada = NULL;

		if(qual == 1){
			pSelecionada = &p1;
		} else if (qual ==2){
			pSelecionada = &p2;
		} else {
			printf("Pilha nao existe. Tente Novamente: ");
			continue;
		}
		//processar a funcionalidade
		switch(opcao) {
			case 1:
				inicializar(pSelecionada);
				break;
			case 2:
				printf("Digite um numero: ");
				scanf("%d", &temp);
				push(temp, pSelecionada);
				break;
			case 3:
				temp = pop(pSelecionada);
				printf("Numero removido: %d", temp);
				break;
			case 4:
				imprimir(*pSelecionada);
				break;
			case 5:
				printf("Encerrando o programa...");
				break;
			default:
				printf("\nOpcao invalida. Escolha um numero valido de opcao.");
		}
		
	} while(opcao != 5);
}
