#include <stdio.h>
#include "fila.h"

int main(int argc, char *argv[]) {
	int temp, qual;
	int opcao;
	Fila f1, f2;
	inicializar(&f1);
	inicializar(&f2);

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
		
		if(opcao >= 1 && opcao <= 4){
			printf("Fila 1 ou 2?");
			scanf("%d", &qual);
		}

		Fila *fSelecionada = NULL;

		if(qual == 1){
			fSelecionada = &f1;
		} else if( qual == 2){
			fSelecionada = &f2;
		} else {
			printf("Fila nao existe. Tente novamente: ");
			continue;
		}

		//processar a funcionalidade
		switch(opcao) {
			case 1:
				inicializar(fSelecionada);
				break;
			case 2:
				printf("Digite o numero: ");
				scanf("%d", &temp);
				inserir(temp, fSelecionada);
				break;
			case 3:
				temp = remover(fSelecionada);
				printf("\nNumero removido: %d", temp);
				break;
			case 4:
				imprimir(*fSelecionada);
				break;
			case 5:
				printf("Encerrando o programa...");
				break;
			default:
				printf("\nOpcao invalida. Escolha um numero valido de opcao.");
		}
		
	} while(opcao != 5);
}
