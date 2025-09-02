#include <stdio.h>
#include "gerenciarPredio.h"

#define NOME_ARQUIVO "dados.bin"

void salvarMatriz(Apartamento matriz[][qtdUnidades]);
void lerMatriz(Apartamento matriz[][qtdUnidades]);

int main() {
    int opcao;
    int andar, unidade, numero;
    Apartamento predio[qtdAndares][qtdUnidades];
    Apartamento ap;

    do {
        printf("\n\n1) Inicializar o predio\n");
        printf("2) Alterar informacoes de um apartamento\n");
        printf("3) Consultar dados de um apartamento\n");
        printf("4) Imprimir o numero de moradores de cada apartamento\n");
        printf("5) Imprimir o numero total de moradores do prédio\n");
        printf("6) Imprimir o numero total de moradores de cada andar\n");
        printf("7) Informar quais apartamentos estão vazios (ou seja, sem moradores)\n");
        printf("8) Identificar o apartamento com o maior numero de moradores\n");
        printf("9) Ler dados do arquivo.\n");
        printf("10) Escrever dados no arquivo.\n");
        printf("11) Contabilizar unidades inadimplentes.\n");
        printf("12) Exibir inadimplencia.\n");
        printf("13) Encerrar Programa\n");
        printf("Digite uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: 
                inicializarPredio(predio);
                break;
            case 2: 
                printf("Digite o andar: ");
                scanf("%d", &andar);
                printf("Digite a unidade: ");
                scanf("%d", &unidade);
                printf("Digite o numero de moradores: ");
                scanf("%d", &ap.moradores);
                printf("Digite o nome do morador: ");
                scanf("%s", ap.nomeMorador);
                printf("Alugado(s/n)? ");
                scanf(" %c", &ap.alugado);
                printf("Inadimplencia: ");
                scanf("%d", &ap.inadimplencia);
                alterarInformacoesApartamento(andar, unidade, predio, ap);
                break;
            case 3:
                printf("Digite o andar: ");
                scanf("%d", &andar);
                printf("Digite a unidade: ");
                scanf("%d", &unidade);
                exibirDadosUnidade(andar, unidade, predio, ap);
                break;
            case 4:
                exibirMoradores(predio);
                break;
            case 5:
                printf("\nExistem %d pessoas morando no predio.", 
                    calcularTotalMoradores(predio));
                break;
            case 6:
                exibirTotalMoradoresPorAndar(predio);
                break;
            case 7:
                exibirApartamentosVazios(predio);
                break;
            case 8:
                 exibirUnidadeMaiorMoradores(predio);
                break;
            case 9:
                salvarMatriz(predio);
                break;
            case 10:
                lerMatriz(predio);
                break;
            case 11:
                contarInadimplente(predio);
                break;
            case 12:
                exibitInadimplencia(predio);
                break;
            case 13:
            printf("Encerrando programa...\n");
                break;
            default:
                printf("Opcao invalida. Escolha entre 1 a 9.");
        }
    } while(opcao != 13);
}


// Função para salvar a matriz no arquivo binário
void salvarMatriz(Apartamento matriz[][qtdUnidades]) {
    FILE *arquivo = fopen(NOME_ARQUIVO, "wb");
    if (arquivo != NULL) {
        size_t elementosGravados = fwrite(matriz, sizeof(int), qtdAndares*qtdUnidades, arquivo);
        if (elementosGravados != qtdAndares*qtdUnidades) {
            printf("Erro ao escrever a matriz no arquivo");
        }
        fclose(arquivo);        
    } else {
        printf("Erro ao abrir o arquivo para escrita");
    }
}

// Função para ler a matriz do arquivo binário
void lerMatriz(Apartamento matriz[][qtdUnidades]) {
    FILE *arquivo = fopen(NOME_ARQUIVO, "rb");
    if (arquivo != NULL) {
        size_t elementosLidos = fread(matriz, sizeof(int), qtdAndares*qtdUnidades, arquivo);
        if (elementosLidos != qtdAndares*qtdUnidades) {
            printf("Erro ao ler a matriz do arquivo");
        } 
        fclose(arquivo);        
    } else {
        printf("Erro ao abrir o arquivo para leitura");
    }
}
