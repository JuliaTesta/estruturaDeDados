//Contantes
#define ANDARES 20
#define UNIDADES 8

#include "predio.h"
#include <string.h>


void inicializar(Apartamento predio[][UNIDADES]){
    for(int i=0; i<ANDARES; i++){
        for(int j=0;j<UNIDADES; j++){
            predio[i][j].moradores =0;
            predio[i][j].alugado =0;
            predio[i][j].inadimplente =0;
            strcpy(predio[i][j].nome , " ");
        }
    }
}

void alterarApto(int andar, int unidade, Apartamento predio[][UNIDADES], int moradores, char nome[50], int alugado, int inadimplente){
   
    predio[andar-1][unidade-1].moradores = moradores;
    predio[andar-1][unidade-1].alugado = alugado;
    predio[andar-1][unidade-1].inadimplente = inadimplente;
    strcpy(predio[andar-1][unidade-1].nome, nome);

}

void consutlarApto(int andar, int unidade, Apartamento predio[][UNIDADES]){
 
    printf("No andar %d unidade %d moram %d pessoas.\n", andar, unidade, predio[andar-1][unidade-1].moradores);
    printf("Nome do morador: %s\n", predio[andar-1][unidade-1].nome);
    printf("Eh alugado? %s\n", (predio[andar-1][unidade-1].alugado == 1) ? "Sim" : "Nao");
    printf("Prestacoes em atraso: %d\n", predio[andar-1][unidade-1].inadimplente);

}

void imprimirCadaApto(Apartamento predio[][UNIDADES]){
printf("Andar\tUnidade1\tUnidade2\tUnidade3\tUnidade4\tUnidade5\tUnidade6\tUnidade7\tUnidade 8\n");

for(int i=19; i>=0; i--){
    printf("%d\t", i+1);
    for(int j=0; j<8; j++){
        printf("%d\t\t", predio[i][j].moradores);
    }
    printf("\n");
}
}

void imprimirTotalPredio(Apartamento predio[][UNIDADES]){
int soma = 0;

for(int i=0; i<ANDARES; i++){
    for(int j=0; j<UNIDADES; j++){
        soma += predio[i][j].moradores;
    }
}

printf("Moram %d pessoas no predio.\n", soma);
}

void imprimirCadaAndar(Apartamento predio[][UNIDADES]){
int soma=0;
printf("Andar \t\t Total\n");

for(int i=19; i>=0; i--){
    soma =0;
    for(int j=0; j<UNIDADES; j++){
        soma += predio[i][j].moradores;
    }
    printf("%d\t\t%d\n", i+1, soma);
}
}

void vazios(Apartamento predio[][UNIDADES]){
for(int i=0; i<ANDARES; i++){
    for(int j=0; j<UNIDADES; j++){
        if(predio[i][j].moradores == 0){
            printf("A unidade %d do andar %d esta vazia.\n", j+1, i+1);
        }
    }
}
}

void maisMoradores(Apartamento predio[][UNIDADES]){
int maior = 0;
int maiorAndar=0; 
int maiorUnidade = 0;

for(int i=0; i<ANDARES; i++){
    for(int j=0; j<UNIDADES; j++){
        if(predio[i][j].moradores > maior){
            maior = predio[i][j].moradores;
            maiorAndar = i+1;
            maiorUnidade = j+1;
        }
    }
}
printf("O apto com maior numero de moradores eh a unidade %d do andar %d.\n", maiorUnidade, maiorAndar);
}

 int unidadesInadimplentes(Apartamento predio[][UNIDADES]){
    int cont = 0;
    for(int i=0; i< ANDARES; i++){
        for(int j=0; j<UNIDADES; j++){
            if(predio[i][j].inadimplente > 0){
                cont++;
            }
        }
    }
    return cont;
 }

 void exibirInadimplencia(Apartamento predio[][UNIDADES]){
    printf("Andar\tUnidade\tNome\tAdimplente?\tAtrasos\n");
    for(int i=0; i<ANDARES; i++){
        for(int j=0; j<UNIDADES; j++){
            printf("%d\t%d\t%s\t%s\t%d\n",
            i+1,
            j+1,
            predio[i][j].nome,
            (predio[i][j].inadimplente == 0) ? "Sim" : "Nao",
            predio[i][j].inadimplente);
        }
    }
 }
