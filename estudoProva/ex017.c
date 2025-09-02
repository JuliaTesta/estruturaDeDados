#include <stdio.h>
#include <string.h>
//palavra invertida

int invertida(char texto[50], int tamanho){
    if(tamanho < 0 ){
        return 0;
    } else {
        printf("%c", texto[tamanho]);
        return invertida(texto, tamanho-1);
    }
}

int main(){
    char palavra[50];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);

    printf("A palavra invertida eh: ");
    invertida(palavra, tamanho-1);
    return 0;
}