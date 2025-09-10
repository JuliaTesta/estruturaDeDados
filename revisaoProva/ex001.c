#include <stdio.h>
#include <string.h>

int criptografar(char palavra1[], char palavra2[], char palavra3[], char textoCriptografado[]){
    int tamanho = strlen(palavra1);
    int a=0;

    for(int i=0; i<tamanho; i++){
        textoCriptografado[a++] = palavra1[i];
        textoCriptografado[a++] = palavra2[i];
        textoCriptografado[a++] = palavra3[i];
    }
    textoCriptografado[a] = '\0';
    return tamanho;
}

void descriptografar(char textoCriptografado[], int tamanho, char palavra1[], char palavra2[],
char palavra3[]){
    int a=0;

    for(int i=0; i<tamanho; i++){
        palavra1[i] = textoCriptografado[a++];
        palavra2[i] = textoCriptografado[a++];
        palavra3[i] = textoCriptografado[a++];
    }
    palavra1[tamanho] = '\0';
    palavra2[tamanho] = '\0';
    palavra3[tamanho] = '\0';
}


int main(){
    char palavra1[50], palavra2[50], palavra3[50];
    char textoCriptografado[50];
    char desc1[50], desc2[50], desc3[50];

    printf("Digite a palavra 1: ");
    scanf("%s", palavra1);
    printf("Digite a palavra 2: ");
    scanf("%s", palavra2);
    printf("Digite a palavra 3: ");
    scanf("%s", palavra3);

    if(strlen(palavra1) != strlen(palavra2) || strlen(palavra1) != strlen(palavra3)){
        printf("As palavras devem ter o mesmo tamanho.\n");
    }

    int linhas = criptografar(palavra1, palavra2, palavra3, textoCriptografado);
    printf("Texto criptografado: %s\n", textoCriptografado);

    descriptografar(textoCriptografado, linhas, desc1, desc2, desc3);
    printf("Descriptografado: \n");
    printf("Palavra 1: %s\n", desc1);
    printf("Palavra 2: %s\n", desc2);
    printf("Palavra 3: %s\n", desc3);

    return 0;
}
