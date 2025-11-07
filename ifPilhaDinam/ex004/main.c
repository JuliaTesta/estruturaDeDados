	#include <stdio.h>
	#include "pilha.h"

	int main(int argc, char *argv[]) {
		int  opcao, soma;
		Caixa temp;
		inicializar();

		do {
			//exibir o menu
			printf("\n    MENU");
			printf("\n1. Inicializar");
			printf("\n2. Inserir");
			printf("\n3. Remover");
			printf("\n4. Imprimir");
			printf("\n5. Soma");
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
					printf("Digite um codigo: ");
					scanf("%d", &temp.cod);
					printf("Digite um peso: ");
					scanf("%d", &temp.peso);
					push(temp);
					break;
				case 3:
					temp = pop();
					printf("Caixa removida:");
					printf("Codigo: %d Peso: %d",temp.cod, temp.peso);
					break;
				case 4:
					imprimir();
					break;
				case 5:
					soma = somaPilha();
					printf("Soma da pilha: %d", soma);
					break;
				case 6:
					printf("Encerrando o programa...");
					break;
				default:
					printf("\nOpcao invalida. Escolha um numero valido de opcao.");
			}
			
		} while(opcao != 6);
	}
