#include <stdio.h>
#include "lista.h"

int main(int argc, char *argv[]) {
	int temp, posicao;
	int opcao;
	Lista l;
	inicializar(&l);

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
				inicializar(&l);
				break;
			case 2:
				printf("Digite o numero: ");
				scanf("%d", &temp);
				printf("Digite a posicao: ");
				scanf("%d", &posicao);
				inserir(temp, posicao,&l);
				break;
			case 3:
				printf("Digite a posicao: ");
				scanf("%d", &posicao);
				temp = remover(posicao, &l);
				printf("\nNumero removido: %d", temp);
				break;
			case 4:
				imprimir(l);
				break;
			case 5:
				printf("Encerrando...\n");
				break;
			default:
				printf("\nOpcao invalida. Escolha um numero valido de opcao.");
		}
		
	} while(opcao != 5);
}
