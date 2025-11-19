#include <stdio.h>
#include "pilha.h"

int main(int argc, char *argv[]) {
	int opcao, soma;
	Disco temp;
	inicializar();

	do {
		//exibir o menu
		printf("\n    MENU");
		printf("\n1. Inicializar");
		printf("\n2. Inserir");
		printf("\n3. Remover");
		printf("\n4. Imprimir");
		printf("\n5. Somar");
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
				scanf("%20s", temp.cor);
				printf("Digite um peso: ");
				scanf("%d", &temp.peso);
				push(temp);
				break;
			case 3:
				temp = pop();
				printf("Disco removido: ");
				printf("Cor: %s Peso: %d", temp.cor, temp.peso);
				break;
			case 4:
				imprimir();
				break;
			case 5:
				soma = somaPeso();
				printf("Soma dos pesos: %d", soma);
				break;
			case 6:
				printf("Saindo...");
				break;
			default:
				printf("\nOpcao invalida. Escolha um numero valido de opcao.");
		}
		
	} while(opcao != 6);
}
