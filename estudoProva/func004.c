#include <stdio.h>
#include <string.h>

int buscaCarac(char caracteres[], int procurado, int t){
    for(int i=t; i>=0; i--){
        if(caracteres[i]==procurado){
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

    int tamanho = strlen(caracteres);
    int posicao = buscaCarac(caracteres, procurado, tamanho);
    if(posicao != -1){
        printf("O caracter %c estah na posicao %d", procurado, posicao);
    } else {
        printf("O caracter %c nao estah na sequencia informada.\n", procurado);
    }
    return 0;
}