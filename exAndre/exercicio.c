#include <stdio.h>

//Contantes
#define ANDARES 20
#define UNIDADES 8

//Protótipo Funções
void inicializar();
void alterarApto();
void consutlarApto();
void imprimirCadaApto();
void imprimirTotalPredio();
void imprimirCadaAndar();
void vazios();
void maisMoradores();

int main(){
    int opcao;
    int andar, unidade, moradores;
    int predio[ANDARES][UNIDADES];

    do{
        printf("1-Inicializar predio\n");
        printf("2-Alterar numero de moradores de um apartamento\n");
        printf("3-Consultar numero de moradores de um apartamento\n");
        printf("4-Imprimir o numero de moradores de cada apartamento\n");
        printf("5-Imprimir o numero total de moradores do predio\n");
        printf("6-Imprimir o numero total de moradores de cada andar\n");
        printf("7-Informar quais apartamentos estao vazios (ou seja, sem moradores)\n");
        printf("8-Identificar o apartamento com o maior numero de moradores\n");
        printf("9- Finalizar Programa\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
        inicializar(predio);
            break;
        
        case 2:
        printf("Qual o andar? \n");
        scanf("%d",&andar);
        printf("Qual a unidade? \n");
        scanf("%d", &unidade);
        printf("Qual o numero de moradores?\n");
        scanf("%d", &moradores);

        alterarApto(andar, unidade, moradores, predio); 
            break;

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
        printf("Encerrando programa...\n");
            break;

        default:
        printf("Opcao invalida!\n");
            break;
        }
    } while(opcao!= 9);
}

void inicializar(int predio[][UNIDADES]){
        for(int i=0; i<ANDARES; i++){
            for(int j=0;j<UNIDADES; j++){
                predio[i][j] = 0; //Se colocasse [andares][unidades] zeraria apenas o ultimo ap
            }
        }
}

void alterarApto(int andar, int unidade, int moradores, int predio[][UNIDADES]){
       
        predio[andar-1][unidade-1] = moradores;
}

void consutlarApto(int andar, int unidade, int predio[][UNIDADES]){
     
        printf("No andar %d unidade %d moram %d pessoas.\n", andar, unidade, predio[andar-1][unidade-1]);

}

void imprimirCadaApto(int predio[][UNIDADES]){
    printf("Andar\tUnidade1\tUnidade2\tUnidade3\tUnidade4\tUnidade5\tUnidade6\tUnidade7\tUnidade 8\n");

    for(int i=19; i>=0; i--){
        printf("%d\t", i+1);
        for(int j=0; j<8; j++){
            printf("%d\t\t", predio[i][j]);
        }
        printf("\n");
    }
}

void imprimirTotalPredio(int predio[][UNIDADES]){
    int soma =0;

    for(int i=0; i<ANDARES; i++){
        for(int j=0; j<UNIDADES; j++){
            soma += predio[i][j];
        }
    }

    printf("Moram %d pessoas no predio.\n", soma);
}

void imprimirCadaAndar(int predio[][UNIDADES]){
    int soma=0;
    printf("Andar \t\t Total\n");

    for(int i=19; i>=0; i--){
        soma =0;
        for(int j=0; j<UNIDADES; j++){
            soma += predio[i][j];
        }
        printf("%d\t\t%d\n", i+1, soma);
    }
}

void vazios(int predio[][UNIDADES]){
    for(int i=0; i<ANDARES; i++){
        for(int j=0; j<UNIDADES; j++){
            if(predio[i][j] == 0){
                printf("A unidade %d do andar %d esta vazia.\n", j+1, i+1);
            }
        }
    }
}

void maisMoradores(int predio[][UNIDADES]){
    int maior = 0;
    int maiorAndar=0; 
    int maiorUnidade = 0;

    for(int i=0; i<ANDARES; i++){
        for(int j=0; j<UNIDADES; j++){
            if(predio[i][j] > maior){
                maior = predio[i][j];
                maiorAndar = i+1;
                maiorUnidade = j+1;
            }
        }
    }
    printf("O apto com maior numero de moradores eh a unidade %d do andar %d.\n", maiorUnidade, maiorAndar);
}


