#include <stdio.h>
#include "predio.h"
#include <string.h>

int main(){
    int opcao;
    int andar, unidade, moradores;
    Apartamento predio[ANDARES][UNIDADES];

    do{
        printf("1-Inicializar predio\n");
        printf("2-Alterar informações de um apartamento\n");
        printf("3-Consultar os dados de um apartamento\n");
        printf("4-Imprimir o numero de moradores de cada apartamento\n");
        printf("5-Imprimir o numero total de moradores do predio\n");
        printf("6-Imprimir o numero total de moradores de cada andar\n");
        printf("7-Informar quais apartamentos estao vazios (ou seja, sem moradores)\n");
        printf("8-Identificar o apartamento com o maior numero de moradores\n");
        printf("9- Contabilizar o número de unidades inadiplentes\n");
        printf("10- Exibir a situação de adiplência das unidades em formato de tabela\n");
        printf("11- Finalizar Programa\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
        inicializar(predio);
            break;
        
        case 2: {
            char nome[50];
            int moradores, alugado, inadimplente;
    
            printf("Qual o andar? ");
            scanf("%d", &andar);
            printf("Qual a unidade? ");
            scanf("%d", &unidade);
    
            printf("Nome do morador: ");
            scanf("%s", nome);
            printf("Numero de moradores: ");
            scanf("%d", &moradores);
            printf("É alugado (1-sim 2-nao)?");
            scanf("%d", &alugado);
            printf("Numero de prestacoes em atraso: ");
            scanf("%d", &inadimplente);
            
            alterarApto(andar, unidade, predio,moradores, nome, alugado, inadimplente); 
                break;
        }
        

        case 3:
        printf("Qual o andar? \n");
        scanf("%d",&andar);
        printf("Qual a unidade? \n");
        scanf("%d", &unidade);

        consutlarApto(andar, unidade, predio);
            break;

        case 4:
        imprimirCadaApto(predio);
            break;

        case 5:
        imprimirTotalPredio(predio);
            break;

        case 6:
        imprimirCadaAndar(predio);
            break;

        case 7:
        vazios(predio);
            break;

        case 8:
        maisMoradores(predio);
            break;

        case 9:
        unidadesInadimplentes(predio);
            break;

        case 10:
        exibirInadimplencia(predio);
        break;

        case 11:
        printf("Encerrando programa...\n");
        
        default:
        printf("Opcao invalida!\n");
            break;
        }
    } while(opcao!= 11);
}

