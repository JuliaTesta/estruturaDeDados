#include <stdio.h>
#include <string.h>

int busca(char caracteres[], int p){
    for(int i=0; i<strlen(caracteres); i++){
        if(caracteres[i] == p){
            return i;
        }
    }
    return -1;
}

int main(){
    char caracteres[50];
    char procurado;

    printf("Digite uma sequencia de caracteres: ");
    scanf("%s", caracteres);
    printf("Digite o caracter a ser procurado: ");
    scanf(" %c", &procurado);

    int posicao = busca(caracteres, procurado);

    if(posicao != -1){
        printf("O caracter %c estah na posicao %d.\n", procurado, posicao);
    } else {
        printf("O caracter nao foi encontrado.\n");
    }
    return 0;
}