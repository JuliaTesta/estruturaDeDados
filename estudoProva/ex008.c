#include <stdio.h>
#include <string.h>

int contarCaracteres(char palavra[], int p){
    if(palavra[p] == '\0'){
        return 0;
    } else if(palavra[p] == ' '){
        return contarCaracteres(palavra, p+1);
    } else {
        return 1+contarCaracteres(palavra, p+1);
    }
}

int main(){
    char palavra[50];
    
    printf("Digite uma palavra: ");
    scanf("%[^\n]s", palavra);

    int resultado = contarCaracteres(palavra, 0);
    printf("A palavra tem %d caracteres.\n", resultado);
    return 0;
}