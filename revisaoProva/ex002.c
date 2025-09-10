#include <stdio.h>
#include <string.h>

int inverter(char texto[], int t){
    if(t < 0){
        return 0;
    } else {
        printf("%c", texto[t]);
        return inverter(texto, t-1);
    }
}

int main(){
    char palavra[50];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);

    printf("Palavra invertida: ");
    inverter(palavra, tamanho);

    return 0;
}