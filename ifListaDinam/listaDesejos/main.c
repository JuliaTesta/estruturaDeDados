#include <stdio.h>
#include "lista.h"
#include "string.h"

int main(int argc, char *argv[]) {
	int temp, posicao;
	int opcao;
	Lista l;
	inicializar(&l);
	itemDesejo desejo;
	
	do {
		//exibir o menu
		printf("\n\n\nQUESTAO 4 - LISTA DE DESEJOS");
		printf("\n    MENU");
		printf("\n1. Inicializar");
		printf("\n2. Incluir desejo");
		printf("\n3. Remover desejo");
		printf("\n4. Imprimir desejos");
		printf("\n5. Inserir alguns desejos de teste");
		printf("\n8. Sair");
		printf("\nDigite a opcao desejada: ");
		
		//ler a opcao desejada pelo usuario
		scanf("%d", &opcao);
		
		//processar a funcionalidade
		switch(opcao) {
			case 1:
				inicializar(&l);
				break;
			case 2:
				printf("Digite o desejo: ");
				scanf("%[^\n]s", desejo.item);
				printf("Digite a quantidade: ");
				scanf("%d", &desejo.quantidade);
				printf("Digite a posicao: ");
				scanf("%d", &posicao);
				inserir(desejo, posicao, &l);
				break;
			case 3:
				printf("Digite a posicao: ");
				scanf("%d", &posicao);
				desejo = remover(posicao, &l);
				if(strcmp(desejo.item, "") != 0)
					printf("\nDesejo removido: %s", desejo.item);
				break;
			case 4:
				imprimir(l);
				break;				
			case 5: {
				printf("\nInserindo dados de testes");
				itemDesejo carrinho = {"carrinho de controle remoto", 2},
				boneca = {"boneca bebe reborn", 5},
				massinha = {"massinha de modelar colorida", 10};
				
				printf("\nInserindo 2 carrinhos de controle remoto");
				inserir(carrinho, 0, &l);
				printf("\nInserindo 5 bonecas bebe reborn");
				inserir(boneca, 1, &l);
				printf("\nInserindo 10 massinhas de modelar colorida");
				inserir(massinha, 0, &l);
				}
			
				break;
			case 8:
				printf("Encerrando o programa...");
				break;
			default:
				printf("\nOpcao invalida. Escolha um numero valido de opcao.");
		}
		
	} while(opcao != 8);
}
