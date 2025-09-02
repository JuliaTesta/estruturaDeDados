#include <stdio.h>
#include <string.h>

int contar(char texto[], int p){
    if(texto[p] == '\0'){
        return 0;
    } else if(texto[p] == ' '){
        return contar(texto, p+1);
    } else {
        return 1+ contar(texto, p+1);
    }
}

int main(){
    char palavra[50];
    
    printf("Digite uma palavra: ");
    scanf("%[^\n]s", palavra);

    int resultado = contar(palavra, 0);
    printf("A palavra tem %d caracteres.\n", resultado);
}