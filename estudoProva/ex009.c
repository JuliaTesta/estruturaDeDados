//Fazer uma versão recursiva da busca binária.
#include <stdio.h>

int busca(int valores[], int inicio, int final, int valor){
    if(final<inicio){
        return -1;
    } 

    int meio = (inicio + final)/2;
    if(valores[meio] == valor){
        return meio;
    } else if(valores[meio] < valor){
        return busca(valores, meio+1, final, valor);
    } else {
        return busca(valores, inicio, meio-1, valor);
    }
}

int main(){
    int valores[] = {3, 5, 8, 10, 20, 25, 37};
    int posicao = busca(valores, 0, 6, 25);

    if(posicao != -1){
        printf("25 estah na posicao %d", posicao);
    } else{
        printf("25 nao encontrado.\n");
    }
    return 0;
}