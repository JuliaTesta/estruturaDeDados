#include <stdio.h>
#include "fila.h"

int main(int argc, char *argv[]) {
	Carrinho temp;
	int opcao;
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
				printf("Digite o codigo: ");
				scanf("%d", &temp.cod);
				printf("Digite a quantidade: ");
				scanf("%d", &temp.itens);
				printf("Digite o valor: ");
				scanf("%f", &temp.valor);
				inserir(temp);
				break;
			case 3:
				temp = remover();
				printf("\nCarrinho removido: ");
				printf("Codigo: %d Quant: %d valor: %f", temp.cod, temp.itens, temp.valor);
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
