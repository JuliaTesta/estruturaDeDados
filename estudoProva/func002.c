#include <stdio.h>
#include <string.h>

int quantVogais(char caracteres[]){
    int cont =0;

    for(int i=0; i<strlen(caracteres); i++){
        if(caracteres[i] == 'A' || caracteres[i] == 'a' || caracteres[i] == 'E' || caracteres[i] =='e' || caracteres[i] == 'I' || caracteres[i] == 'i' || caracteres[i] == 'O' || caracteres[i] == 'o' || caracteres[i] == 'U' || caracteres[i] == 'u'){
            cont++;
        }
    }
    return cont;
}

int main(){
    char sequencia[10];

    printf("Digite uma sequencia de caracteres: ");
    scanf("%s", sequencia);

    printf("Quantidade de vogais: %d", quantVogais(sequencia));
    return 0;
}