#include <stdio.h>
#include <string.h>
#include "gerenciarPredio.h"

#define qtdAndares 20
#define qtdUnidades 8

int teste = 8;

void inicializarPredio(Apartamento predio[][qtdUnidades]) {
    for(int i = 0; i < qtdAndares; i ++) {
        for(int j = 0; j < qtdUnidades; j++) {
            predio[i][j].moradores = 0;
            predio[i][j].alugado = 'n';
            predio[i][j].inadimplencia = 0;
            strcpy(predio[i][j].nomeMorador, " ");
        }
    }
}

void alterarInformacoesApartamento(int andar, int unidade, Apartamento predio[][qtdUnidades], Apartamento ap){
    predio[andar-1][unidade-1] = ap;
}

void exibirDadosUnidade(int andar, int unidade, Apartamento predio[][qtdUnidades], Apartamento ap) {
    printf("\nNo andar %d unidade %d moram %d pessoas\n", andar, 
        unidade, ap.moradores);
    printf("\nNome do morador: %s\n", ap.nomeMorador);
    printf("\nAlugado: %c\n",ap.alugado);
    printf("\nInadimplencia: %d\n", ap.inadimplencia);
}

void exibirMoradores(Apartamento predio[][qtdUnidades]){
    printf("Andar");
    for(int i = 0; i < qtdUnidades; i++)
        printf("\tUnd %d", i+1);

    for(int i = qtdAndares-1; i >= 0; i--) {
        printf("\n%d", i+1);
        for(int j = 0; j < qtdUnidades; j++) {
            printf("\t%d", predio[i][j].moradores);
        }
    }
}

int calcularTotalMoradores(Apartamento predio[][qtdUnidades]){
    int soma = 0;
    for(int i = 0; i < qtdAndares; i++) {
        for(int j = 0; j < qtdUnidades; j++) {
            soma += predio[i][j].moradores;
        }
    }
    return soma;
}

void exibirTotalMoradoresPorAndar(Apartamento predio[][qtdUnidades]){
    printf("Andar \t Total");
    for(int i = 0; i < qtdAndares; i++) {
        int soma = 0;
        for(int j = 0; j < qtdUnidades; j++) {
            soma += predio[i][j].moradores;
        }
        printf("%d \t %d", i+1, soma);
    }
}

void exibirApartamentosVazios(Apartamento predio[][qtdUnidades]){
    for(int i = 0; i < qtdAndares; i++) {
        for(int j = 0; j < qtdUnidades; j++) {
            if(predio[i][j].moradores == 0) {
                printf("\nA unidade %d do andar %d estah vazia.", 
                    j+1, i+1);
            }
        }
    }
}

void exibirUnidadeMaiorMoradores(Apartamento predio[][qtdUnidades]){
    int maior = 0, andarMaior = 0, unidadeMaior = 0;
    for(int i = 0; i < qtdAndares; i++) {
        for(int j = 0; j < qtdUnidades; j++) {
            if(predio[i][j].moradores > maior) {
                maior = predio[i][j].moradores;
                andarMaior = i;
                unidadeMaior = j;
            }
        }
    }
    printf("\nO apartamento com maior numero de moradores eh a unidade %d do andar %d.", 
        unidadeMaior+1, andarMaior+1);
}

int contarInadimplente(Apartamento predio[][qtdUnidades]){
    int cont = 0;
    for(int i = 0; i < qtdAndares; i++) {
        for(int j = 0; j < qtdUnidades; j++) {
            if(predio[i][j].inadimplencia > 0) {
                cont++;
            }
        }
    }
    printf("\nUnidades inadimplentes: %d\n", cont);
}

int exibitInadimplencia(Apartamento predio[][qtdUnidades]){
    printf("Andar");
    for(int i = 0; i < qtdUnidades; i++)
        printf("\tUnd %d", i+1);

    for(int i = qtdAndares-1; i >= 0; i--) {
        printf("\n%d", i+1);
        for(int j = 0; j < qtdUnidades; j++) {
            printf("\t%d", predio[i][j].inadimplencia);
        }
    }
}