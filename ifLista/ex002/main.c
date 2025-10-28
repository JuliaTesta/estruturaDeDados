#include <stdio.h>
#include <string.h>
#include "lista.h"

int main(int argc, char *argv[]) {
	int opcao, posicao;
	Contato temp;

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
		
		//processar a opcao desejada
		switch(opcao) {
			case 1:
				inicializar();
				break;
			case 2:
				printf("\nDigite o nome: ");
				scanf(" %100s", temp.nome);
				printf("Digite o apelido: ");
				scanf(" %50s", temp.apelido);
				printf("Digite a data da ultima conversa: ");
				scanf("%12s", temp.ultimaConversa);
				printf("\nDigite a posicao: ");
				scanf("%d", &posicao);
				inserir(temp, posicao);
				break;
			case 3:
				printf("\nDigite a posicao: ");
				scanf("%d", &posicao);
				temp = remover(posicao);
				printf("\nContato removido:");
				printf("Nome: %s Apelido: %s Data:%s", temp.nome, temp.apelido, temp.ultimaConversa);
				break;
			case 4:
				imprimir();
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