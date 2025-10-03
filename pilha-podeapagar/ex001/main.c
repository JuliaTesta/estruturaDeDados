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
				printf("Digite um modelo: ");
				scanf("%50s", temp.modelo);
				printf("Digite uma cor: ");
				scanf("%15s", temp.cor);

				do{
					printf("Digite o tamanho: ");
					scanf(" %c", &temp.tamanho);

					if(!(temp.tamanho == 'p' || temp.tamanho == 'm' || temp.tamanho == 'g')){
						printf("Tamanho invalido. tente novamente.\n");
					}

				} while (!(temp.tamanho == 'p' || temp.tamanho == 'm' || temp.tamanho == 'g'));
				
				push(temp);
				break;
			case 3:
				temp = pop();
				printf("Roupa removido:\n");
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
