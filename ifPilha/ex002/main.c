#include <stdio.h>
#include "pilha.h"

int main(int argc, char *argv[]) {
	int opcao;
    Roupa temp;
	inicializar();

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
				inicializar();
				break;
			case 2:
				printf("Digite o modelo: ");
				scanf(" %50s", temp.modelo);
				printf("Digite a cor: ");
				scanf(" %15s", temp.cor);
				printf("Digite o tamanho: ");
				scanf(" %c", &temp.tamanho);
				push(temp);
				break;
			case 3:
				temp = pop();
				printf("Roupa removida:\n");
				printf("Modelo: %s, Cor: %s, Tamanho: %c\n", temp.modelo, temp.cor, temp.tamanho);
				break;
			case 4:
				imprimir();
				break;
			case 5:
				printf("Encerrando o programa...");
				break;
			default:
				printf("\nOpcao invalida. Escolha um numero valido de opcao.");
		}
		
	} while(opcao != 5);
}
