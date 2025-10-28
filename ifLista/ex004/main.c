#include <stdio.h>
#include <string.h>
#include "lista.h"

int main(int argc, char *argv[]) {
	int opcao,posicao;
	float temp;
	
	do {
		//exibir o menu
		printf("\n MENU");
		printf("\n1. Inicializar");
		printf("\n2. Inserir");
		printf("\n3. Remover");
		printf("\n4. Exibir");
		printf("\n5. Excluir Maiores");
		printf("\n6. Sair");
		printf("\nDigite a opcao desejada: ");
		//pedir a opcao ao usuario
		scanf("%i", &opcao);
		
		//processar a opcao desejada
		switch(opcao) {
			case 1:
				inicializar();
				break;
			case 2:
				printf("\nDigite um numero: ");
				scanf("%f", &temp);
				printf("\nDigite a posicao: ");
				scanf("%d", &posicao);
				inserir(temp, posicao);
				break;
			case 3:
				printf("\nDigite a posicao: ");
				scanf("%d", &posicao);
				temp = remover(posicao);
				printf("\nNumero removido: %.2f",
					temp);
				break;
			case 4:
				imprimir();
				break;
			case 5:
				printf("Excluir numeros maiores do que: ");
				scanf("%f", &temp);
				excluirMaiores(temp);
				break;
			case 6:
				printf("\nSaindo do programa...");
				break;
			default:
				printf("\nEscolha uma opcao valida!");
		}
		
	} while (opcao != 6);
	return 0;
}