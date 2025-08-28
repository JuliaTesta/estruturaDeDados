#include <stdio.h>

int busca(int v[], int tamanho, int valor){
    int inicio = 0;
    int final = tamanho - 1;

    while(final >= inicio){
        int meio = (inicio + final)/2;

        if(v[meio] == valor){
            return meio;
        } else if(v[meio] > valor){
            final = meio -1;
        } else {
            inicio = meio + 1;
        }
    }
    return -1;
}


int main(){
    int numeros[] ={3,5,8,10,20,25,27};
    int posicao = busca(numeros, 7, 25);

    if(posicao!=-1){
        printf("25 esta na posicao %d", posicao);
    } else {
        printf("25 nao encontrado.\n");
    }
    return 0;
}