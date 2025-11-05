#include <stdio.h>
#include <string.h>
#include "pilha.h"

int main(int argc, char *argv[]) {
	int opcao;
	Disco temp;
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
				printf("Digite uma cor: ");
				scanf("%s", temp.cor);
				printf("Digite um diametro: ");
				scanf("%d", &temp.diametro);
				printf("Digite um peso: ");
				scanf("%f", &temp.peso);
				push(temp);
				break;
			case 3:
				temp = pop();
				printf("Disco Removido:");
				printf("Cor: %s Diametro: %d Peso: %f", temp.cor, temp.diametro, temp.peso);
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