#include <stdio.h>
#include "fila.h"

int main(int argc, char *argv[]) {
	Navio temp;
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
				printf("Digite o nome: ");
				scanf("%50s", temp.nome);
				printf("Digite a origem: ");
				scanf("%15s", temp.origem);
				printf("Digite o peso: ");
				scanf("%f", &temp.peso);
				inserir(temp);
				break;
			case 3:
				temp = remover();
				printf("\nNavio removido:\n");
				printf("Nome: %s, Origem: %s, Peso: %f\n", temp.nome, temp.origem, temp.peso);
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
