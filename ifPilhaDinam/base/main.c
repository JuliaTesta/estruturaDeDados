#include <stdio.h>
#include "pilha.h"

int main(int argc, char *argv[]) {
	int temp;
	int opcao;
	int qual;
	pilha p1,p2;
	
	inicializar(&p1);
	inicializar(&p2);

	do {
		//exibir o menu
		printf("\n    MENU");
		printf("\n1. Inicializar");
		printf("\n2. Inserir");
		printf("\n3. Remover");
		printf("\n4. Imprimir");
		printf("\n5. Realizar testes de inicializar a pilha");
		printf("\n6. Realizar testes de inserir na pilha");
		printf("\n7. Realizar testes de remover na pilha");
		printf("\n8. Sair");
		printf("\nDigite a opcao desejada: ");
		
		//ler a opcao desejada pelo usuario
		scanf("%d", &opcao);
		
		if(opcao >=1 && opcao <=4){
			printf("pilha 1 ou 2?");
			scanf("%d", &qual);
		}

		pilha *pSelecionada = NULL;

		if(qual == 1){
			pSelecionada = &p1;
		} else {
			pSelecionada = &p2;
		}
		//processar a funcionalidade
		switch(opcao) {
			case 1:
				inicializar(pSelecionada);
				break;
			case 2:
				printf("Digite o numero: ");
				scanf("%d", &temp);
				push(temp, pSelecionada);
				break;
			case 3:
				temp = pop(pSelecionada); 
				printf("\nNumero removido: %d", temp);
				break;
			case 4:
				imprimir(*pSelecionada); //*pSelecionada = a pilha em si (conteudo)
				break;
			case 8:
				printf("Encerrando o programa...");
				break;
			default:
				printf("\nOpcao invalida. Escolha um numero valido de opcao.");
		}
		
	} while(opcao != 8);
}

