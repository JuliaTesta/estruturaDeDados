#include <stdio.h>
#include <string.h>

int consoantes(char caracteres[], int t){
    int cont =0;
    for(int i=0; i<t; i++){
        if(!(caracteres[i] == 'A' || caracteres[i] == 'a' || caracteres[i] == 'E' || caracteres[i] == 'e' || caracteres[i] == 'I' || caracteres[i] == 'i' || caracteres[i] == 'O' || caracteres[i] == 'o' || caracteres[i]=='U' || caracteres[i] == 'u')){
            cont++;
        }
    }
    return cont;
}

int main(){
    char caracteres[50];
    int tamanho; 

    printf("Digite uma sequencia de caracteres: ");
    scanf("%s", caracteres);

    tamanho = strlen(caracteres);
    
    printf("Quantidade de consoantes: %d", consoantes(caracteres, tamanho));
    return 0;
}