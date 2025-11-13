#include <stdio.h>
#include "fila.h"

int main(int argc, char *argv[]) {
	Carrinho temp;
	int opcao, soma;
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
				printf("Digite a quantidade: ");
				scanf("%d", &temp.quant);
				printf("Digite o preco: ");
				scanf("%f", &temp.preco);
				inserir(temp);
				break;
			case 3:
				temp = remover();
				printf("\nNumero removido: %d", temp);
				break;
			case 4:
				imprimir();
				break;
			case 5:
				soma = somar();
				printf("Soma das quantidades: %d", soma);
				break;
			case 6:
				printf("Encerrando o programa...");
				break;
			default:
				printf("\nOpcao invalida. Escolha um numero valido de opcao.");
		}
		
	} while(opcao != 6);
}
