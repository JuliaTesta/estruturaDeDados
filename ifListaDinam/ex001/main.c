#include <stdio.h>
#include <string.h>
#include "lista.h"

int main(int argc, char *argv[]) {
	int opcao, temp, posicao, qual;
	Lista l1,l2;

	do {
		//exibir o menu
		printf("\n MENU");
		printf("\n1. Inicializar");
		printf("\n2. Inserir");
		printf("\n3. Remover");
		printf("\n4. Exibir");
		printf("\n5. Sair");
		printf("\nDigite a opcao desejada: ");
		//pedir a opcao ao usuario
		scanf("%i", &opcao);
		
		if(opcao >=1 && opcao <= 4){
			printf("Qual lista(1 ou 2)?");
			scanf("%d", &qual);
		}

		Lista *lSelecionada = NULL;

		if(qual == 1){
			lSelecionada = &l1;
		} else {
			lSelecionada = &l2;
		}
		//processar a opcao desejada
		switch(opcao) {
			case 1:
				inicializar(lSelecionada);
				break;
			case 2:
				printf("\nDigite um numero: ");
				scanf("%d", &temp);
				printf("\nDigite a posicao: ");
				scanf("%d", &posicao);
				inserir(temp, posicao, lSelecionada);
				break;
			case 3:
				printf("\nDigite a posicao: ");
				scanf("%d", &posicao);
				temp = remover(posicao, lSelecionada);
				printf("\nNumero removido: %d",
					temp);
				break;
			case 4:
				imprimir(*lSelecionada);
				break;
			case 5:
				printf("\nSaindo do programa...");
				break;
			default:
				printf("\nEscolha uma opcao valida!");
		}
		
	} while (opcao != 5);
	return 0;
}