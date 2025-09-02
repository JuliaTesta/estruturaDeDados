#include <stdio.h>

int busca(int valores[], int tamanho, int valor){
    int inicio = 0;
    int final = tamanho-1;
    
    while(inicio<=final){
        int meio = (inicio+final)/2;
        if(valores[meio] == valor){
            return meio;
        } else if(valores[meio] < valor){
            inicio = meio +1;
        } else {
            final = meio -1;
        }
        return -1;
    }
}

int main(){
    int valores[] = {3,5,8,10,20,25,27};
    int posicao = busca(valores, 6, 25);

    if(posicao != -1){
        printf("25 esta na posicao %d", posicao);
    } else {
        printf("25 nao encontrado.\n");
    }
    return 0;
}

//{3,5,8,10,20,25,27};