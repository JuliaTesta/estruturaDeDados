#include <stdio.h>
#include "pilha.h"

int main(int argc, char *argv[]) {
	int temp, opcao;
	pilha p;
	inicializar(&p);

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
		
		//processar a funcionalidade
		switch(opcao) {
			case 1:
				inicializar(&p);
				break;
			case 2:
				printf("Digite um numero: ");
				scanf("%d", &temp);
				push(temp, &p);
				break;
			case 3:
				temp = pop(&p);
				printf("Numero removido: %d", temp);
				break;
			case 4:
				imprimir(p);
				break;
			case 5:
				printf("Encerrando o programa...");
				break;
			default:
				printf("\nOpcao invalida. Escolha um numero valido de opcao.");
		}
		
	} while(opcao != 5);
}
