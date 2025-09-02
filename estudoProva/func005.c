#include <stdio.h>
#include <string.h>

void imprimirSoletrando(char palavra[]){
    int tamanho = strlen(palavra);
    
	for(int i =0; i<tamanho; i++){
        if(palavra[i] != '\0'){
            printf(" %c-", palavra[i]);
        }    
    }
}

