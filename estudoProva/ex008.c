#include <stdio.h>
#include <stdlib.h>

int contarCaracteres(char texto[],int p){
    if(texto[p] == '\0'){
        return 0;
    } else if(texto[p] == ' '){
        return contarCaracteres(texto, p+1);
    } else {
        return 1 + contarCaracteres(texto, p+1);
    }
}

int main(){
    char palavra[50];
    int resultado;
    printf("Digite uma palavra: ");
    scanf("%[^\n]s", palavra);

    resultado = contarCaracteres(palavra, 0);
    printf("A palavra tem %d caracteres.", resultado);
    return 0;
}