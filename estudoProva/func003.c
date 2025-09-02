#include <stdio.h>
#include<string.h>

int procuraCarac(char caracteres[], char procurado, int t){
    for(int i=0; i<t; i++){
        if(caracteres[i] == procurado){
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
    int posicao = procuraCarac(caracteres, procurado,tamanho);

    if(posicao !=-1){
        printf("O caracter estah na posicao %d", posicao);
    } else {
        printf("O caracter nao foi encontrado.\n");
    }
    return 0;
}