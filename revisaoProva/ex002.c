#include <stdio.h>
#include <string.h>

int inverter(char texto[], int t){
    if(t<0){
        return 0;
    } else {
        printf("%c",texto[t]);
        return inverter(texto, t-1);
    }
}

int main(){
    char palavra[50];
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int tamanho= strlen(palavra);
   
    printf("A palavra invertida eh: ");
    inverter(palavra, tamanho-1);
    return 0;
}