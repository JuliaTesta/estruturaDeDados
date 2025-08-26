//Fazer uma versão recursiva da busca binária.
#include <stdio.h>

int buscaRecursiva(int v[], int inicio, int final, int valor){

    if(inicio > final){
        return -1;
    }

    int meio = (inicio+final)/2;

    if(v[meio] == valor){
        return meio;
    } else if(v[meio] < valor){
        return buscaRecursiva(v, meio+1, final, valor);
    } else {
        return buscaRecursiva(v, inicio, meio-1, valor);
    }
}

int main(){
    int numeros[] = {3,5,8,10,20,25,37};
    int posicao = buscaRecursiva(numeros, 0, 6, 25);

    if(posicao != -1){
        printf("25 esta na posicao %d", posicao);
    } else {
        printf("25 nao encontrado.\n");
    }

    return 0;
}